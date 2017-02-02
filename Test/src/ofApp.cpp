#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    oflog(OF_LOG_NOTICE,"this number" + ofstring(10));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawBezier(10, 10, 100, 100, 40, 40, 60, 60)
    ofDrawBitmapString(<#const T &textString#>, <#float x#>, <#float y#>)
    ofDrawBitmapStringHighlight(string text, const ofPoint &position, const ofColor &background=black, const ofColor &foreground=white)
    ofDrawCircle(float x, float y, float radius)
    ofDrawCurve(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3)
    ofDrawEllipse(float x, float y, float width, float height)
    ofDrawTriangle(float x1, float y1, float x2, float y2, float x3, float y3)
    ofDrawLine(float x1, float y1, float x2, float y2)
    ofFill()
    ofNoFill()
    ofBackground(<#int r#>, <#int g#>, <#int b#>)
    ofBackgroundGradient(<#const ofColor &start#>, <#const ofColor &end#>)
    ofdraw
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

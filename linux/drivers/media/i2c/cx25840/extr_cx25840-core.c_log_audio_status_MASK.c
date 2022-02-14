
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int aud_input; } ;


 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (struct i2c_client*) ;
 struct cx25840_state* FUNC_2 (int ) ;
 int FUNC_3 (struct i2c_client*,char*,...) ;

__attribute__((used)) static void FUNC_4(struct i2c_client *VAR_0)
{
 struct cx25840_state *VAR_1 = FUNC_2(FUNC_1(VAR_0));
 u8 VAR_2 = FUNC_0(VAR_0, 0x803);
 u8 VAR_3 = FUNC_0(VAR_0, 0x804);
 u8 VAR_4 = FUNC_0(VAR_0, 0x805);
 u8 VAR_5 = FUNC_0(VAR_0, 0x808);
 u8 VAR_6 = FUNC_0(VAR_0, 0x809);
 u8 VAR_7 = FUNC_0(VAR_0, 0x80b);
 u8 VAR_8 = FUNC_0(VAR_0, 0x8d3);
 int VAR_9 = VAR_1->aud_input;
 char *VAR_10;

 switch (VAR_3) {
 case 0x00:
  VAR_10 = "mono";
  break;
 case 0x01:
  VAR_10 = "stereo";
  break;
 case 0x02:
  VAR_10 = "dual";
  break;
 case 0x04:
  VAR_10 = "tri";
  break;
 case 0x10:
  VAR_10 = "mono with SAP";
  break;
 case 0x11:
  VAR_10 = "stereo with SAP";
  break;
 case 0x12:
  VAR_10 = "dual with SAP";
  break;
 case 0x14:
  VAR_10 = "tri with SAP";
  break;
 case 0xfe:
  VAR_10 = "forced mode";
  break;
 default:
  VAR_10 = "not defined";
 }
 FUNC_3(VAR_0, "Detected audio mode:       %s\n", VAR_10);

 switch (VAR_4) {
 case 0x00:
  VAR_10 = "not defined";
  break;
 case 0x01:
  VAR_10 = "EIAJ";
  break;
 case 0x02:
  VAR_10 = "A2-M";
  break;
 case 0x03:
  VAR_10 = "A2-BG";
  break;
 case 0x04:
  VAR_10 = "A2-DK1";
  break;
 case 0x05:
  VAR_10 = "A2-DK2";
  break;
 case 0x06:
  VAR_10 = "A2-DK3";
  break;
 case 0x07:
  VAR_10 = "A1 (6.0 MHz FM Mono)";
  break;
 case 0x08:
  VAR_10 = "AM-L";
  break;
 case 0x09:
  VAR_10 = "NICAM-BG";
  break;
 case 0x0a:
  VAR_10 = "NICAM-DK";
  break;
 case 0x0b:
  VAR_10 = "NICAM-I";
  break;
 case 0x0c:
  VAR_10 = "NICAM-L";
  break;
 case 0x0d:
  VAR_10 = "BTSC/EIAJ/A2-M Mono (4.5 MHz FMMono)";
  break;
 case 0x0e:
  VAR_10 = "IF FM Radio";
  break;
 case 0x0f:
  VAR_10 = "BTSC";
  break;
 case 0x10:
  VAR_10 = "high-deviation FM";
  break;
 case 0x11:
  VAR_10 = "very high-deviation FM";
  break;
 case 0xfd:
  VAR_10 = "unknown audio standard";
  break;
 case 0xfe:
  VAR_10 = "forced audio standard";
  break;
 case 0xff:
  VAR_10 = "no detected audio standard";
  break;
 default:
  VAR_10 = "not defined";
 }
 FUNC_3(VAR_0, "Detected audio standard:   %s\n", VAR_10);
 FUNC_3(VAR_0, "Audio microcontroller:     %s\n",
   (VAR_2 & 0x10) ?
   ((VAR_8 & 0x2) ? "detecting" : "running") : "stopped");

 switch (VAR_5 >> 4) {
 case 0x00:
  VAR_10 = "undefined";
  break;
 case 0x01:
  VAR_10 = "BTSC";
  break;
 case 0x02:
  VAR_10 = "EIAJ";
  break;
 case 0x03:
  VAR_10 = "A2-M";
  break;
 case 0x04:
  VAR_10 = "A2-BG";
  break;
 case 0x05:
  VAR_10 = "A2-DK1";
  break;
 case 0x06:
  VAR_10 = "A2-DK2";
  break;
 case 0x07:
  VAR_10 = "A2-DK3";
  break;
 case 0x08:
  VAR_10 = "A1 (6.0 MHz FM Mono)";
  break;
 case 0x09:
  VAR_10 = "AM-L";
  break;
 case 0x0a:
  VAR_10 = "NICAM-BG";
  break;
 case 0x0b:
  VAR_10 = "NICAM-DK";
  break;
 case 0x0c:
  VAR_10 = "NICAM-I";
  break;
 case 0x0d:
  VAR_10 = "NICAM-L";
  break;
 case 0x0e:
  VAR_10 = "FM radio";
  break;
 case 0x0f:
  VAR_10 = "automatic detection";
  break;
 default:
  VAR_10 = "undefined";
 }
 FUNC_3(VAR_0, "Configured audio standard: %s\n", VAR_10);

 if ((VAR_5 >> 4) < 0xF) {
  switch (VAR_5 & 0xF) {
  case 0x00:
   VAR_10 = "MONO1 (LANGUAGE A/Mono L+R channel for BTSC, EIAJ, A2)";
   break;
  case 0x01:
   VAR_10 = "MONO2 (LANGUAGE B)";
   break;
  case 0x02:
   VAR_10 = "MONO3 (STEREO forced MONO)";
   break;
  case 0x03:
   VAR_10 = "MONO4 (NICAM ANALOG-Language C/Analog Fallback)";
   break;
  case 0x04:
   VAR_10 = "STEREO";
   break;
  case 0x05:
   VAR_10 = "DUAL1 (AB)";
   break;
  case 0x06:
   VAR_10 = "DUAL2 (AC) (FM)";
   break;
  case 0x07:
   VAR_10 = "DUAL3 (BC) (FM)";
   break;
  case 0x08:
   VAR_10 = "DUAL4 (AC) (AM)";
   break;
  case 0x09:
   VAR_10 = "DUAL5 (BC) (AM)";
   break;
  case 0x0a:
   VAR_10 = "SAP";
   break;
  default:
   VAR_10 = "undefined";
  }
  FUNC_3(VAR_0, "Configured audio mode:     %s\n", VAR_10);
 } else {
  switch (VAR_5 & 0xF) {
  case 0x00:
   VAR_10 = "BG";
   break;
  case 0x01:
   VAR_10 = "DK1";
   break;
  case 0x02:
   VAR_10 = "DK2";
   break;
  case 0x03:
   VAR_10 = "DK3";
   break;
  case 0x04:
   VAR_10 = "I";
   break;
  case 0x05:
   VAR_10 = "L";
   break;
  case 0x06:
   VAR_10 = "BTSC";
   break;
  case 0x07:
   VAR_10 = "EIAJ";
   break;
  case 0x08:
   VAR_10 = "A2-M";
   break;
  case 0x09:
   VAR_10 = "FM Radio";
   break;
  case 0x0f:
   VAR_10 = "automatic standard and mode detection";
   break;
  default:
   VAR_10 = "undefined";
  }
  FUNC_3(VAR_0, "Configured audio system:   %s\n", VAR_10);
 }

 if (VAR_9) {
  FUNC_3(VAR_0, "Specified audio input:     Tuner (In%d)\n",
    VAR_9);
 } else {
  FUNC_3(VAR_0, "Specified audio input:     External\n");
 }

 switch (VAR_6 & 0xf) {
 case 0:
  VAR_10 = "mono/language A";
  break;
 case 1:
  VAR_10 = "language B";
  break;
 case 2:
  VAR_10 = "language C";
  break;
 case 3:
  VAR_10 = "analog fallback";
  break;
 case 4:
  VAR_10 = "stereo";
  break;
 case 5:
  VAR_10 = "language AC";
  break;
 case 6:
  VAR_10 = "language BC";
  break;
 case 7:
  VAR_10 = "language AB";
  break;
 default:
  VAR_10 = "undefined";
 }
 FUNC_3(VAR_0, "Preferred audio mode:      %s\n", VAR_10);

 if ((VAR_5 & 0xf) == 0xf) {
  switch ((VAR_7 >> 3) & 0x3) {
  case 0:
   VAR_10 = "system DK";
   break;
  case 1:
   VAR_10 = "system L";
   break;
  case 2:
   VAR_10 = "autodetect";
   break;
  default:
   VAR_10 = "undefined";
  }
  FUNC_3(VAR_0, "Selected 65 MHz format:    %s\n", VAR_10);

  switch (VAR_7 & 0x7) {
  case 0:
   VAR_10 = "chroma";
   break;
  case 1:
   VAR_10 = "BTSC";
   break;
  case 2:
   VAR_10 = "EIAJ";
   break;
  case 3:
   VAR_10 = "A2-M";
   break;
  case 4:
   VAR_10 = "autodetect";
   break;
  default:
   VAR_10 = "undefined";
  }
  FUNC_3(VAR_0, "Selected 45 MHz format:    %s\n", VAR_10);
 }
}

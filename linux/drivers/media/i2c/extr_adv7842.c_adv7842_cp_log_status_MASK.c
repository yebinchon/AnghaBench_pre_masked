
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int name; } ;
struct v4l2_dv_timings {int dummy; } ;
struct adv7842_state {int cec_valid_addrs; char const* const* cec_addr; size_t rgb_quantization_range; struct v4l2_dv_timings timings; scalar_t__ hdmi_port_a; scalar_t__ cec_enabled_adap; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*) ;
 scalar_t__ FUNC_1 (struct v4l2_subdev*,struct v4l2_dv_timings*) ;
 int FUNC_2 (struct v4l2_subdev*,int) ;
 int FUNC_3 (struct v4l2_subdev*,int) ;
 int FUNC_4 (struct v4l2_subdev*,int) ;
 int FUNC_5 (struct v4l2_subdev*) ;
 scalar_t__ FUNC_6 (struct v4l2_subdev*) ;
 scalar_t__ FUNC_7 (struct v4l2_subdev*) ;
 scalar_t__ FUNC_8 (struct v4l2_subdev*) ;
 int FUNC_9 (struct v4l2_subdev*,int) ;
 struct adv7842_state* FUNC_10 (struct v4l2_subdev*) ;
 int FUNC_11 (struct v4l2_subdev*,char*,...) ;
 int FUNC_12 (int ,char*,struct v4l2_dv_timings*,int) ;

__attribute__((used)) static int FUNC_13(struct v4l2_subdev *VAR_1)
{

 struct adv7842_state *VAR_2 = FUNC_10(VAR_1);
 struct v4l2_dv_timings VAR_3;
 u8 VAR_4 = FUNC_4(VAR_1, 0x02);
 u8 VAR_5 = FUNC_4(VAR_1, 0x21);
 u8 VAR_6 = FUNC_9(VAR_1, 0x77);
 u8 VAR_7 = FUNC_9(VAR_1, 0x7d);
 bool VAR_8 = FUNC_3(VAR_1, 0x04) & 0x01;
 bool VAR_9 = FUNC_3(VAR_1, 0x18) & 0x01;
 bool VAR_10 = FUNC_4(VAR_1, 0x65) & 0x40;

 static const char * const VAR_11[16] = {
  "bypassed", "YPbPr601 -> RGB", "reserved", "YPbPr709 -> RGB",
  "reserved", "RGB -> YPbPr601", "reserved", "RGB -> YPbPr709",
  "reserved", "YPbPr709 -> YPbPr601", "YPbPr601 -> YPbPr709",
  "reserved", "reserved", "reserved", "reserved", "manual"
 };
 static const char * const VAR_12[16] = {
  "RGB limited range (16-235)", "RGB full range (0-255)",
  "YCbCr Bt.601 (16-235)", "YCbCr Bt.709 (16-235)",
  "xvYCC Bt.601", "xvYCC Bt.709",
  "YCbCr Bt.601 (0-255)", "YCbCr Bt.709 (0-255)",
  "invalid", "invalid", "invalid", "invalid", "invalid",
  "invalid", "invalid", "automatic"
 };
 static const char * const VAR_13[] = {
  "Automatic",
  "RGB limited range (16-235)",
  "RGB full range (0-255)",
 };
 static const char * const VAR_14[4] = {
  "8-bits per channel",
  "10-bits per channel",
  "12-bits per channel",
  "16-bits per channel (not supported)"
 };

 FUNC_11(VAR_1, "-----Chip status-----\n");
 FUNC_11(VAR_1, "Chip power: %s\n", FUNC_8(VAR_1) ? "off" : "on");
 FUNC_11(VAR_1, "HDMI/DVI-D port selected: %s\n",
   VAR_2->hdmi_port_a ? "A" : "B");
 FUNC_11(VAR_1, "EDID A %s, B %s\n",
    ((VAR_7 & 0x04) && (VAR_6 & 0x04)) ?
    "enabled" : "disabled",
    ((VAR_7 & 0x08) && (VAR_6 & 0x08)) ?
    "enabled" : "disabled");
 FUNC_11(VAR_1, "HPD A %s, B %s\n",
    VAR_5 & 0x02 ? "enabled" : "disabled",
    VAR_5 & 0x01 ? "enabled" : "disabled");
 FUNC_11(VAR_1, "CEC: %s\n", VAR_2->cec_enabled_adap ?
   "enabled" : "disabled");
 if (VAR_2->cec_enabled_adap) {
  int VAR_15;

  for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
   bool VAR_16 = VAR_2->cec_valid_addrs & (1 << VAR_15);

   if (VAR_16)
    FUNC_11(VAR_1, "CEC Logical Address: 0x%x\n",
       VAR_2->cec_addr[VAR_15]);
  }
 }

 FUNC_11(VAR_1, "-----Signal status-----\n");
 if (VAR_2->hdmi_port_a) {
  FUNC_11(VAR_1, "Cable detected (+5V power): %s\n",
     FUNC_4(VAR_1, 0x6f) & 0x02 ? "true" : "false");
  FUNC_11(VAR_1, "TMDS signal detected: %s\n",
     (FUNC_4(VAR_1, 0x6a) & 0x02) ? "true" : "false");
  FUNC_11(VAR_1, "TMDS signal locked: %s\n",
     (FUNC_4(VAR_1, 0x6a) & 0x20) ? "true" : "false");
 } else {
  FUNC_11(VAR_1, "Cable detected (+5V power):%s\n",
     FUNC_4(VAR_1, 0x6f) & 0x01 ? "true" : "false");
  FUNC_11(VAR_1, "TMDS signal detected: %s\n",
     (FUNC_4(VAR_1, 0x6a) & 0x01) ? "true" : "false");
  FUNC_11(VAR_1, "TMDS signal locked: %s\n",
     (FUNC_4(VAR_1, 0x6a) & 0x10) ? "true" : "false");
 }
 FUNC_11(VAR_1, "CP free run: %s\n",
    (!!(FUNC_2(VAR_1, 0xff) & 0x10) ? "on" : "off"));
 FUNC_11(VAR_1, "Prim-mode = 0x%x, video std = 0x%x, v_freq = 0x%x\n",
    FUNC_4(VAR_1, 0x01) & 0x0f, FUNC_4(VAR_1, 0x00) & 0x3f,
    (FUNC_4(VAR_1, 0x01) & 0x70) >> 4);

 FUNC_11(VAR_1, "-----Video Timings-----\n");
 if (FUNC_7(VAR_1)) {
  FUNC_11(VAR_1, "STDI: not locked\n");
 } else {
  u32 VAR_17 = ((FUNC_2(VAR_1, 0xb1) & 0x3f) << 8) | FUNC_2(VAR_1, 0xb2);
  u32 VAR_18 = ((FUNC_2(VAR_1, 0xb3) & 0x7) << 8) | FUNC_2(VAR_1, 0xb4);
  u32 VAR_19 = FUNC_2(VAR_1, 0xb3) >> 3;
  u32 VAR_20 = ((FUNC_2(VAR_1, 0xb8) & 0x1f) << 8) | FUNC_2(VAR_1, 0xb9);
  char VAR_21 = ((FUNC_2(VAR_1, 0xb5) & 0x10) ?
    ((FUNC_2(VAR_1, 0xb5) & 0x08) ? '+' : '-') : 'x');
  char VAR_22 = ((FUNC_2(VAR_1, 0xb5) & 0x40) ?
    ((FUNC_2(VAR_1, 0xb5) & 0x20) ? '+' : '-') : 'x');
  FUNC_11(VAR_1,
   "STDI: lcf (frame height - 1) = %d, bl = %d, lcvs (vsync) = %d, fcl = %d, %s, %chsync, %cvsync\n",
   VAR_18, VAR_17, VAR_19, VAR_20,
   (FUNC_2(VAR_1, 0xb1) & 0x40) ?
    "interlaced" : "progressive",
   VAR_21, VAR_22);
 }
 if (FUNC_1(VAR_1, &VAR_3))
  FUNC_11(VAR_1, "No video detected\n");
 else
  FUNC_12(VAR_1->name, "Detected format: ",
          &VAR_3, 1);
 FUNC_12(VAR_1->name, "Configured format: ",
   &VAR_2->timings, 1);

 if (FUNC_7(VAR_1))
  return 0;

 FUNC_11(VAR_1, "-----Color space-----\n");
 FUNC_11(VAR_1, "RGB quantization range ctrl: %s\n",
    VAR_13[VAR_2->rgb_quantization_range]);
 FUNC_11(VAR_1, "Input color space: %s\n",
    VAR_12[VAR_4 >> 4]);
 FUNC_11(VAR_1, "Output color space: %s %s, alt-gamma %s\n",
    (VAR_4 & 0x02) ? "RGB" : "YCbCr",
    (((VAR_4 >> 2) & 0x01) ^ (VAR_4 & 0x01)) ?
   "(16-235)" : "(0-255)",
    (VAR_4 & 0x08) ? "enabled" : "disabled");
 FUNC_11(VAR_1, "Color space conversion: %s\n",
    VAR_11[FUNC_2(VAR_1, 0xf4) >> 4]);

 if (!FUNC_5(VAR_1))
  return 0;

 FUNC_11(VAR_1, "-----%s status-----\n", FUNC_6(VAR_1) ? "HDMI" : "DVI-D");
 FUNC_11(VAR_1, "HDCP encrypted content: %s\n",
   (FUNC_3(VAR_1, 0x05) & 0x40) ? "true" : "false");
 FUNC_11(VAR_1, "HDCP keys read: %s%s\n",
   (FUNC_3(VAR_1, 0x04) & 0x20) ? "yes" : "no",
   (FUNC_3(VAR_1, 0x04) & 0x10) ? "ERROR" : "");
 if (!FUNC_6(VAR_1))
  return 0;

 FUNC_11(VAR_1, "Audio: pll %s, samples %s, %s\n",
   VAR_8 ? "locked" : "not locked",
   VAR_9 ? "detected" : "not detected",
   VAR_10 ? "muted" : "enabled");
 if (VAR_8 && VAR_9) {
  FUNC_11(VAR_1, "Audio format: %s\n",
   (FUNC_3(VAR_1, 0x07) & 0x40) ? "multi-channel" : "stereo");
 }
 FUNC_11(VAR_1, "Audio CTS: %u\n", (FUNC_3(VAR_1, 0x5b) << 12) +
   (FUNC_3(VAR_1, 0x5c) << 8) +
   (FUNC_3(VAR_1, 0x5d) & 0xf0));
 FUNC_11(VAR_1, "Audio N: %u\n", ((FUNC_3(VAR_1, 0x5d) & 0x0f) << 16) +
   (FUNC_3(VAR_1, 0x5e) << 8) +
   FUNC_3(VAR_1, 0x5f));
 FUNC_11(VAR_1, "AV Mute: %s\n",
   (FUNC_3(VAR_1, 0x04) & 0x40) ? "on" : "off");
 FUNC_11(VAR_1, "Deep color mode: %s\n",
   VAR_14[FUNC_3(VAR_1, 0x0b) >> 6]);

 FUNC_0(VAR_1);

 return 0;
}

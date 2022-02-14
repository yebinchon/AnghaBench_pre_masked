
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int name; } ;
struct v4l2_dv_timings {int dummy; } ;
struct stdi_readback {int vs_pol; int hs_pol; scalar_t__ interlaced; int lcvs; int bl; int lcf; } ;
struct adv76xx_state {int cec_valid_addrs; char const* const* cec_addr; size_t rgb_quantization_range; struct v4l2_dv_timings timings; scalar_t__ cec_enabled_adap; struct adv76xx_chip_info* info; } ;
struct adv76xx_chip_info {int (* read_cable_det ) (struct v4l2_subdev*) ;int cp_csc; int edid_status_reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*) ;
 scalar_t__ FUNC_1 (struct v4l2_subdev*,struct v4l2_dv_timings*) ;
 int FUNC_2 (struct v4l2_subdev*,int ) ;
 int FUNC_3 (struct v4l2_subdev*,int) ;
 scalar_t__ FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (struct v4l2_subdev*,int) ;
 int FUNC_6 (struct v4l2_subdev*) ;
 scalar_t__ FUNC_7 (struct v4l2_subdev*) ;
 scalar_t__ FUNC_8 (struct v4l2_subdev*) ;
 scalar_t__ FUNC_9 (struct v4l2_subdev*) ;
 scalar_t__ FUNC_10 (struct v4l2_subdev*) ;
 scalar_t__ FUNC_11 (struct v4l2_subdev*) ;
 scalar_t__ FUNC_12 (struct v4l2_subdev*) ;
 scalar_t__ FUNC_13 (struct v4l2_subdev*) ;
 scalar_t__ FUNC_14 (struct v4l2_subdev*) ;
 scalar_t__ FUNC_15 (struct v4l2_subdev*,struct stdi_readback*) ;
 int FUNC_16 (struct v4l2_subdev*,int ) ;
 int FUNC_17 (struct v4l2_subdev*) ;
 struct adv76xx_state* FUNC_18 (struct v4l2_subdev*) ;
 int FUNC_19 (struct v4l2_subdev*,char*,...) ;
 int FUNC_20 (int ,char*,struct v4l2_dv_timings*,int) ;

__attribute__((used)) static int FUNC_21(struct v4l2_subdev *VAR_1)
{
 struct adv76xx_state *VAR_2 = FUNC_18(VAR_1);
 const struct adv76xx_chip_info *VAR_3 = VAR_2->info;
 struct v4l2_dv_timings VAR_4;
 struct stdi_readback VAR_5;
 u8 VAR_6 = FUNC_5(VAR_1, 0x02);
 u8 VAR_7;
 u8 VAR_8;

 static const char * const VAR_9[16] = {
  "bypassed", "YPbPr601 -> RGB", "reserved", "YPbPr709 -> RGB",
  "reserved", "RGB -> YPbPr601", "reserved", "RGB -> YPbPr709",
  "reserved", "YPbPr709 -> YPbPr601", "YPbPr601 -> YPbPr709",
  "reserved", "reserved", "reserved", "reserved", "manual"
 };
 static const char * const VAR_10[16] = {
  "RGB limited range (16-235)", "RGB full range (0-255)",
  "YCbCr Bt.601 (16-235)", "YCbCr Bt.709 (16-235)",
  "xvYCC Bt.601", "xvYCC Bt.709",
  "YCbCr Bt.601 (0-255)", "YCbCr Bt.709 (0-255)",
  "invalid", "invalid", "invalid", "invalid", "invalid",
  "invalid", "invalid", "automatic"
 };
 static const char * const VAR_11[16] = {
  "RGB limited range (16-235)", "RGB full range (0-255)",
  "YCbCr Bt.601 (16-235)", "YCbCr Bt.709 (16-235)",
  "xvYCC Bt.601", "xvYCC Bt.709",
  "YCbCr Bt.601 (0-255)", "YCbCr Bt.709 (0-255)",
  "sYCC", "opYCC 601", "opRGB", "invalid", "invalid",
  "invalid", "invalid", "invalid"
 };
 static const char * const VAR_12[] = {
  "Automatic",
  "RGB limited range (16-235)",
  "RGB full range (0-255)",
 };
 static const char * const VAR_13[4] = {
  "8-bits per channel",
  "10-bits per channel",
  "12-bits per channel",
  "16-bits per channel (not supported)"
 };

 FUNC_19(VAR_1, "-----Chip status-----\n");
 FUNC_19(VAR_1, "Chip power: %s\n", FUNC_12(VAR_1) ? "off" : "on");
 VAR_7 = FUNC_16(VAR_1, VAR_3->edid_status_reg);
 FUNC_19(VAR_1, "EDID enabled port A: %s, B: %s, C: %s, D: %s\n",
   ((VAR_7 & 0x01) ? "Yes" : "No"),
   ((VAR_7 & 0x02) ? "Yes" : "No"),
   ((VAR_7 & 0x04) ? "Yes" : "No"),
   ((VAR_7 & 0x08) ? "Yes" : "No"));
 FUNC_19(VAR_1, "CEC: %s\n", VAR_2->cec_enabled_adap ?
   "enabled" : "disabled");
 if (VAR_2->cec_enabled_adap) {
  int VAR_14;

  for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
   bool VAR_15 = VAR_2->cec_valid_addrs & (1 << VAR_14);

   if (VAR_15)
    FUNC_19(VAR_1, "CEC Logical Address: 0x%x\n",
       VAR_2->cec_addr[VAR_14]);
  }
 }

 FUNC_19(VAR_1, "-----Signal status-----\n");
 VAR_8 = VAR_3->read_cable_det(VAR_1);
 FUNC_19(VAR_1, "Cable detected (+5V power) port A: %s, B: %s, C: %s, D: %s\n",
   ((VAR_8 & 0x01) ? "Yes" : "No"),
   ((VAR_8 & 0x02) ? "Yes" : "No"),
   ((VAR_8 & 0x04) ? "Yes" : "No"),
   ((VAR_8 & 0x08) ? "Yes" : "No"));
 FUNC_19(VAR_1, "TMDS signal detected: %s\n",
   FUNC_14(VAR_1) ? "false" : "true");
 FUNC_19(VAR_1, "TMDS signal locked: %s\n",
   FUNC_11(VAR_1) ? "false" : "true");
 FUNC_19(VAR_1, "SSPD locked: %s\n", FUNC_9(VAR_1) ? "false" : "true");
 FUNC_19(VAR_1, "STDI locked: %s\n", FUNC_10(VAR_1) ? "false" : "true");
 FUNC_19(VAR_1, "CP locked: %s\n", FUNC_8(VAR_1) ? "false" : "true");
 FUNC_19(VAR_1, "CP free run: %s\n",
   (FUNC_4(VAR_1)) ? "on" : "off");
 FUNC_19(VAR_1, "Prim-mode = 0x%x, video std = 0x%x, v_freq = 0x%x\n",
   FUNC_5(VAR_1, 0x01) & 0x0f, FUNC_5(VAR_1, 0x00) & 0x3f,
   (FUNC_5(VAR_1, 0x01) & 0x70) >> 4);

 FUNC_19(VAR_1, "-----Video Timings-----\n");
 if (FUNC_15(VAR_1, &VAR_5))
  FUNC_19(VAR_1, "STDI: not locked\n");
 else
  FUNC_19(VAR_1, "STDI: lcf (frame height - 1) = %d, bl = %d, lcvs (vsync) = %d, %s, %chsync, %cvsync\n",
    VAR_5.lcf, VAR_5.bl, VAR_5.lcvs,
    VAR_5.interlaced ? "interlaced" : "progressive",
    VAR_5.hs_pol, VAR_5.vs_pol);
 if (FUNC_1(VAR_1, &VAR_4))
  FUNC_19(VAR_1, "No video detected\n");
 else
  FUNC_20(VAR_1->name, "Detected format: ",
          &VAR_4, 1);
 FUNC_20(VAR_1->name, "Configured format: ",
         &VAR_2->timings, 1);

 if (FUNC_13(VAR_1))
  return 0;

 FUNC_19(VAR_1, "-----Color space-----\n");
 FUNC_19(VAR_1, "RGB quantization range ctrl: %s\n",
   VAR_12[VAR_2->rgb_quantization_range]);
 FUNC_19(VAR_1, "Input color space: %s\n",
   VAR_10[VAR_6 >> 4]);
 FUNC_19(VAR_1, "Output color space: %s %s, alt-gamma %s\n",
   (VAR_6 & 0x02) ? "RGB" : "YCbCr",
   (((VAR_6 >> 2) & 0x01) ^ (VAR_6 & 0x01)) ?
    "(16-235)" : "(0-255)",
   (VAR_6 & 0x08) ? "enabled" : "disabled");
 FUNC_19(VAR_1, "Color space conversion: %s\n",
   VAR_9[FUNC_2(VAR_1, VAR_3->cp_csc) >> 4]);

 if (!FUNC_6(VAR_1))
  return 0;

 FUNC_19(VAR_1, "-----%s status-----\n", FUNC_7(VAR_1) ? "HDMI" : "DVI-D");
 FUNC_19(VAR_1, "Digital video port selected: %c\n",
   (FUNC_3(VAR_1, 0x00) & 0x03) + 'A');
 FUNC_19(VAR_1, "HDCP encrypted content: %s\n",
   (FUNC_3(VAR_1, 0x05) & 0x40) ? "true" : "false");
 FUNC_19(VAR_1, "HDCP keys read: %s%s\n",
   (FUNC_3(VAR_1, 0x04) & 0x20) ? "yes" : "no",
   (FUNC_3(VAR_1, 0x04) & 0x10) ? "ERROR" : "");
 if (FUNC_7(VAR_1)) {
  bool VAR_16 = FUNC_3(VAR_1, 0x04) & 0x01;
  bool VAR_17 = FUNC_3(VAR_1, 0x18) & 0x01;
  bool VAR_18 = FUNC_5(VAR_1, 0x65) & 0x40;

  FUNC_19(VAR_1, "Audio: pll %s, samples %s, %s\n",
    VAR_16 ? "locked" : "not locked",
    VAR_17 ? "detected" : "not detected",
    VAR_18 ? "muted" : "enabled");
  if (VAR_16 && VAR_17) {
   FUNC_19(VAR_1, "Audio format: %s\n",
     (FUNC_3(VAR_1, 0x07) & 0x20) ? "multi-channel" : "stereo");
  }
  FUNC_19(VAR_1, "Audio CTS: %u\n", (FUNC_3(VAR_1, 0x5b) << 12) +
    (FUNC_3(VAR_1, 0x5c) << 8) +
    (FUNC_3(VAR_1, 0x5d) & 0xf0));
  FUNC_19(VAR_1, "Audio N: %u\n", ((FUNC_3(VAR_1, 0x5d) & 0x0f) << 16) +
    (FUNC_3(VAR_1, 0x5e) << 8) +
    FUNC_3(VAR_1, 0x5f));
  FUNC_19(VAR_1, "AV Mute: %s\n", (FUNC_3(VAR_1, 0x04) & 0x40) ? "on" : "off");

  FUNC_19(VAR_1, "Deep color mode: %s\n", VAR_13[(FUNC_3(VAR_1, 0x0b) & 0x60) >> 5]);
  FUNC_19(VAR_1, "HDMI colorspace: %s\n", VAR_11[FUNC_3(VAR_1, 0x53) & 0xf]);

  FUNC_0(VAR_1);
 }

 return 0;
}

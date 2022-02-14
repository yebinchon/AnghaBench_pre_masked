
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int name; } ;
struct ad9389b_state_edid {int blocks; scalar_t__ segments; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ad9389b_state {TYPE_1__ dv_timings; int edid_detect_counter; scalar_t__ power_on; int chip_revision; struct ad9389b_state_edid edid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*,int) ;
 struct ad9389b_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*,char*,...) ;
 int FUNC_3 (int ,char*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_3)
{
 struct ad9389b_state *VAR_4 = FUNC_1(VAR_3);
 struct ad9389b_state_edid *VAR_5 = &VAR_4->edid;

 static const char * const VAR_6[] = {
  "in reset",
  "reading EDID",
  "idle",
  "initializing HDCP",
  "HDCP enabled",
  "initializing HDCP repeater",
  "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"
 };
 static const char * const VAR_7[] = {
  "no error",
  "bad receiver BKSV",
  "Ri mismatch",
  "Pj mismatch",
  "i2c error",
  "timed out",
  "max repeater cascade exceeded",
  "hash check failed",
  "too many devices",
  "9", "A", "B", "C", "D", "E", "F"
 };

 u8 VAR_8;

 FUNC_2(VAR_3, "chip revision %d\n", VAR_4->chip_revision);
 FUNC_2(VAR_3, "power %s\n", VAR_4->power_on ? "on" : "off");
 FUNC_2(VAR_3, "%s hotplug, %s Rx Sense, %s EDID (%d block(s))\n",
    (FUNC_0(VAR_3, 0x42) & VAR_0) ?
    "detected" : "no",
    (FUNC_0(VAR_3, 0x42) & VAR_1) ?
    "detected" : "no",
    VAR_5->segments ? "found" : "no", VAR_5->blocks);
 FUNC_2(VAR_3, "%s output %s\n",
    (FUNC_0(VAR_3, 0xaf) & 0x02) ?
    "HDMI" : "DVI-D",
    (FUNC_0(VAR_3, 0xa1) & 0x3c) ?
    "disabled" : "enabled");
 FUNC_2(VAR_3, "ad9389b: %s\n", (FUNC_0(VAR_3, 0xb8) & 0x40) ?
    "encrypted" : "no encryption");
 FUNC_2(VAR_3, "state: %s, error: %s, detect count: %u, msk/irq: %02x/%02x\n",
    VAR_6[FUNC_0(VAR_3, 0xc8) & 0xf],
    VAR_7[FUNC_0(VAR_3, 0xc8) >> 4],
    VAR_4->edid_detect_counter,
    FUNC_0(VAR_3, 0x94), FUNC_0(VAR_3, 0x96));
 VAR_8 = FUNC_0(VAR_3, 0x98) & 0x80;
 FUNC_2(VAR_3, "ad9389b: RGB quantization: %s range\n",
    FUNC_0(VAR_3, 0x3b) & 0x01 ? "limited" : "full");
 FUNC_2(VAR_3, "ad9389b: %s gear %d\n",
    VAR_8 ? "manual" : "automatic",
    VAR_8 ? ((FUNC_0(VAR_3, 0x98) & 0x70) >> 4) :
    ((FUNC_0(VAR_3, 0x9e) & 0x0e) >> 1));
 if (FUNC_0(VAR_3, 0xaf) & 0x02) {

  u8 VAR_9 = FUNC_0(VAR_3, 0x0a) & 0x80;
  u32 VAR_10 = (FUNC_0(VAR_3, 0x01) & 0xf) << 16 |
   FUNC_0(VAR_3, 0x02) << 8 |
   FUNC_0(VAR_3, 0x03);
  u8 VAR_11 = FUNC_0(VAR_3, 0x3e) >> 2;
  u8 VAR_12 = FUNC_0(VAR_3, 0x3d) & 0x3f;
  u32 VAR_13;

  if (VAR_9)
   VAR_13 = (FUNC_0(VAR_3, 0x07) & 0xf) << 16 |
         FUNC_0(VAR_3, 0x08) << 8 |
         FUNC_0(VAR_3, 0x09);
  else
   VAR_13 = (FUNC_0(VAR_3, 0x04) & 0xf) << 16 |
         FUNC_0(VAR_3, 0x05) << 8 |
         FUNC_0(VAR_3, 0x06);
  VAR_10 = (FUNC_0(VAR_3, 0x01) & 0xf) << 16 |
      FUNC_0(VAR_3, 0x02) << 8 |
      FUNC_0(VAR_3, 0x03);

  FUNC_2(VAR_3, "ad9389b: CTS %s mode: N %d, CTS %d\n",
     VAR_9 ? "manual" : "automatic", VAR_10, VAR_13);

  FUNC_2(VAR_3, "ad9389b: VIC: detected %d, sent %d\n",
     VAR_11, VAR_12);
 }
 if (VAR_4->dv_timings.type == VAR_2)
  FUNC_3(VAR_3->name, "timings: ",
    &VAR_4->dv_timings, 0);
 else
  FUNC_2(VAR_3, "no timings set\n");
 return 0;
}

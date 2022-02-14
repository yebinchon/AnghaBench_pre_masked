
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int name; } ;
struct adv7511_state_edid {int blocks; scalar_t__ segments; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct adv7511_state {char* i2c_edid_addr; char* i2c_cec_addr; int cec_valid_addrs; char** cec_addr; char* i2c_pktmem_addr; scalar_t__ cec_enabled_adap; int * i2c_cec; TYPE_1__ dv_timings; int edid_detect_counter; scalar_t__ power_on; struct adv7511_state_edid edid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,int) ;
 struct adv7511_state* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*,char*,...) ;
 int FUNC_4 (int ,char*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_4)
{
 struct adv7511_state *VAR_5 = FUNC_2(VAR_4);
 struct adv7511_state_edid *VAR_6 = &VAR_5->edid;
 int VAR_7;

 static const char * const VAR_8[] = {
  "in reset",
  "reading EDID",
  "idle",
  "initializing HDCP",
  "HDCP enabled",
  "initializing HDCP repeater",
  "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"
 };
 static const char * const VAR_9[] = {
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

 FUNC_3(VAR_4, "power %s\n", VAR_5->power_on ? "on" : "off");
 FUNC_3(VAR_4, "%s hotplug, %s Rx Sense, %s EDID (%d block(s))\n",
    (FUNC_1(VAR_4, 0x42) & VAR_1) ? "detected" : "no",
    (FUNC_1(VAR_4, 0x42) & VAR_2) ? "detected" : "no",
    VAR_6->segments ? "found" : "no",
    VAR_6->blocks);
 FUNC_3(VAR_4, "%s output %s\n",
    (FUNC_1(VAR_4, 0xaf) & 0x02) ?
    "HDMI" : "DVI-D",
    (FUNC_1(VAR_4, 0xa1) & 0x3c) ?
    "disabled" : "enabled");
 FUNC_3(VAR_4, "state: %s, error: %s, detect count: %u, msk/irq: %02x/%02x\n",
     VAR_8[FUNC_1(VAR_4, 0xc8) & 0xf],
     VAR_9[FUNC_1(VAR_4, 0xc8) >> 4], VAR_5->edid_detect_counter,
     FUNC_1(VAR_4, 0x94), FUNC_1(VAR_4, 0x96));
 FUNC_3(VAR_4, "RGB quantization: %s range\n", FUNC_1(VAR_4, 0x18) & 0x80 ? "limited" : "full");
 if (FUNC_1(VAR_4, 0xaf) & 0x02) {

  u8 VAR_10 = FUNC_1(VAR_4, 0x0a) & 0x80;
  u32 VAR_11 = (FUNC_1(VAR_4, 0x01) & 0xf) << 16 |
   FUNC_1(VAR_4, 0x02) << 8 |
   FUNC_1(VAR_4, 0x03);
  u8 VAR_12 = FUNC_1(VAR_4, 0x3e) >> 2;
  u8 VAR_13 = FUNC_1(VAR_4, 0x3d) & 0x3f;
  u32 VAR_14;

  if (VAR_10)
   VAR_14 = (FUNC_1(VAR_4, 0x07) & 0xf) << 16 |
         FUNC_1(VAR_4, 0x08) << 8 |
         FUNC_1(VAR_4, 0x09);
  else
   VAR_14 = (FUNC_1(VAR_4, 0x04) & 0xf) << 16 |
         FUNC_1(VAR_4, 0x05) << 8 |
         FUNC_1(VAR_4, 0x06);
  FUNC_3(VAR_4, "CTS %s mode: N %d, CTS %d\n",
     VAR_10 ? "manual" : "automatic", VAR_11, VAR_14);
  FUNC_3(VAR_4, "VIC: detected %d, sent %d\n",
     VAR_12, VAR_13);
  FUNC_0(VAR_4);
 }
 if (VAR_5->dv_timings.type == VAR_3)
  FUNC_4(VAR_4->name, "timings: ",
    &VAR_5->dv_timings, 0);
 else
  FUNC_3(VAR_4, "no timings set\n");
 FUNC_3(VAR_4, "i2c edid addr: 0x%x\n", VAR_5->i2c_edid_addr);

 if (VAR_5->i2c_cec == ((void*)0))
  return 0;

 FUNC_3(VAR_4, "i2c cec addr: 0x%x\n", VAR_5->i2c_cec_addr);

 FUNC_3(VAR_4, "CEC: %s\n", VAR_5->cec_enabled_adap ?
   "enabled" : "disabled");
 if (VAR_5->cec_enabled_adap) {
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   bool VAR_15 = VAR_5->cec_valid_addrs & (1 << VAR_7);

   if (VAR_15)
    FUNC_3(VAR_4, "CEC Logical Address: 0x%x\n",
       VAR_5->cec_addr[VAR_7]);
  }
 }
 FUNC_3(VAR_4, "i2c pktmem addr: 0x%x\n", VAR_5->i2c_pktmem_addr);
 return 0;
}

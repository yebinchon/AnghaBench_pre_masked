
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,int) ;
 scalar_t__ FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*,int) ;
 int FUNC_3 (struct v4l2_subdev*,int) ;
 int FUNC_4 (struct v4l2_subdev*,char*,...) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_0)
{

 u8 VAR_1 = FUNC_3(VAR_0, 0x5A) & 0x01;

 FUNC_4(VAR_0, "Chip powered %s\n", FUNC_1(VAR_0) ? "off" : "on");
 FUNC_4(VAR_0, "Prim-mode = 0x%x, video std = 0x%x\n",
    FUNC_0(VAR_0, 0x01) & 0x0f, FUNC_0(VAR_0, 0x00) & 0x3f);

 FUNC_4(VAR_0, "SDP: free run: %s\n",
  (FUNC_3(VAR_0, 0x56) & 0x01) ? "on" : "off");
 FUNC_4(VAR_0, "SDP: %s\n", VAR_1 ?
  "valid SD/PR signal detected" : "invalid/no signal");
 if (VAR_1) {
  static const char * const VAR_2[] = {
   "NTSC-M/J",
   "1?",
   "NTSC-443",
   "60HzSECAM",
   "PAL-M",
   "5?",
   "PAL-60",
   "7?", "8?", "9?", "a?", "b?",
   "PAL-CombN",
   "d?",
   "PAL-BGHID",
   "SECAM"
  };
  FUNC_4(VAR_0, "SDP: standard %s\n",
   VAR_2[FUNC_3(VAR_0, 0x52) & 0x0f]);
  FUNC_4(VAR_0, "SDP: %s\n",
   (FUNC_3(VAR_0, 0x59) & 0x08) ? "50Hz" : "60Hz");
  FUNC_4(VAR_0, "SDP: %s\n",
   (FUNC_3(VAR_0, 0x57) & 0x08) ? "Interlaced" : "Progressive");
  FUNC_4(VAR_0, "SDP: deinterlacer %s\n",
   (FUNC_3(VAR_0, 0x12) & 0x08) ? "enabled" : "disabled");
  FUNC_4(VAR_0, "SDP: csc %s mode\n",
   (FUNC_2(VAR_0, 0xe0) & 0x40) ? "auto" : "manual");
 }
 return 0;
}

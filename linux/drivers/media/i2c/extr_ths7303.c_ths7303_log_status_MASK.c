
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_bt_timings {int polarities; scalar_t__ pixelclock; scalar_t__ interlaced; int height; int width; } ;
struct ths7303_state {struct v4l2_bt_timings bt; scalar_t__ stream_on; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_bt_timings*) ;
 int FUNC_1 (struct v4l2_bt_timings*) ;
 int FUNC_2 (struct v4l2_subdev*,int ) ;
 struct ths7303_state* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (struct v4l2_subdev*,char*,...) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_3)
{
 struct ths7303_state *VAR_4 = FUNC_3(VAR_3);

 FUNC_4(VAR_3, "stream %s\n", VAR_4->stream_on ? "On" : "Off");

 if (VAR_4->bt.pixelclock) {
  struct v4l2_bt_timings *VAR_5 = &VAR_4->bt;
  u32 VAR_6, VAR_7;

  VAR_6 = FUNC_1(VAR_5);
  VAR_7 = FUNC_0(VAR_5);
  FUNC_4(VAR_3,
     "timings: %dx%d%s%d (%dx%d). Pix freq. = %d Hz. Polarities = 0x%x\n",
     VAR_5->width, VAR_5->height, VAR_5->interlaced ? "i" : "p",
     (VAR_7 * VAR_6) > 0 ?
     (int)VAR_5->pixelclock /
     (VAR_7 * VAR_6) : 0,
     VAR_6, VAR_7,
     (int)VAR_5->pixelclock, VAR_5->polarities);
 } else {
  FUNC_4(VAR_3, "no timings set\n");
 }

 FUNC_2(VAR_3, VAR_0);
 FUNC_2(VAR_3, VAR_1);
 FUNC_2(VAR_3, VAR_2);

 return 0;
}

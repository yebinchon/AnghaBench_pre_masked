
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_bt_timings {int pixelclock; scalar_t__ interlaced; int width; int height; int hfrontporch; int hsync; int hbackporch; int vfrontporch; int vsync; int vbackporch; int polarities; int il_vfrontporch; int il_vsync; int il_vbackporch; } ;
struct v4l2_dv_timings {int type; struct v4l2_bt_timings bt; } ;
struct adv748x_state {int dummy; } ;
struct adv748x_hdmi {struct v4l2_dv_timings timings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (struct v4l2_dv_timings*) ;
 int FUNC_2 (struct adv748x_state*) ;
 int FUNC_3 (struct adv748x_state*) ;
 struct adv748x_state* FUNC_4 (struct adv748x_hdmi*) ;
 struct adv748x_hdmi* FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (struct adv748x_state*,int) ;
 int FUNC_7 (struct adv748x_state*,int,int) ;
 int FUNC_8 (struct v4l2_dv_timings*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct v4l2_subdev *VAR_26,
      struct v4l2_dv_timings *VAR_27)
{
 struct adv748x_hdmi *VAR_28 = FUNC_5(VAR_26);
 struct adv748x_state *VAR_29 = FUNC_4(VAR_28);
 struct v4l2_bt_timings *VAR_30 = &VAR_27->bt;
 int VAR_31;
 int VAR_32;

 if (!VAR_27)
  return -VAR_18;

 FUNC_8(VAR_27, 0, sizeof(struct v4l2_dv_timings));

 if (!FUNC_2(VAR_29))
  return -VAR_20;

 VAR_31 = FUNC_3(VAR_29);
 if (VAR_31 < 0)
  return -VAR_19;

 VAR_27->type = VAR_21;

 VAR_30->pixelclock = VAR_31;
 VAR_30->interlaced = FUNC_6(VAR_29, VAR_2) &
    VAR_3 ?
    VAR_23 : VAR_24;
 VAR_30->width = FUNC_7(VAR_29, VAR_10,
    VAR_11);
 VAR_30->height = FUNC_7(VAR_29, VAR_0,
     VAR_1);
 VAR_30->hfrontporch = FUNC_7(VAR_29, VAR_6,
          VAR_7);
 VAR_30->hsync = FUNC_7(VAR_29, VAR_8,
    VAR_9);
 VAR_30->hbackporch = FUNC_7(VAR_29, VAR_4,
         VAR_5);
 VAR_30->vfrontporch = FUNC_7(VAR_29, VAR_14,
          VAR_15) / 2;
 VAR_30->vsync = FUNC_7(VAR_29, VAR_16,
    VAR_17) / 2;
 VAR_30->vbackporch = FUNC_7(VAR_29, VAR_12,
         VAR_13) / 2;

 VAR_32 = FUNC_6(VAR_29, 0x05);
 VAR_30->polarities = (VAR_32 & FUNC_0(4) ? VAR_25 : 0) |
  (VAR_32 & FUNC_0(5) ? VAR_22 : 0);

 if (VAR_30->interlaced == VAR_23) {
  VAR_30->height += FUNC_7(VAR_29, 0x0b, 0x1fff);
  VAR_30->il_vfrontporch = FUNC_7(VAR_29, 0x2c, 0x3fff) / 2;
  VAR_30->il_vsync = FUNC_7(VAR_29, 0x30, 0x3fff) / 2;
  VAR_30->il_vbackporch = FUNC_7(VAR_29, 0x34, 0x3fff) / 2;
 }

 FUNC_1(VAR_27);






 VAR_28->timings = *VAR_27;

 return 0;
}

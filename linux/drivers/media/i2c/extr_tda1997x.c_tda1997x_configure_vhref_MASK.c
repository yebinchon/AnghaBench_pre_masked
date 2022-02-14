
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_bt_timings {int hbackporch; int hsync; int width; int height; int vbackporch; int vsync; int il_vbackporch; int il_vsync; int il_vfrontporch; int vfrontporch; scalar_t__ interlaced; } ;
struct TYPE_2__ {struct v4l2_bt_timings bt; } ;
struct tda1997x_state {scalar_t__ chip_revision; TYPE_1__ timings; } ;


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
 int FUNC_0 (struct v4l2_bt_timings const*) ;
 int FUNC_1 (struct v4l2_bt_timings const*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (struct v4l2_subdev*,int ,int) ;
 int FUNC_3 (struct v4l2_subdev*,int ,int) ;
 struct tda1997x_state* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static void
FUNC_5(struct v4l2_subdev *VAR_18)
{
 struct tda1997x_state *VAR_19 = FUNC_4(VAR_18);
 const struct v4l2_bt_timings *VAR_20 = &VAR_19->timings.bt;
 int VAR_21, VAR_22;
 u16 VAR_23, VAR_24;
 u16 VAR_25, VAR_26;
 u8 VAR_27, VAR_28;
 u8 VAR_29;
 u16 VAR_30, VAR_31;
 u8 VAR_32;

 VAR_23 = VAR_20->hbackporch + VAR_20->hsync + 1;
 VAR_24 = VAR_23 + VAR_20->width;
 VAR_25 = VAR_20->height + VAR_20->vbackporch + VAR_20->vsync +
   VAR_20->il_vbackporch + VAR_20->il_vsync +
   VAR_20->il_vfrontporch;
 VAR_27 = VAR_20->vbackporch + VAR_20->vsync + VAR_20->vfrontporch;
 VAR_26 = 0;
 VAR_28 = 0;
 VAR_30 = 0;
 VAR_31 = 0;
 if (VAR_20->interlaced) {
  VAR_26 = (VAR_20->height / 2) +
    (VAR_20->il_vbackporch + VAR_20->il_vsync - 1);
  VAR_28 = VAR_20->il_vbackporch + VAR_20->il_vsync +
    VAR_20->il_vfrontporch;
  VAR_31 = VAR_26 + VAR_20->il_vfrontporch +
        VAR_30;
 }
 VAR_29 = 0;

 VAR_21 = FUNC_1(VAR_20);
 VAR_22 = FUNC_0(VAR_20);





 FUNC_3(VAR_18, VAR_2, 0x2ef);
 FUNC_3(VAR_18, VAR_1, 0x141);


 if (VAR_19->chip_revision == 0)
  FUNC_3(VAR_18, VAR_10, 4);
 else
  FUNC_3(VAR_18, VAR_10, 1);
 FUNC_3(VAR_18, VAR_9, VAR_21 & VAR_0);
 FUNC_3(VAR_18, VAR_8, 1);
 FUNC_3(VAR_18, VAR_7, VAR_22 & VAR_0);






 VAR_32 = VAR_16 << VAR_17;
 FUNC_2(VAR_18, VAR_11, VAR_32);
 FUNC_3(VAR_18, VAR_6, VAR_23 & VAR_0);
 FUNC_3(VAR_18, VAR_5, VAR_24 & VAR_0);

 FUNC_3(VAR_18, VAR_12, VAR_25 & VAR_0);
 FUNC_2(VAR_18, VAR_13, VAR_27);

 FUNC_3(VAR_18, VAR_14, VAR_26 & VAR_0);
 FUNC_2(VAR_18, VAR_15, VAR_28);


 VAR_32 = VAR_30 & VAR_0;
 VAR_32 |= VAR_29 << 8;
 FUNC_3(VAR_18, VAR_3, VAR_32);
 VAR_32 = VAR_31 & VAR_0;
 FUNC_3(VAR_18, VAR_4, VAR_32);
}

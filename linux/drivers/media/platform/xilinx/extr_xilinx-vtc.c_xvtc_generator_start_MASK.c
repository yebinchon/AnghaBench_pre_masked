
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clk; } ;
struct xvtc_device {TYPE_1__ xvip; int has_generator; } ;
struct xvtc_config {int vblank_start; int hblank_start; int hsize; int vsize; int hsync_end; int hsync_start; int vsync_end; int vsync_start; } ;


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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (struct xvtc_device*,int ,int) ;

int FUNC_3(struct xvtc_device *VAR_41,
    const struct xvtc_config *VAR_42)
{
 int VAR_43;

 if (!VAR_41->has_generator)
  return -VAR_0;

 VAR_43 = FUNC_0(VAR_41->xvip.clk);
 if (VAR_43 < 0)
  return VAR_43;




 FUNC_2(VAR_41, VAR_33,
         VAR_34 |
         VAR_35 |
         VAR_37 | VAR_39 |
         VAR_36 | VAR_38);




 FUNC_2(VAR_41, VAR_23, 0);




 FUNC_2(VAR_41, VAR_4,
         (VAR_42->vblank_start << VAR_5) |
         (VAR_42->hblank_start << VAR_3));
 FUNC_2(VAR_41, VAR_29, VAR_42->hsize);
 FUNC_2(VAR_41, VAR_40, VAR_42->vsize);
 FUNC_2(VAR_41, VAR_30,
         (VAR_42->hsync_end << VAR_31) |
         (VAR_42->hsync_start << VAR_32));
 FUNC_2(VAR_41, VAR_24, 0);
 FUNC_2(VAR_41, VAR_26,
         (VAR_42->vsync_end << VAR_27) |
         (VAR_42->vsync_start << VAR_28));
 FUNC_2(VAR_41, VAR_25, 0);




 FUNC_1(&VAR_41->xvip, VAR_1,
     VAR_6 |
     VAR_8 |
     VAR_16 | VAR_21 |
     VAR_14 | VAR_19 |
     VAR_10 | VAR_18 |
     VAR_20 | VAR_22 |
     VAR_9 |
     VAR_12 | VAR_15 |
     VAR_17 |
     VAR_7 |
     VAR_11 | VAR_13 |
     VAR_2);

 return 0;
}

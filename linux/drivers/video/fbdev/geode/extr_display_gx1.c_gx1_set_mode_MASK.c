
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct geodefb_par {scalar_t__ dc_regs; TYPE_3__* vid_ops; } ;
struct TYPE_5__ {int xres; int bits_per_pixel; int right_margin; int hsync_len; int left_margin; int yres; int lower_margin; int vsync_len; int upper_margin; } ;
struct TYPE_4__ {int line_length; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; struct geodefb_par* par; } ;
struct TYPE_6__ {int (* configure_display ) (struct fb_info*) ;int (* set_dclk ) (struct fb_info*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct fb_info *VAR_33)
{
 struct geodefb_par *VAR_34 = VAR_33->par;
 u32 VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
 int VAR_40, VAR_41, VAR_42, VAR_43, VAR_44, VAR_45;
 int VAR_46, VAR_47, VAR_48, VAR_49, VAR_50, VAR_51;


 FUNC_0(VAR_34->dc_regs + VAR_28);
 FUNC_4(VAR_29, VAR_34->dc_regs + VAR_28);

 VAR_35 = FUNC_0(VAR_34->dc_regs + VAR_12);
 VAR_36 = FUNC_0(VAR_34->dc_regs + VAR_27);


 VAR_36 &= ~(VAR_22 | VAR_25);
 FUNC_4(VAR_36, VAR_34->dc_regs + VAR_27);


 FUNC_3(100);


 VAR_35 &= ~(VAR_10 | VAR_4 | VAR_7);
 FUNC_4(VAR_35, VAR_34->dc_regs + VAR_12);


 VAR_35 &= ~VAR_6;
 FUNC_4(VAR_35, VAR_34->dc_regs + VAR_12);

 VAR_34->vid_ops->set_dclk(VAR_33);

 VAR_38 = VAR_5;
 VAR_35 |= VAR_38;
 FUNC_4(VAR_35, VAR_34->dc_regs + VAR_12);




 FUNC_3(1000);






 VAR_35 = VAR_11 | VAR_38;



 VAR_35 |= (6 << VAR_8) | (5 << VAR_9) | VAR_10;




 FUNC_4(0, VAR_34->dc_regs + VAR_1);


 FUNC_4(VAR_33->fix.line_length >> 2, VAR_34->dc_regs + VAR_16);
 FUNC_4(((VAR_33->var.xres * VAR_33->var.bits_per_pixel/8) >> 3) + 2,
        VAR_34->dc_regs + VAR_0);


 VAR_37 = VAR_18 | VAR_20 | VAR_19;
 if (VAR_33->var.bits_per_pixel == 8) VAR_37 |= VAR_17;


 VAR_36 = VAR_23 | VAR_24 | VAR_26 | VAR_22
  | VAR_25;


 VAR_40 = VAR_33->var.xres;
 VAR_41 = VAR_40;
 VAR_42 = VAR_41 + VAR_33->var.right_margin;
 VAR_43 = VAR_42 + VAR_33->var.hsync_len;
 VAR_44 = VAR_43 + VAR_33->var.left_margin;
 VAR_45 = VAR_44;

 VAR_46 = VAR_33->var.yres;
 VAR_47 = VAR_46;
 VAR_48 = VAR_47 + VAR_33->var.lower_margin;
 VAR_49 = VAR_48 + VAR_33->var.vsync_len;
 VAR_50 = VAR_49 + VAR_33->var.upper_margin;
 VAR_51 = VAR_50;

 VAR_39 = (VAR_40 - 1) | ((VAR_45 - 1) << 16);
 FUNC_4(VAR_39, VAR_34->dc_regs + VAR_13);
 VAR_39 = (VAR_41 - 1) | ((VAR_44 - 1) << 16);
 FUNC_4(VAR_39, VAR_34->dc_regs + VAR_14);
 VAR_39 = (VAR_42 - 1) | ((VAR_43 - 1) << 16);
 FUNC_4(VAR_39, VAR_34->dc_regs + VAR_15);
 FUNC_4(VAR_39, VAR_34->dc_regs + VAR_2);
 VAR_39 = (VAR_46 - 1) | ((VAR_51 - 1) << 16);
 FUNC_4(VAR_39, VAR_34->dc_regs + VAR_30);
 VAR_39 = (VAR_47 - 1) | ((VAR_50 - 1) << 16);
 FUNC_4(VAR_39, VAR_34->dc_regs + VAR_31);
 VAR_39 = (VAR_48 - 1) | ((VAR_49 - 1) << 16);
 FUNC_4(VAR_39, VAR_34->dc_regs + VAR_32);
 VAR_39 = (VAR_48 - 2) | ((VAR_49 - 2) << 16);
 FUNC_4(VAR_39, VAR_34->dc_regs + VAR_3);


 FUNC_4(VAR_37, VAR_34->dc_regs + VAR_21);
 FUNC_4(VAR_36, VAR_34->dc_regs + VAR_27);
 FUNC_3(1000);
 FUNC_4(VAR_35, VAR_34->dc_regs + VAR_12);

 VAR_34->vid_ops->configure_display(VAR_33);


 FUNC_4(0, VAR_34->dc_regs + VAR_28);



}

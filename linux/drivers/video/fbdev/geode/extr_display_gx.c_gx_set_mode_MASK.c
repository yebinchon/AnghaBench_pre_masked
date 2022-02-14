
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct gxfb_par {int dummy; } ;
struct TYPE_4__ {int xres; int bits_per_pixel; int right_margin; int hsync_len; int left_margin; int yres; int lower_margin; int vsync_len; int upper_margin; } ;
struct TYPE_3__ {int line_length; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; struct gxfb_par* par; } ;


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
 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (struct gxfb_par*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct gxfb_par*,int ,int) ;

void FUNC_5(struct fb_info *VAR_30)
{
 struct gxfb_par *VAR_31 = VAR_30->par;
 u32 VAR_32, VAR_33;
 int VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
 int VAR_40, VAR_41, VAR_42, VAR_43, VAR_44, VAR_45;


 FUNC_4(VAR_31, VAR_24, VAR_26);

 VAR_32 = FUNC_2(VAR_31, VAR_11);
 VAR_33 = FUNC_2(VAR_31, VAR_0);


 VAR_33 &= ~VAR_8;
 FUNC_4(VAR_31, VAR_0, VAR_33);


 FUNC_3(100);


 VAR_32 &= ~(VAR_16 | VAR_12 |
   VAR_13);
 FUNC_4(VAR_31, VAR_11, VAR_32);


 FUNC_1(VAR_30);






 VAR_32 &= VAR_18 | VAR_17;
 VAR_33 = 0;



 VAR_32 |= (6 << VAR_14) |
  (5 << VAR_15) | VAR_16;


 FUNC_4(VAR_31, VAR_10, 0);


 FUNC_4(VAR_31, VAR_19, VAR_30->fix.line_length >> 3);
 FUNC_4(VAR_31, VAR_23,
  ((VAR_30->var.xres * VAR_30->var.bits_per_pixel/8) >> 3) + 2);



 VAR_33 |= VAR_6 | VAR_9 |
  VAR_2 | VAR_1;


 switch (VAR_30->var.bits_per_pixel) {
 case 8:
  VAR_33 |= VAR_5;
  break;
 case 16:
  VAR_33 |= VAR_3;
  break;
 case 32:
  VAR_33 |= VAR_4;
  VAR_33 |= VAR_7;
  break;
 }


 VAR_33 |= VAR_8;


 VAR_34 = VAR_30->var.xres;
 VAR_35 = VAR_34;
 VAR_36 = VAR_35 + VAR_30->var.right_margin;
 VAR_37 = VAR_36 + VAR_30->var.hsync_len;
 VAR_38 = VAR_37 + VAR_30->var.left_margin;
 VAR_39 = VAR_38;

 VAR_40 = VAR_30->var.yres;
 VAR_41 = VAR_40;
 VAR_42 = VAR_41 + VAR_30->var.lower_margin;
 VAR_43 = VAR_42 + VAR_30->var.vsync_len;
 VAR_44 = VAR_43 + VAR_30->var.upper_margin;
 VAR_45 = VAR_44;

 FUNC_4(VAR_31, VAR_20, (VAR_34 - 1) |
   ((VAR_39 - 1) << 16));
 FUNC_4(VAR_31, VAR_21, (VAR_35 - 1) |
   ((VAR_38 - 1) << 16));
 FUNC_4(VAR_31, VAR_22, (VAR_36 - 1) |
   ((VAR_37 - 1) << 16));

 FUNC_4(VAR_31, VAR_27, (VAR_40 - 1) |
   ((VAR_45 - 1) << 16));
 FUNC_4(VAR_31, VAR_28, (VAR_41 - 1) |
   ((VAR_44 - 1) << 16));
 FUNC_4(VAR_31, VAR_29, (VAR_42 - 1) |
   ((VAR_43 - 1) << 16));


 FUNC_4(VAR_31, VAR_0, VAR_33);
 FUNC_4(VAR_31, VAR_11, VAR_32);

 FUNC_0(VAR_30);


 FUNC_4(VAR_31, VAR_24, VAR_25);
}

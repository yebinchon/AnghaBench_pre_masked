
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct lxfb_par {int output; } ;
struct TYPE_4__ {unsigned int yres; int xres; int bits_per_pixel; int right_margin; int hsync_len; int left_margin; int lower_margin; int vsync_len; int upper_margin; } ;
struct TYPE_3__ {int line_length; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; struct lxfb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 int VAR_20 ;
 unsigned int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 unsigned int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 unsigned int VAR_41 ;
 unsigned int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (int ,int) ;
 unsigned int FUNC_4 (struct lxfb_par*,int ) ;
 int FUNC_5 (struct lxfb_par*,int ,unsigned int) ;
 int FUNC_6 (int ,int) ;

void FUNC_7(struct fb_info *VAR_60)
{
 struct lxfb_par *VAR_61 = VAR_60->par;
 u64 VAR_62;

 unsigned int VAR_63, VAR_64, VAR_65, VAR_66;

 unsigned int VAR_67, VAR_68;
 int VAR_69, VAR_70, VAR_71, VAR_72, VAR_73, VAR_74;
 int VAR_75, VAR_76, VAR_77, VAR_78, VAR_79, VAR_80;


 FUNC_5(VAR_61, VAR_40, VAR_42);

 FUNC_0(VAR_60);

 FUNC_2(VAR_60);



 FUNC_3(VAR_46, VAR_62);
 VAR_62 &= ~VAR_47;

 if (VAR_61->output & VAR_59) {
  VAR_62 |= VAR_49;

  if (VAR_61->output & VAR_58)
   VAR_62 |= VAR_50;
  else
   VAR_62 &= ~VAR_50;
 } else
  VAR_62 |= VAR_48;

 FUNC_6(VAR_46, VAR_62);




 FUNC_5(VAR_61, VAR_23, 0);
 FUNC_5(VAR_61, VAR_1, 0);
 FUNC_5(VAR_61, VAR_2, 0);




 VAR_65 = FUNC_4(VAR_61, VAR_29);
 VAR_65 &= ~(VAR_30 | VAR_31 |
   VAR_32);



 FUNC_5(VAR_61, VAR_34, (0x4000 << 16) | 0x4000);
 FUNC_5(VAR_61, VAR_38, 0);
 FUNC_5(VAR_61, VAR_29, VAR_65);



 if (VAR_60->fix.line_length > 4096)
  VAR_64 = VAR_19;
 else if (VAR_60->fix.line_length > 2048)
  VAR_64 = VAR_18;
 else if (VAR_60->fix.line_length > 1024)
  VAR_64 = VAR_17;
 else
  VAR_64 = VAR_16;

 VAR_63 = VAR_60->fix.line_length * VAR_60->var.yres;
 VAR_63 = (VAR_63 + 0x3FF) & 0xFFFFFC00;

 FUNC_5(VAR_61, VAR_20, VAR_63 | VAR_21);

 VAR_65 = FUNC_4(VAR_61, VAR_14) & ~VAR_15;
 FUNC_5(VAR_61, VAR_14, VAR_65 | VAR_64);

 VAR_66 = VAR_60->var.xres * (VAR_60->var.bits_per_pixel >> 3);

 FUNC_5(VAR_61, VAR_33, VAR_60->fix.line_length >> 3);
 FUNC_5(VAR_61, VAR_39, (VAR_66 + 7) >> 3);



 FUNC_3(VAR_51, VAR_62);

 VAR_62 &= ~(VAR_52
   | VAR_56
   | VAR_55
   | VAR_57);
 VAR_62 |= VAR_54 |
   VAR_53;
 FUNC_6(VAR_51, VAR_62);

 VAR_67 = VAR_27;
 VAR_67 |= (0x6 << VAR_26) |
   (0xb << VAR_25);
 VAR_67 |= VAR_28;

 VAR_68 = VAR_12;
 VAR_68 |= VAR_8;
 VAR_68 |= VAR_10;
 VAR_68 |= VAR_11;
 VAR_68 |= VAR_9;
 VAR_68 |= VAR_13;
 VAR_68 |= VAR_4;



 switch (VAR_60->var.bits_per_pixel) {
 case 8:
  VAR_68 |= VAR_7;
  break;

 case 16:
  VAR_68 |= VAR_5;
  break;

 case 32:
 case 24:
  VAR_68 |= VAR_6;
  break;
 }



 VAR_69 = VAR_60->var.xres;
 VAR_70 = VAR_69;
 VAR_71 = VAR_70 + VAR_60->var.right_margin;
 VAR_72 = VAR_71 + VAR_60->var.hsync_len;
 VAR_73 = VAR_72 + VAR_60->var.left_margin;
 VAR_74 = VAR_73;

 VAR_75 = VAR_60->var.yres;
 VAR_76 = VAR_75;
 VAR_77 = VAR_76 + VAR_60->var.lower_margin;
 VAR_78 = VAR_77 + VAR_60->var.vsync_len;
 VAR_79 = VAR_78 + VAR_60->var.upper_margin;
 VAR_80 = VAR_79;

 FUNC_5(VAR_61, VAR_35, (VAR_69 - 1) | ((VAR_74 - 1) << 16));
 FUNC_5(VAR_61, VAR_36,
   (VAR_70 - 1) | ((VAR_73 - 1) << 16));
 FUNC_5(VAR_61, VAR_37,
   (VAR_71 - 1) | ((VAR_72 - 1) << 16));

 FUNC_5(VAR_61, VAR_43, (VAR_75 - 1) | ((VAR_80 - 1) << 16));
 FUNC_5(VAR_61, VAR_44,
   (VAR_76 - 1) | ((VAR_79 - 1) << 16));
 FUNC_5(VAR_61, VAR_45,
   (VAR_77 - 1) | ((VAR_78 - 1) << 16));

 FUNC_5(VAR_61, VAR_22,
   (VAR_60->var.xres - 1) << 16 | (VAR_60->var.yres - 1));


 FUNC_1(VAR_60);


 FUNC_5(VAR_61, VAR_3, VAR_68);
 FUNC_5(VAR_61, VAR_0, 0);
 FUNC_5(VAR_61, VAR_24, VAR_67);


 FUNC_5(VAR_61, VAR_40, VAR_41);
}

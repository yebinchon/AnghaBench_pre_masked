
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tridentfb_par {scalar_t__ chip_id; int (* init_accel ) (struct tridentfb_par*,int,int) ;scalar_t__ flatpanel; scalar_t__ io_virt; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres; int right_margin; int hsync_len; int left_margin; int yres; int lower_margin; int vsync_len; int upper_margin; int vmode; int sync; int xres_virtual; int pixclock; } ;
struct TYPE_4__ {int len; } ;
struct TYPE_3__ {int line_length; int visual; } ;
struct fb_info {int flags; TYPE_2__ cmap; TYPE_1__ fix; struct fb_var_screeninfo var; struct tridentfb_par* par; } ;


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
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
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
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 scalar_t__ VAR_43 ;
 int FUNC_1 (struct tridentfb_par*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct tridentfb_par*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_44 ;
 int FUNC_8 (struct tridentfb_par*,int) ;
 int FUNC_9 (struct tridentfb_par*,int ) ;
 int FUNC_10 (struct tridentfb_par*) ;
 int FUNC_11 (struct tridentfb_par*) ;
 int FUNC_12 (struct tridentfb_par*,int) ;
 int FUNC_13 (struct tridentfb_par*,int) ;
 int FUNC_14 (struct tridentfb_par*,unsigned long) ;
 int FUNC_15 (struct tridentfb_par*) ;
 scalar_t__ VAR_45 ;
 int FUNC_16 (struct tridentfb_par*,int,int) ;
 int FUNC_17 (struct tridentfb_par*,int ) ;
 int FUNC_18 (struct tridentfb_par*,unsigned char,int ) ;
 int FUNC_19 (scalar_t__,int,int) ;
 int FUNC_20 (struct tridentfb_par*,int,int) ;
 int FUNC_21 (struct tridentfb_par*,int ,int) ;
 int FUNC_22 (struct tridentfb_par*,unsigned char,unsigned char) ;

__attribute__((used)) static int FUNC_23(struct fb_info *VAR_46)
{
 struct tridentfb_par *VAR_47 = VAR_46->par;
 u32 VAR_48, VAR_49, VAR_50, VAR_51, VAR_52, VAR_53;
 u32 VAR_54, VAR_55, VAR_56, VAR_57, VAR_58, VAR_59;
 struct fb_var_screeninfo *VAR_60 = &VAR_46->var;
 int VAR_61 = VAR_60->bits_per_pixel;
 unsigned char VAR_62;
 unsigned long VAR_63;

 FUNC_2("enter\n");
 VAR_49 = VAR_60->xres / 8 - 1;
 VAR_50 = (VAR_60->xres + VAR_60->right_margin) / 8;
 VAR_51 = (VAR_60->xres + VAR_60->right_margin + VAR_60->hsync_len) / 8;
 VAR_48 = (VAR_60->xres + VAR_60->left_margin + VAR_60->right_margin +
    VAR_60->hsync_len) / 8 - 5;
 VAR_52 = VAR_49 + 1;
 VAR_53 = VAR_48 + 3;

 VAR_55 = VAR_60->yres - 1;
 VAR_56 = VAR_60->yres + VAR_60->lower_margin;
 VAR_57 = VAR_56 + VAR_60->vsync_len;
 VAR_54 = VAR_60->upper_margin + VAR_57 - 2;
 VAR_58 = VAR_55 + 1;
 VAR_59 = VAR_54;

 if (VAR_46->var.vmode & VAR_9) {
  VAR_54 /= 2;
  VAR_55 /= 2;
  VAR_56 /= 2;
  VAR_57 /= 2;
  VAR_58 /= 2;
  VAR_59 /= 2;
 }

 FUNC_3(VAR_47);
 FUNC_1(VAR_47);
 FUNC_20(VAR_47, VAR_2, 8);
 VAR_62 = 0xEB;
 if (VAR_60->sync & VAR_5)
  VAR_62 &= ~0x40;
 if (VAR_60->sync & VAR_6)
  VAR_62 &= ~0x80;

 if (VAR_47->flatpanel && VAR_60->xres < VAR_44) {





  FUNC_18(VAR_47, VAR_62 | 0xC0, VAR_40);

  FUNC_15(VAR_47);

  if (VAR_43)
   FUNC_10(VAR_47);
  else if (VAR_45)
   FUNC_11(VAR_47);

 } else {
  FUNC_18(VAR_47, VAR_62, VAR_40);
  FUNC_20(VAR_47, VAR_2, 8);
 }


 FUNC_21(VAR_47, VAR_38, VAR_54 & 0xFF);
 FUNC_21(VAR_47, VAR_35, VAR_55 & 0xFF);
 FUNC_21(VAR_47, VAR_37, VAR_56 & 0xFF);
 FUNC_21(VAR_47, VAR_36, (VAR_57 & 0x0F));
 FUNC_21(VAR_47, VAR_34, VAR_58 & 0xFF);
 FUNC_21(VAR_47, VAR_33, VAR_59 & 0xFF);


 FUNC_21(VAR_47, VAR_27, VAR_48 & 0xFF);
 FUNC_21(VAR_47, VAR_24, VAR_49 & 0xFF);
 FUNC_21(VAR_47, VAR_26, VAR_50 & 0xFF);
 FUNC_21(VAR_47, VAR_25,
   (VAR_51 & 0x1F) | ((VAR_53 & 0x20) << 2));
 FUNC_21(VAR_47, VAR_23, VAR_52 & 0xFF);
 FUNC_21(VAR_47, VAR_22, VAR_53 & 0x1F);


 VAR_62 = 0x10;
 if (VAR_54 & 0x100) VAR_62 |= 0x01;
 if (VAR_55 & 0x100) VAR_62 |= 0x02;
 if (VAR_56 & 0x100) VAR_62 |= 0x04;
 if (VAR_58 & 0x100) VAR_62 |= 0x08;

 if (VAR_54 & 0x200) VAR_62 |= 0x20;
 if (VAR_55 & 0x200) VAR_62 |= 0x40;
 if (VAR_56 & 0x200) VAR_62 |= 0x80;
 FUNC_21(VAR_47, VAR_31, VAR_62);

 VAR_62 = FUNC_9(VAR_47, VAR_1) & 0x07;
 VAR_62 |= 0x08;
 if (VAR_54 & 0x400) VAR_62 |= 0x80;
 if (VAR_58 & 0x400) VAR_62 |= 0x40;
 if (VAR_56 & 0x400) VAR_62 |= 0x20;
 if (VAR_55 & 0x400) VAR_62 |= 0x10;
 FUNC_21(VAR_47, VAR_1, VAR_62);

 VAR_62 = (VAR_48 >> 8) & 0x01;
 VAR_62 |= (VAR_49 >> 7) & 0x02;
 VAR_62 |= (VAR_50 >> 5) & 0x08;
 VAR_62 |= (VAR_52 >> 4) & 0x10;
 FUNC_21(VAR_47, VAR_11, VAR_62);

 VAR_62 = 0x40;
 if (VAR_58 & 0x200) VAR_62 |= 0x20;

 FUNC_21(VAR_47, VAR_29, VAR_62);

 FUNC_21(VAR_47, VAR_28, 0xFF);
 FUNC_21(VAR_47, VAR_32, 0);
 FUNC_21(VAR_47, VAR_30, 0xC3);

 FUNC_21(VAR_47, VAR_14, 0x20);

 VAR_62 = (VAR_46->var.vmode & VAR_9) ? 0x84 : 0x80;

 FUNC_21(VAR_47, VAR_0, VAR_62);
 VAR_62 = FUNC_8(VAR_47, VAR_16) & ~0x4;
 if (VAR_46->var.vmode & VAR_9)
  VAR_62 |= 0x4;
 FUNC_20(VAR_47, VAR_16, VAR_62);


 FUNC_21(VAR_47, VAR_10, 0x80);

 switch (VAR_61) {
 case 8:
  VAR_62 = 0x00;
  break;
 case 16:
  VAR_62 = 0x05;
  break;
 case 24:
  VAR_62 = 0x29;
  break;
 case 32:
  VAR_62 = 0x09;
  break;
 }

 FUNC_21(VAR_47, VAR_19, VAR_62);

 VAR_62 = FUNC_9(VAR_47, VAR_3);
 if (!FUNC_5(VAR_47->chip_id))
  VAR_62 |= 0x10;
 if (FUNC_7(VAR_47->chip_id))
  VAR_62 |= 0x20;
 FUNC_21(VAR_47, VAR_3, VAR_62);

 FUNC_21(VAR_47, VAR_13, FUNC_9(VAR_47, VAR_13) | 0x40);
 if (!FUNC_6(VAR_47->chip_id))
  FUNC_21(VAR_47, VAR_18, FUNC_9(VAR_47, VAR_18) | 0x10);

 if (VAR_47->chip_id != VAR_20 && VAR_47->chip_id != VAR_12)
  FUNC_21(VAR_47, VAR_17, FUNC_9(VAR_47, VAR_17) | 0x06);

 FUNC_19(VAR_47->io_virt, 0, 3);
 FUNC_19(VAR_47->io_virt, 1, 1);

 FUNC_19(VAR_47->io_virt, 2, 0x0F);
 FUNC_19(VAR_47->io_virt, 3, 0);
 FUNC_19(VAR_47->io_virt, 4, 0x0E);


 VAR_63 = FUNC_0(VAR_46->var.pixclock);


 VAR_62 = FUNC_8(VAR_47, VAR_15) & 0xF0;
 if (VAR_61 == 32 || (VAR_47->chip_id == VAR_20 && VAR_61 == 16)) {
  VAR_62 |= 8;
  VAR_63 *= 2;
 }
 FUNC_14(VAR_47, VAR_63);
 FUNC_20(VAR_47, VAR_15, VAR_62 | 0x12);
 FUNC_20(VAR_47, 0x5, 0x40);
 FUNC_20(VAR_47, 0x6, 0x05);
 FUNC_20(VAR_47, 0x7, 0x0F);


 FUNC_22(VAR_47, 0x10, 0x41);
 FUNC_22(VAR_47, 0x12, 0x0F);
 FUNC_22(VAR_47, 0x13, 0);


 for (VAR_62 = 0; VAR_62 < 0x10; VAR_62++)
  FUNC_22(VAR_47, VAR_62, VAR_62);
 FUNC_4(VAR_47->io_virt + VAR_39);
 FUNC_18(VAR_47, 0x20, VAR_21);

 switch (VAR_61) {
 case 8:
  VAR_62 = 0;
  break;
 case 16:
  VAR_62 = 0x30;
  break;
 case 24:
 case 32:
  VAR_62 = 0xD0;
  break;
 }

 FUNC_17(VAR_47, VAR_41);
 FUNC_17(VAR_47, VAR_42);
 FUNC_17(VAR_47, VAR_42);
 FUNC_17(VAR_47, VAR_42);
 FUNC_17(VAR_47, VAR_42);
 FUNC_18(VAR_47, VAR_62, VAR_42);
 FUNC_17(VAR_47, VAR_41);

 if (VAR_47->flatpanel)
  FUNC_13(VAR_47, VAR_46->var.yres);
 VAR_46->fix.line_length = VAR_46->var.xres_virtual * VAR_61 / 8;
 FUNC_12(VAR_47, VAR_46->fix.line_length / 8);

 if (!(VAR_46->flags & VAR_4))
  VAR_47->init_accel(VAR_47, VAR_46->var.xres_virtual, VAR_61);

 VAR_46->fix.visual = (VAR_61 == 8) ? VAR_7 : VAR_8;
 VAR_46->cmap.len = (VAR_61 == 8) ? 256 : 16;
 FUNC_2("exit\n");
 return 0;
}

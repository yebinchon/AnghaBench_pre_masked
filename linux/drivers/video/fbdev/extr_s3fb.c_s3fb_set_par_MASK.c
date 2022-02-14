
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int vgabase; } ;
struct s3fb_info {scalar_t__ chip; TYPE_2__ state; } ;
struct TYPE_8__ {int bits_per_pixel; int xres_virtual; int yres_virtual; int vmode; int xres; int pixclock; int left_margin; int right_margin; int hsync_len; int activate; scalar_t__ yoffset; scalar_t__ xoffset; } ;
struct TYPE_9__ {int ypanstep; int line_length; } ;
struct TYPE_6__ {int blit_x; int blit_y; } ;
struct fb_info {int screen_base; TYPE_3__ var; int node; TYPE_5__ fix; TYPE_1__ pixmap; int * tileops; int flags; struct s3fb_info* par; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int,int,int) ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (struct fb_info*,char*,...) ;
 int FUNC_2 (struct fb_info*,char*) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_5 (struct fb_info*,int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_6 (int ,TYPE_3__*,TYPE_5__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int *,TYPE_3__*,int,int,int,int,int,int ) ;
 int FUNC_13 (int ,int,int) ;
 int FUNC_14 (int ,int,int,int) ;
 int FUNC_15 (int ,int ,int) ;
 int FUNC_16 (int ,int,int,int) ;
 int FUNC_17 (int ,int,int) ;
 int FUNC_18 (int ,int ,int) ;
 int FUNC_19 (int ,int,int) ;

__attribute__((used)) static int FUNC_20(struct fb_info *VAR_25)
{
 struct s3fb_info *VAR_26 = VAR_25->par;
 u32 VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 u32 VAR_34 = VAR_25->var.bits_per_pixel;
 u32 VAR_35, VAR_36;

 if (VAR_34 != 0) {
  VAR_25->fix.ypanstep = 1;
  VAR_25->fix.line_length = (VAR_25->var.xres_virtual * VAR_34) / 8;

  VAR_25->flags &= ~VAR_11;
  VAR_25->tileops = ((void*)0);


  VAR_25->pixmap.blit_x = (VAR_34 == 4) ? (1 << (8 - 1)) : (~(u32)0);
  VAR_25->pixmap.blit_y = ~(u32)0;

  VAR_30 = (VAR_25->var.xres_virtual * VAR_34) / 64;
  VAR_31 = VAR_25->var.yres_virtual * VAR_25->fix.line_length;
 } else {
  VAR_25->fix.ypanstep = 16;
  VAR_25->fix.line_length = 0;

  VAR_25->flags |= VAR_11;
  VAR_25->tileops = VAR_16 ? &VAR_22 : &VAR_24;


  VAR_25->pixmap.blit_x = 1 << (8 - 1);
  VAR_25->pixmap.blit_y = 1 << (16 - 1);

  VAR_30 = VAR_25->var.xres_virtual / 16;
  VAR_31 = (VAR_25->var.xres_virtual * VAR_25->var.yres_virtual) / 64;
 }

 VAR_25->var.xoffset = 0;
 VAR_25->var.yoffset = 0;
 VAR_25->var.activate = VAR_12;


 FUNC_17(VAR_26->state.vgabase, 0x38, 0x48);
 FUNC_17(VAR_26->state.vgabase, 0x39, 0xA5);
 FUNC_19(VAR_26->state.vgabase, 0x08, 0x06);
 FUNC_14(VAR_26->state.vgabase, 0x11, 0x00, 0x80);


 FUNC_16(VAR_26->state.vgabase, 0x01, 0x20, 0x20);
 FUNC_14(VAR_26->state.vgabase, 0x17, 0x00, 0x80);


 FUNC_9(VAR_26->state.vgabase);
 FUNC_7(VAR_26->state.vgabase);
 FUNC_10(VAR_26->state.vgabase);
 FUNC_8(VAR_26->state.vgabase);
 FUNC_15(VAR_26->state.vgabase, VAR_18, 0xFFFFFFFF);
 FUNC_15(VAR_26->state.vgabase, VAR_20, 0);


 FUNC_14(VAR_26->state.vgabase, 0x58, 0x10, 0x10);
 FUNC_14(VAR_26->state.vgabase, 0x31, 0x08, 0x08);



 FUNC_14(VAR_26->state.vgabase, 0x33, 0x00, 0x08);
 FUNC_14(VAR_26->state.vgabase, 0x43, 0x00, 0x01);

 FUNC_14(VAR_26->state.vgabase, 0x5D, 0x00, 0x28);
 FUNC_1(VAR_25, "offset register       : %d\n", VAR_30);
 FUNC_15(VAR_26->state.vgabase, VAR_19, VAR_30);

 if (VAR_26->chip != VAR_1 &&
     VAR_26->chip != VAR_2 &&
     VAR_26->chip != VAR_3 &&
     VAR_26->chip != VAR_4 &&
     VAR_26->chip != VAR_6 &&
     VAR_26->chip != VAR_0) {
  FUNC_17(VAR_26->state.vgabase, 0x54, 0x18);
  FUNC_17(VAR_26->state.vgabase, 0x60, 0xff);
  FUNC_17(VAR_26->state.vgabase, 0x61, 0xff);
  FUNC_17(VAR_26->state.vgabase, 0x62, 0xff);
 }

 FUNC_17(VAR_26->state.vgabase, 0x3A, 0x35);
 FUNC_13(VAR_26->state.vgabase, 0x33, 0x00);

 if (VAR_25->var.vmode & VAR_13)
  FUNC_14(VAR_26->state.vgabase, 0x09, 0x80, 0x80);
 else
  FUNC_14(VAR_26->state.vgabase, 0x09, 0x00, 0x80);

 if (VAR_25->var.vmode & VAR_14)
  FUNC_14(VAR_26->state.vgabase, 0x42, 0x20, 0x20);
 else
  FUNC_14(VAR_26->state.vgabase, 0x42, 0x00, 0x20);


 FUNC_14(VAR_26->state.vgabase, 0x45, 0x00, 0x01);

 FUNC_14(VAR_26->state.vgabase, 0x67, 0x00, 0x0C);

 VAR_28 = FUNC_6(VAR_23, &(VAR_25->var), &(VAR_25->fix));


 if (VAR_26->chip == VAR_7) {
  FUNC_17(VAR_26->state.vgabase, 0x86, 0x80);
  FUNC_17(VAR_26->state.vgabase, 0x90, 0x00);
 }


 if (VAR_26->chip == VAR_9) {
  FUNC_17(VAR_26->state.vgabase, 0x50, 0x00);
  FUNC_17(VAR_26->state.vgabase, 0x67, 0x50);
  FUNC_4(10);
  FUNC_17(VAR_26->state.vgabase, 0x63, (VAR_28 <= 2) ? 0x90 : 0x09);
  FUNC_17(VAR_26->state.vgabase, 0x66, 0x90);
 }

 if (VAR_26->chip == VAR_1 ||
     VAR_26->chip == VAR_2 ||
     VAR_26->chip == VAR_3 ||
     VAR_26->chip == VAR_4 ||
     VAR_26->chip == VAR_6 ||
     VAR_26->chip == VAR_5 ||
     VAR_26->chip == VAR_7 ||
     VAR_26->chip == VAR_8 ||
     VAR_26->chip == VAR_0) {
  VAR_33 = VAR_25->var.xres * ((VAR_34+7)/8);
  FUNC_17(VAR_26->state.vgabase, 0x91, (VAR_33 + 7) / 8);
  FUNC_17(VAR_26->state.vgabase, 0x90, (((VAR_33 + 7) / 8) >> 8) | 0x80);

  FUNC_17(VAR_26->state.vgabase, 0x66, 0x81);
 }

 if (VAR_26->chip == VAR_1 ||
     VAR_26->chip == VAR_2 ||
     VAR_26->chip == VAR_3 ||
     VAR_26->chip == VAR_4 ||
     VAR_26->chip == VAR_6 ||
     VAR_26->chip == VAR_0)
  FUNC_17(VAR_26->state.vgabase, 0x34, 0x00);
 else
  FUNC_17(VAR_26->state.vgabase, 0x34, 0x10);

 FUNC_14(VAR_26->state.vgabase, 0x31, 0x00, 0x40);
 VAR_32 = 0;
 VAR_29 = 1;


 switch (VAR_28) {
 case 0:
  FUNC_1(VAR_25, "text mode\n");
  FUNC_11(VAR_26->state.vgabase);


  FUNC_14(VAR_26->state.vgabase, 0x50, 0x00, 0x30);
  FUNC_14(VAR_26->state.vgabase, 0x67, 0x00, 0xF0);


  FUNC_14(VAR_26->state.vgabase, 0x3A, 0x00, 0x30);

  if (VAR_16) {
   FUNC_1(VAR_25, "high speed text mode set\n");
   FUNC_14(VAR_26->state.vgabase, 0x31, 0x40, 0x40);
  }
  break;
 case 1:
  FUNC_1(VAR_25, "4 bit pseudocolor\n");
  FUNC_18(VAR_26->state.vgabase, VAR_15, 0x40);


  FUNC_14(VAR_26->state.vgabase, 0x50, 0x00, 0x30);
  FUNC_14(VAR_26->state.vgabase, 0x67, 0x00, 0xF0);


  FUNC_14(VAR_26->state.vgabase, 0x3A, 0x00, 0x30);
  break;
 case 2:
  FUNC_1(VAR_25, "4 bit pseudocolor, planar\n");


  FUNC_14(VAR_26->state.vgabase, 0x50, 0x00, 0x30);
  FUNC_14(VAR_26->state.vgabase, 0x67, 0x00, 0xF0);


  FUNC_14(VAR_26->state.vgabase, 0x3A, 0x00, 0x30);
  break;
 case 3:
  FUNC_1(VAR_25, "8 bit pseudocolor\n");
  FUNC_14(VAR_26->state.vgabase, 0x50, 0x00, 0x30);
  if (VAR_25->var.pixclock > 20000 ||
      VAR_26->chip == VAR_1 ||
      VAR_26->chip == VAR_2 ||
      VAR_26->chip == VAR_3 ||
      VAR_26->chip == VAR_4 ||
      VAR_26->chip == VAR_6 ||
      VAR_26->chip == VAR_0)
   FUNC_14(VAR_26->state.vgabase, 0x67, 0x00, 0xF0);
  else {
   FUNC_14(VAR_26->state.vgabase, 0x67, 0x10, 0xF0);
   VAR_32 = 1;
  }
  break;
 case 4:
  FUNC_1(VAR_25, "5/5/5 truecolor\n");
  if (VAR_26->chip == VAR_9) {
   if (VAR_25->var.pixclock > 20000)
    FUNC_14(VAR_26->state.vgabase, 0x67, 0x20, 0xF0);
   else
    FUNC_14(VAR_26->state.vgabase, 0x67, 0x30, 0xF0);
  } else if (VAR_26->chip == VAR_5) {
   FUNC_14(VAR_26->state.vgabase, 0x50, 0x10, 0x30);
   if (VAR_25->var.pixclock > 8695) {
    FUNC_14(VAR_26->state.vgabase, 0x67, 0x30, 0xF0);
    VAR_29 = 2;
   } else {
    FUNC_14(VAR_26->state.vgabase, 0x67, 0x20, 0xF0);
    VAR_32 = 1;
   }
  } else {
   FUNC_14(VAR_26->state.vgabase, 0x50, 0x10, 0x30);
   FUNC_14(VAR_26->state.vgabase, 0x67, 0x30, 0xF0);
   if (VAR_26->chip != VAR_1 &&
       VAR_26->chip != VAR_2 &&
       VAR_26->chip != VAR_3 &&
       VAR_26->chip != VAR_4 &&
       VAR_26->chip != VAR_6 &&
       VAR_26->chip != VAR_0)
    VAR_29 = 2;
  }
  break;
 case 5:
  FUNC_1(VAR_25, "5/6/5 truecolor\n");
  if (VAR_26->chip == VAR_9) {
   if (VAR_25->var.pixclock > 20000)
    FUNC_14(VAR_26->state.vgabase, 0x67, 0x40, 0xF0);
   else
    FUNC_14(VAR_26->state.vgabase, 0x67, 0x50, 0xF0);
  } else if (VAR_26->chip == VAR_5) {
   FUNC_14(VAR_26->state.vgabase, 0x50, 0x10, 0x30);
   if (VAR_25->var.pixclock > 8695) {
    FUNC_14(VAR_26->state.vgabase, 0x67, 0x50, 0xF0);
    VAR_29 = 2;
   } else {
    FUNC_14(VAR_26->state.vgabase, 0x67, 0x40, 0xF0);
    VAR_32 = 1;
   }
  } else {
   FUNC_14(VAR_26->state.vgabase, 0x50, 0x10, 0x30);
   FUNC_14(VAR_26->state.vgabase, 0x67, 0x50, 0xF0);
   if (VAR_26->chip != VAR_1 &&
       VAR_26->chip != VAR_2 &&
       VAR_26->chip != VAR_3 &&
       VAR_26->chip != VAR_4 &&
       VAR_26->chip != VAR_6 &&
       VAR_26->chip != VAR_0)
    VAR_29 = 2;
  }
  break;
 case 6:

  FUNC_1(VAR_25, "8/8/8 truecolor\n");
  FUNC_14(VAR_26->state.vgabase, 0x67, 0xD0, 0xF0);
  break;
 case 7:
  FUNC_1(VAR_25, "8/8/8/8 truecolor\n");
  FUNC_14(VAR_26->state.vgabase, 0x50, 0x30, 0x30);
  FUNC_14(VAR_26->state.vgabase, 0x67, 0xD0, 0xF0);
  break;
 default:
  FUNC_2(VAR_25, "unsupported mode - bug\n");
  return -VAR_10;
 }

 if (VAR_26->chip != VAR_9) {
  FUNC_16(VAR_26->state.vgabase, 0x15, VAR_32 ? 0x10 : 0x00, 0x10);
  FUNC_16(VAR_26->state.vgabase, 0x18, VAR_32 ? 0x80 : 0x00, 0x80);
 }

 FUNC_5(VAR_25, VAR_25->var.pixclock);
 FUNC_12(VAR_26->state.vgabase, &VAR_21, &(VAR_25->var), VAR_29, 1,
    (VAR_25->var.vmode & VAR_13) ? 2 : 1,
    (VAR_25->var.vmode & VAR_14) ? 2 : 1,
    VAR_29, VAR_25->node);


 VAR_35 = VAR_25->var.xres + VAR_25->var.left_margin + VAR_25->var.right_margin + VAR_25->var.hsync_len;
 VAR_35 = ((VAR_35 * VAR_29) / 8) - 5;
 FUNC_17(VAR_26->state.vgabase, 0x3C, (VAR_35 + 1) / 2);


 VAR_36 = ((VAR_25->var.xres + VAR_25->var.right_margin) * VAR_29) / 8;

 VAR_27 = FUNC_0((VAR_35 + VAR_36 + 1) / 2 + 2, VAR_36 + 4, VAR_35 + 1);
 FUNC_15(VAR_26->state.vgabase, VAR_17, VAR_27);

 FUNC_3(VAR_25->screen_base, 0x00, VAR_31);

 FUNC_14(VAR_26->state.vgabase, 0x17, 0x80, 0x80);
 FUNC_16(VAR_26->state.vgabase, 0x01, 0x00, 0x20);

 return 0;
}

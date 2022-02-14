
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_8__ {int bits_per_pixel; int xres_virtual; int yres_virtual; int vmode; int pixclock; int xres; int left_margin; int right_margin; int hsync_len; int activate; scalar_t__ yoffset; scalar_t__ xoffset; } ;
struct TYPE_9__ {int ypanstep; int line_length; int smem_start; } ;
struct TYPE_7__ {int blit_x; int blit_y; } ;
struct fb_info {int screen_base; TYPE_3__ var; int node; TYPE_5__ fix; TYPE_2__ pixmap; int * tileops; int flags; struct arkfb_info* par; } ;
struct TYPE_6__ {int vgabase; } ;
struct arkfb_info {TYPE_1__ state; int dac; } ;


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
 int FUNC_0 (struct fb_info*,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct fb_info*,char*,...) ;
 int FUNC_3 (struct fb_info*,char*) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,TYPE_3__*,TYPE_5__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int *,TYPE_3__*,int,int,int,int,int,int ) ;
 int FUNC_12 (int ,int,int,int) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (int ,int,int,int) ;
 int VAR_18 ;
 int FUNC_15 (int ,int,int) ;
 int FUNC_16 (int ,int ,int) ;
 int FUNC_17 (int ,int,int) ;

__attribute__((used)) static int FUNC_18(struct fb_info *VAR_19)
{
 struct arkfb_info *VAR_20 = VAR_19->par;
 u32 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 u32 VAR_27 = VAR_19->var.bits_per_pixel;
 u8 VAR_28;

 if (VAR_27 != 0) {
  VAR_19->fix.ypanstep = 1;
  VAR_19->fix.line_length = (VAR_19->var.xres_virtual * VAR_27) / 8;

  VAR_19->flags &= ~VAR_7;
  VAR_19->tileops = ((void*)0);


  VAR_19->pixmap.blit_x = (VAR_27 == 4) ? (1 << (8 - 1)) : (~(u32)0);
  VAR_19->pixmap.blit_y = ~(u32)0;

  VAR_25 = (VAR_19->var.xres_virtual * VAR_27) / 64;
  VAR_26 = VAR_19->var.yres_virtual * VAR_19->fix.line_length;
 } else {
  VAR_19->fix.ypanstep = 16;
  VAR_19->fix.line_length = 0;

  VAR_19->flags |= VAR_7;
  VAR_19->tileops = &VAR_17;


  VAR_19->pixmap.blit_x = 1 << (8 - 1);
  VAR_19->pixmap.blit_y = 1 << (16 - 1);

  VAR_25 = VAR_19->var.xres_virtual / 16;
  VAR_26 = (VAR_19->var.xres_virtual * VAR_19->var.yres_virtual) / 64;
 }

 VAR_19->var.xoffset = 0;
 VAR_19->var.yoffset = 0;
 VAR_19->var.activate = VAR_8;


 FUNC_12(VAR_20->state.vgabase, 0x11, 0x00, 0x80);


 FUNC_14(VAR_20->state.vgabase, 0x01, 0x20, 0x20);
 FUNC_12(VAR_20->state.vgabase, 0x17, 0x00, 0x80);


 FUNC_8(VAR_20->state.vgabase);
 FUNC_6(VAR_20->state.vgabase);
 FUNC_9(VAR_20->state.vgabase);
 FUNC_7(VAR_20->state.vgabase);
 FUNC_13(VAR_20->state.vgabase, VAR_12, 0xFFFFFFFF);
 FUNC_13(VAR_20->state.vgabase, VAR_14, 0);


 FUNC_14(VAR_20->state.vgabase, 0x10, 0x1F, 0x1F);
 FUNC_14(VAR_20->state.vgabase, 0x12, 0x03, 0x03);

 FUNC_17(VAR_20->state.vgabase, 0x13, VAR_19->fix.smem_start >> 16);
 FUNC_17(VAR_20->state.vgabase, 0x14, VAR_19->fix.smem_start >> 24);
 FUNC_17(VAR_20->state.vgabase, 0x15, 0);
 FUNC_17(VAR_20->state.vgabase, 0x16, 0);



 VAR_28 = 0x10 | ((VAR_18 & 0x0E) >> 1) | (VAR_18 & 0x01) << 7 | (VAR_18 & 0x10) << 1;
 FUNC_17(VAR_20->state.vgabase, 0x18, VAR_28);


 FUNC_2(VAR_19, "offset register       : %d\n", VAR_25);
 FUNC_13(VAR_20->state.vgabase, VAR_13, VAR_25);


 FUNC_12(VAR_20->state.vgabase, 0x40, 0x08, 0x08);

 if (VAR_19->var.vmode & VAR_9)
  FUNC_12(VAR_20->state.vgabase, 0x09, 0x80, 0x80);
 else
  FUNC_12(VAR_20->state.vgabase, 0x09, 0x00, 0x80);

 if (VAR_19->var.vmode & VAR_10)
  FUNC_12(VAR_20->state.vgabase, 0x44, 0x04, 0x04);
 else
  FUNC_12(VAR_20->state.vgabase, 0x44, 0x00, 0x04);

 VAR_23 = 1;
 VAR_24 = 1;
 VAR_22 = FUNC_5(VAR_16, &(VAR_19->var), &(VAR_19->fix));


 switch (VAR_22) {
 case 0:
  FUNC_2(VAR_19, "text mode\n");
  FUNC_10(VAR_20->state.vgabase);

  FUNC_17(VAR_20->state.vgabase, 0x11, 0x10);
  FUNC_12(VAR_20->state.vgabase, 0x46, 0x00, 0x04);
  FUNC_1(VAR_20->dac, VAR_1);

  break;
 case 1:
  FUNC_2(VAR_19, "4 bit pseudocolor\n");
  FUNC_16(VAR_20->state.vgabase, VAR_11, 0x40);

  FUNC_17(VAR_20->state.vgabase, 0x11, 0x10);
  FUNC_12(VAR_20->state.vgabase, 0x46, 0x00, 0x04);
  FUNC_1(VAR_20->dac, VAR_1);
  break;
 case 2:
  FUNC_2(VAR_19, "4 bit pseudocolor, planar\n");

  FUNC_17(VAR_20->state.vgabase, 0x11, 0x10);
  FUNC_12(VAR_20->state.vgabase, 0x46, 0x00, 0x04);
  FUNC_1(VAR_20->dac, VAR_1);
  break;
 case 3:
  FUNC_2(VAR_19, "8 bit pseudocolor\n");

  FUNC_17(VAR_20->state.vgabase, 0x11, 0x16);

  if (VAR_19->var.pixclock > 20000) {
   FUNC_2(VAR_19, "not using multiplex\n");
   FUNC_12(VAR_20->state.vgabase, 0x46, 0x00, 0x04);
   FUNC_1(VAR_20->dac, VAR_1);
  } else {
   FUNC_2(VAR_19, "using multiplex\n");
   FUNC_12(VAR_20->state.vgabase, 0x46, 0x04, 0x04);
   FUNC_1(VAR_20->dac, VAR_0);
   VAR_24 = 2;
  }
  break;
 case 4:
  FUNC_2(VAR_19, "5/5/5 truecolor\n");

  FUNC_17(VAR_20->state.vgabase, 0x11, 0x1A);
  FUNC_12(VAR_20->state.vgabase, 0x46, 0x04, 0x04);
  FUNC_1(VAR_20->dac, VAR_4);
  break;
 case 5:
  FUNC_2(VAR_19, "5/6/5 truecolor\n");

  FUNC_17(VAR_20->state.vgabase, 0x11, 0x1A);
  FUNC_12(VAR_20->state.vgabase, 0x46, 0x04, 0x04);
  FUNC_1(VAR_20->dac, VAR_2);
  break;
 case 6:
  FUNC_2(VAR_19, "8/8/8 truecolor\n");

  FUNC_17(VAR_20->state.vgabase, 0x11, 0x16);
  FUNC_12(VAR_20->state.vgabase, 0x46, 0x04, 0x04);
  FUNC_1(VAR_20->dac, VAR_3);
  VAR_23 = 3;
  VAR_24 = 2;
  break;
 case 7:
  FUNC_2(VAR_19, "8/8/8/8 truecolor\n");

  FUNC_17(VAR_20->state.vgabase, 0x11, 0x1E);
  FUNC_12(VAR_20->state.vgabase, 0x46, 0x04, 0x04);
  FUNC_1(VAR_20->dac, VAR_5);
  VAR_23 = 2;
  break;
 default:
  FUNC_3(VAR_19, "unsupported mode - bug\n");
  return -VAR_6;
 }

 FUNC_0(VAR_19, (VAR_24 * VAR_19->var.pixclock) / VAR_23);
 FUNC_11(VAR_20->state.vgabase, &VAR_15, &(VAR_19->var), VAR_23, VAR_24,
    (VAR_19->var.vmode & VAR_9) ? 2 : 1,
    (VAR_19->var.vmode & VAR_10) ? 2 : 1,
     VAR_23, VAR_19->node);


 VAR_21 = VAR_19->var.xres + VAR_19->var.left_margin + VAR_19->var.right_margin + VAR_19->var.hsync_len;
 VAR_21 = ((VAR_21 * VAR_23 / VAR_24) / 8) - 5;
 FUNC_15(VAR_20->state.vgabase, 0x42, (VAR_21 + 1) / 2);

 FUNC_4(VAR_19->screen_base, 0x00, VAR_26);

 FUNC_12(VAR_20->state.vgabase, 0x17, 0x80, 0x80);
 FUNC_14(VAR_20->state.vgabase, 0x01, 0x00, 0x20);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sm_addr; } ;
struct sm501fb_par {TYPE_1__ screen; struct sm501fb_info* info; } ;
struct sm501fb_info {scalar_t__ regs2d; } ;
struct TYPE_4__ {int xres_virtual; int yres_virtual; int xres; int bits_per_pixel; } ;
struct fb_info {TYPE_2__ var; struct sm501fb_par* par; } ;
struct fb_copyarea {int width; int height; int sx; int sy; int dx; int dy; } ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (struct fb_info*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_11, const struct fb_copyarea *VAR_12)
{
 struct sm501fb_par *VAR_13 = VAR_11->par;
 struct sm501fb_info *VAR_14 = VAR_13->info;
 int VAR_15 = VAR_12->width;
 int VAR_16 = VAR_12->height;
 int VAR_17 = VAR_12->sx;
 int VAR_18 = VAR_12->sy;
 int VAR_19 = VAR_12->dx;
 int VAR_20 = VAR_12->dy;
 unsigned long VAR_21 = 0;


 if ((VAR_17 >= VAR_11->var.xres_virtual) ||
     (VAR_18 >= VAR_11->var.yres_virtual))

  return;
 if ((VAR_17 + VAR_15) >= VAR_11->var.xres_virtual)
  VAR_15 = VAR_11->var.xres_virtual - VAR_17 - 1;
 if ((VAR_18 + VAR_16) >= VAR_11->var.yres_virtual)
  VAR_16 = VAR_11->var.yres_virtual - VAR_18 - 1;


 if ((VAR_19 >= VAR_11->var.xres_virtual) ||
     (VAR_20 >= VAR_11->var.yres_virtual))

  return;
 if ((VAR_19 + VAR_15) >= VAR_11->var.xres_virtual)
  VAR_15 = VAR_11->var.xres_virtual - VAR_19 - 1;
 if ((VAR_20 + VAR_16) >= VAR_11->var.yres_virtual)
  VAR_16 = VAR_11->var.yres_virtual - VAR_20 - 1;

 if ((VAR_17 < VAR_19) || (VAR_18 < VAR_20)) {
  VAR_21 = 1 << 27;
  VAR_17 += VAR_15 - 1;
  VAR_19 += VAR_15 - 1;
  VAR_18 += VAR_16 - 1;
  VAR_20 += VAR_16 - 1;
 }

 if (FUNC_0(VAR_11))
  return;


 FUNC_1(VAR_13->screen.sm_addr, VAR_14->regs2d + VAR_8);
 FUNC_1(VAR_13->screen.sm_addr,
   VAR_14->regs2d + VAR_3);


 FUNC_1((VAR_11->var.xres << 16) | VAR_11->var.xres,
        VAR_14->regs2d + VAR_10);


 FUNC_1((VAR_11->var.xres_virtual << 16) | VAR_11->var.xres_virtual,
        VAR_14->regs2d + VAR_6);


 switch (VAR_11->var.bits_per_pixel) {
 case 8:
  FUNC_1(0, VAR_14->regs2d + VAR_9);
  break;
 case 16:
  FUNC_1(0x00100000, VAR_14->regs2d + VAR_9);
  break;
 case 32:
  FUNC_1(0x00200000, VAR_14->regs2d + VAR_9);
  break;
 }


 FUNC_1(0xffffffff, VAR_14->regs2d + VAR_0);


 FUNC_1(0xffffffff, VAR_14->regs2d + VAR_5);


 FUNC_1((VAR_17 << 16) | VAR_18, VAR_14->regs2d + VAR_7);
 FUNC_1((VAR_19 << 16) | VAR_20, VAR_14->regs2d + VAR_2);


 FUNC_1((VAR_15 << 16) | VAR_16, VAR_14->regs2d + VAR_4);


 FUNC_1(0x800000cc | VAR_21, VAR_14->regs2d + VAR_1);
}

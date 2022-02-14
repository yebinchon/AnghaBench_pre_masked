
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sm_addr; } ;
struct sm501fb_par {TYPE_1__ screen; struct sm501fb_info* info; } ;
struct sm501fb_info {scalar_t__ regs2d; } ;
struct TYPE_4__ {scalar_t__ xres_virtual; scalar_t__ yres_virtual; int xres; int bits_per_pixel; } ;
struct fb_info {TYPE_2__ var; struct sm501fb_par* par; } ;
struct fb_fillrect {int width; int height; scalar_t__ dx; scalar_t__ dy; int color; } ;


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

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_11, const struct fb_fillrect *VAR_12)
{
 struct sm501fb_par *VAR_13 = VAR_11->par;
 struct sm501fb_info *VAR_14 = VAR_13->info;
 int VAR_15 = VAR_12->width, VAR_16 = VAR_12->height;

 if ((VAR_12->dx >= VAR_11->var.xres_virtual) ||
     (VAR_12->dy >= VAR_11->var.yres_virtual))

  return;
 if ((VAR_12->dx + VAR_15) >= VAR_11->var.xres_virtual)
  VAR_15 = VAR_11->var.xres_virtual - VAR_12->dx - 1;
 if ((VAR_12->dy + VAR_16) >= VAR_11->var.yres_virtual)
  VAR_16 = VAR_11->var.yres_virtual - VAR_12->dy - 1;

 if (FUNC_0(VAR_11))
  return;


 FUNC_1(VAR_13->screen.sm_addr, VAR_14->regs2d + VAR_8);
 FUNC_1(VAR_13->screen.sm_addr,
   VAR_14->regs2d + VAR_3);


 FUNC_1((VAR_11->var.xres << 16) | VAR_11->var.xres,
        VAR_14->regs2d + VAR_10);


 FUNC_1((VAR_11->var.xres_virtual << 16) | VAR_11->var.xres_virtual,
        VAR_14->regs2d + VAR_7);


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


 FUNC_1(0xffffffff, VAR_14->regs2d + VAR_6);


 FUNC_1(VAR_12->color, VAR_14->regs2d + VAR_5);


 FUNC_1((VAR_12->dx << 16) | VAR_12->dy,
   VAR_14->regs2d + VAR_2);


 FUNC_1((VAR_15 << 16) | VAR_16, VAR_14->regs2d + VAR_4);


 FUNC_1(0x800100cc, VAR_14->regs2d + VAR_1);
}

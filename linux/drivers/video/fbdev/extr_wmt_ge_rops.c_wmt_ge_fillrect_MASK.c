
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long u32 ;
struct TYPE_6__ {int bits_per_pixel; int xres_virtual; int yres_virtual; } ;
struct TYPE_5__ {scalar_t__ visual; int smem_start; } ;
struct fb_info {scalar_t__ state; TYPE_3__ var; TYPE_2__ fix; TYPE_1__* fbops; scalar_t__ pseudo_palette; } ;
struct fb_fillrect {size_t color; int dx; int dy; int width; int height; scalar_t__ rop; } ;
struct TYPE_4__ {int (* fb_sync ) (struct fb_info*) ;} ;


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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 unsigned long FUNC_0 (int,unsigned long) ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (int,scalar_t__) ;

void FUNC_3(struct fb_info *VAR_18, const struct fb_fillrect *VAR_19)
{
 unsigned long VAR_20, VAR_21;

 if (VAR_18->state != VAR_0)
  return;

 if (VAR_18->fix.visual == VAR_2 ||
     VAR_18->fix.visual == VAR_1)
  VAR_20 = ((u32 *) (VAR_18->pseudo_palette))[VAR_19->color];
 else
  VAR_20 = VAR_19->color;

 VAR_21 = FUNC_0(VAR_18->var.bits_per_pixel, VAR_20);

 if (VAR_18->fbops->fb_sync)
  VAR_18->fbops->fb_sync(VAR_18);

 FUNC_2(VAR_18->var.bits_per_pixel == 32 ? 3 :
       (VAR_18->var.bits_per_pixel == 8 ? 0 : 1), VAR_17 + VAR_4);
 FUNC_2(VAR_18->var.bits_per_pixel == 15 ? 1 : 0, VAR_17 + VAR_13);
 FUNC_2(VAR_18->fix.smem_start, VAR_17 + VAR_9);
 FUNC_2(VAR_18->var.xres_virtual - 1, VAR_17 + VAR_11);
 FUNC_2(VAR_18->var.yres_virtual - 1, VAR_17 + VAR_10);
 FUNC_2(VAR_19->dx, VAR_17 + VAR_7);
 FUNC_2(VAR_19->dy, VAR_17 + VAR_8);
 FUNC_2(VAR_19->width - 1, VAR_17 + VAR_6);
 FUNC_2(VAR_19->height - 1, VAR_17 + VAR_5);

 FUNC_2(VAR_21, VAR_17 + VAR_14);
 FUNC_2(1, VAR_17 + VAR_3);
 FUNC_2(VAR_19->rop == VAR_16 ? 0x5a : 0xf0, VAR_17 + VAR_15);
 FUNC_2(1, VAR_17 + VAR_12);
}

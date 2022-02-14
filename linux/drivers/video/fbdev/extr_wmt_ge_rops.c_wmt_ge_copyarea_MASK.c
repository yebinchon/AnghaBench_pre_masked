
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int bits_per_pixel; int xres_virtual; int yres_virtual; } ;
struct TYPE_5__ {int smem_start; } ;
struct fb_info {scalar_t__ state; TYPE_3__ var; TYPE_2__ fix; TYPE_1__* fbops; } ;
struct fb_copyarea {int sx; int sy; int width; int height; int dx; int dy; } ;
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
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct fb_info *VAR_20, const struct fb_copyarea *VAR_21)
{
 if (VAR_20->state != VAR_0)
  return;

 if (VAR_20->fbops->fb_sync)
  VAR_20->fbops->fb_sync(VAR_20);

 FUNC_1(VAR_20->var.bits_per_pixel > 16 ? 3 :
       (VAR_20->var.bits_per_pixel > 8 ? 1 : 0), VAR_19 + VAR_2);

 FUNC_1(VAR_20->fix.smem_start, VAR_19 + VAR_16);
 FUNC_1(VAR_20->var.xres_virtual - 1, VAR_19 + VAR_18);
 FUNC_1(VAR_20->var.yres_virtual - 1, VAR_19 + VAR_17);
 FUNC_1(VAR_21->sx, VAR_19 + VAR_14);
 FUNC_1(VAR_21->sy, VAR_19 + VAR_15);
 FUNC_1(VAR_21->width - 1, VAR_19 + VAR_13);
 FUNC_1(VAR_21->height - 1, VAR_19 + VAR_12);

 FUNC_1(VAR_20->fix.smem_start, VAR_19 + VAR_7);
 FUNC_1(VAR_20->var.xres_virtual - 1, VAR_19 + VAR_9);
 FUNC_1(VAR_20->var.yres_virtual - 1, VAR_19 + VAR_8);
 FUNC_1(VAR_21->dx, VAR_19 + VAR_5);
 FUNC_1(VAR_21->dy, VAR_19 + VAR_6);
 FUNC_1(VAR_21->width - 1, VAR_19 + VAR_4);
 FUNC_1(VAR_21->height - 1, VAR_19 + VAR_3);

 FUNC_1(0xcc, VAR_19 + VAR_11);
 FUNC_1(1, VAR_19 + VAR_1);
 FUNC_1(1, VAR_19 + VAR_10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int width; unsigned int height; } ;
struct vc_data {unsigned int vc_cols; unsigned int vc_rows; TYPE_1__ vc_font; } ;
struct TYPE_5__ {unsigned int xres; unsigned int yres; unsigned int yres_virtual; scalar_t__ yoffset; scalar_t__ xoffset; } ;
struct fb_info {TYPE_3__* fbops; TYPE_2__ var; } ;
struct fb_fillrect {int color; unsigned int width; unsigned int height; scalar_t__ dy; scalar_t__ dx; int rop; } ;
struct TYPE_6__ {int (* fb_fillrect ) (struct fb_info*,struct fb_fillrect*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct fb_info*,struct fb_fillrect*) ;
 int FUNC_1 (struct fb_info*,struct fb_fillrect*) ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_1, struct fb_info *VAR_2,
         int VAR_3, int VAR_4)
{
 unsigned int VAR_5 = VAR_1->vc_font.width;
 unsigned int VAR_6 = VAR_1->vc_font.height;
 unsigned int VAR_7 = VAR_2->var.xres - (VAR_1->vc_cols*VAR_5);
 unsigned int VAR_8 = VAR_2->var.yres - (VAR_1->vc_rows*VAR_6);
 unsigned int VAR_9 = VAR_2->var.xres - VAR_7;
 unsigned int VAR_10 = VAR_2->var.yres - VAR_8;
 struct fb_fillrect VAR_11;

 VAR_11.color = VAR_3;
 VAR_11.rop = VAR_0;

 if (VAR_7 && !VAR_4) {
  VAR_11.dx = VAR_2->var.xoffset + VAR_9;
  VAR_11.dy = 0;
  VAR_11.width = VAR_7;
  VAR_11.height = VAR_2->var.yres_virtual;
  VAR_2->fbops->fb_fillrect(VAR_2, &VAR_11);
 }

 if (VAR_8) {
  VAR_11.dx = VAR_2->var.xoffset;
  VAR_11.dy = VAR_2->var.yoffset + VAR_10;
  VAR_11.width = VAR_9;
  VAR_11.height = VAR_8;
  VAR_2->fbops->fb_fillrect(VAR_2, &VAR_11);
 }
}

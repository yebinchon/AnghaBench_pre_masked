
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int yres_virtual; int xres_virtual; } ;
struct fb_info {TYPE_1__ var; } ;
struct fb_fillrect {int rop; int color; int height; int width; int dy; int dx; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_info*,struct fb_fillrect const*) ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_1)
{
 const struct fb_fillrect VAR_2 = {
  .dx = 0,
  .dy = 0,
  .width = VAR_1->var.xres_virtual,
  .height = VAR_1->var.yres_virtual,
  .color = 0,
  .rop = VAR_0,
 };

 FUNC_0(VAR_1, &VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeonfb_info {scalar_t__ asleep; } ;
struct fb_var_screeninfo {int xoffset; int yoffset; } ;
struct TYPE_4__ {scalar_t__ xres; scalar_t__ xres_virtual; scalar_t__ yres; scalar_t__ yres_virtual; int bits_per_pixel; } ;
struct TYPE_3__ {int line_length; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; struct radeonfb_info* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2 (struct fb_var_screeninfo *VAR_2,
                                 struct fb_info *VAR_3)
{
        struct radeonfb_info *VAR_4 = VAR_3->par;

 if ((VAR_2->xoffset + VAR_3->var.xres > VAR_3->var.xres_virtual)
     || (VAR_2->yoffset + VAR_3->var.yres > VAR_3->var.yres_virtual))
  return -VAR_1;

        if (VAR_4->asleep)
         return 0;

 FUNC_1(2);
 FUNC_0(VAR_0, (VAR_2->yoffset * VAR_3->fix.line_length +
        VAR_2->xoffset * VAR_3->var.bits_per_pixel / 8) & ~7);
        return 0;
}

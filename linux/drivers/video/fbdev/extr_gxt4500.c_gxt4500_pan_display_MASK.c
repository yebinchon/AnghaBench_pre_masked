
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gxt4500_par {int dummy; } ;
struct fb_var_screeninfo {int xoffset; int yoffset; } ;
struct TYPE_2__ {scalar_t__ xres; scalar_t__ xres_virtual; scalar_t__ yres; scalar_t__ yres_virtual; } ;
struct fb_info {TYPE_1__ var; struct gxt4500_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gxt4500_par*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_2,
          struct fb_info *VAR_3)
{
 struct gxt4500_par *VAR_4 = VAR_3->par;

 if (VAR_2->xoffset & 7)
  return -VAR_0;
 if (VAR_2->xoffset + VAR_3->var.xres > VAR_3->var.xres_virtual ||
     VAR_2->yoffset + VAR_3->var.yres > VAR_3->var.yres_virtual)
  return -VAR_0;

 FUNC_0(VAR_4, VAR_1, (VAR_2->xoffset << 16) | VAR_2->yoffset);
 return 0;
}

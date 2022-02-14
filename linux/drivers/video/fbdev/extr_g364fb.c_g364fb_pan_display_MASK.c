
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_var_screeninfo {unsigned int yoffset; scalar_t__ xoffset; } ;
struct TYPE_2__ {scalar_t__ yres; scalar_t__ yres_virtual; unsigned int xres; } ;
struct fb_info {TYPE_1__ var; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct fb_var_screeninfo *VAR_2,
         struct fb_info *VAR_3)
{
 if (VAR_2->xoffset ||
     VAR_2->yoffset + VAR_3->var.yres > VAR_3->var.yres_virtual)
  return -VAR_0;

 *(unsigned int *) VAR_1 = VAR_2->yoffset * VAR_3->var.xres;
 return 0;
}

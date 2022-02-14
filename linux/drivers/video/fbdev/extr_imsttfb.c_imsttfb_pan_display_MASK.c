
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_var_screeninfo {scalar_t__ xoffset; scalar_t__ yoffset; } ;
struct TYPE_2__ {scalar_t__ xres; scalar_t__ xres_virtual; scalar_t__ yres; scalar_t__ yres_virtual; scalar_t__ xoffset; scalar_t__ yoffset; } ;
struct fb_info {TYPE_1__ var; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_var_screeninfo*,struct fb_info*) ;

__attribute__((used)) static int
FUNC_1(struct fb_var_screeninfo *VAR_1, struct fb_info *VAR_2)
{
 if (VAR_1->xoffset + VAR_2->var.xres > VAR_2->var.xres_virtual
     || VAR_1->yoffset + VAR_2->var.yres > VAR_2->var.yres_virtual)
  return -VAR_0;

 VAR_2->var.xoffset = VAR_1->xoffset;
 VAR_2->var.yoffset = VAR_1->yoffset;
 FUNC_0(VAR_1, VAR_2);
 return 0;
}

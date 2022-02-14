
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {scalar_t__ xres; scalar_t__ yres; scalar_t__ bits_per_pixel; scalar_t__ xres_virtual; scalar_t__ yres_virtual; } ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_0(struct fb_var_screeninfo *VAR_6, struct fb_info *VAR_7)
{
 if (VAR_6->xres < VAR_2 || VAR_6->yres < VAR_1 ||
     VAR_6->xres > VAR_5 || VAR_6->yres > VAR_4 ||
     VAR_6->bits_per_pixel != VAR_3)
  return -VAR_0;

 VAR_6->xres_virtual = VAR_6->xres;
 VAR_6->yres_virtual = VAR_6->yres;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int xres; int yres; int xres_virtual; int yres_virtual; int bits_per_pixel; int vmode; scalar_t__ nonstd; } ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct fb_var_screeninfo *VAR_3,
        struct fb_info *VAR_4)
{
 if (VAR_3->xres > 800 || VAR_3->yres > 600
     || VAR_3->xres_virtual > 800 || VAR_3->yres_virtual > 600
     || (VAR_3->bits_per_pixel != 8 && VAR_3->bits_per_pixel != 16)
     || VAR_3->nonstd
     || (VAR_3->vmode & VAR_1) != VAR_2)
  return -VAR_0;

 VAR_3->xres = VAR_3->xres_virtual = 800;
 VAR_3->yres = VAR_3->yres_virtual = 600;

 return 0;
}

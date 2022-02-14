
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmpfb_info {int fb_size; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xoffset; int xres; int xres_virtual; int yoffset; int yres; int yres_virtual; } ;
struct fb_info {struct mmpfb_info* par; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct fb_var_screeninfo *VAR_1,
  struct fb_info *VAR_2)
{
 struct mmpfb_info *VAR_3 = VAR_2->par;

 if (VAR_1->bits_per_pixel == 8)
  return -VAR_0;



 if (VAR_1->xoffset + VAR_1->xres > VAR_1->xres_virtual)
  return -VAR_0;
 if (VAR_1->yoffset + VAR_1->yres > VAR_1->yres_virtual)
  return -VAR_0;




 if (VAR_1->xres_virtual * VAR_1->yres_virtual *
   (VAR_1->bits_per_pixel >> 3) > VAR_3->fb_size)
  return -VAR_0;

 return 0;
}

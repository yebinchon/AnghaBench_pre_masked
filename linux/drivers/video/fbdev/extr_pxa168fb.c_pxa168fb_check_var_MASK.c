
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxa168fb_info {int pix_fmt; } ;
struct fb_var_screeninfo {int xoffset; int xres; int xres_virtual; int yoffset; int yres; int yres_virtual; int right_margin; int hsync_len; int left_margin; int lower_margin; int vsync_len; int upper_margin; int bits_per_pixel; } ;
struct TYPE_2__ {int smem_len; } ;
struct fb_info {TYPE_1__ fix; struct pxa168fb_info* par; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_var_screeninfo*) ;
 int FUNC_1 (struct fb_var_screeninfo*,int) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_1,
         struct fb_info *VAR_2)
{
 struct pxa168fb_info *VAR_3 = VAR_2->par;
 int VAR_4;




 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 < 0)
  return VAR_4;
 FUNC_1(VAR_1, VAR_4);
 VAR_3->pix_fmt = VAR_4;




 if (VAR_1->xoffset + VAR_1->xres > VAR_1->xres_virtual)
  return -VAR_0;
 if (VAR_1->yoffset + VAR_1->yres > VAR_1->yres_virtual)
  return -VAR_0;
 if (VAR_1->xres + VAR_1->right_margin +
     VAR_1->hsync_len + VAR_1->left_margin > 2048)
  return -VAR_0;
 if (VAR_1->yres + VAR_1->lower_margin +
     VAR_1->vsync_len + VAR_1->upper_margin > 2048)
  return -VAR_0;




 if (VAR_1->xres_virtual * VAR_1->yres_virtual *
     (VAR_1->bits_per_pixel >> 3) > VAR_2->fix.smem_len)
  return -VAR_0;

 return 0;
}

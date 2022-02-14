
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fb_var_screeninfo {int xres; int yres; int xres_virtual; int yres_virtual; int bits_per_pixel; int left_margin; int right_margin; int hsync_len; int vmode; int upper_margin; int vsync_len; int lower_margin; scalar_t__ accel_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int*) ;

__attribute__((used)) static void FUNC_2(struct fb_var_screeninfo *VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4, VAR_5;





 VAR_2 = VAR_1->xres;
 VAR_3 = VAR_1->yres;
 VAR_4 = VAR_1->xres_virtual;
 VAR_5 = VAR_1->yres_virtual;

 VAR_1->bits_per_pixel += 7;
 VAR_1->bits_per_pixel &= ~7;

 if (VAR_1->bits_per_pixel < 8)
  VAR_1->bits_per_pixel = 8;
 if (VAR_1->bits_per_pixel > 32)
  VAR_1->bits_per_pixel = 32;

 FUNC_0(&VAR_2);
 if (VAR_2 < 40)
  VAR_2 = 40;
 if (VAR_2 > 2048)
  VAR_2 = 2048;
 VAR_2 = (VAR_2 + 7) & ~7;

 if (VAR_4 < VAR_2)
  VAR_4 = VAR_2;

 FUNC_1(&VAR_2, &VAR_3);
 if (VAR_3 < 1)
  VAR_3 = 1;
 if (VAR_3 >= 2048)
  VAR_3 = 2048;

 if (VAR_5 < VAR_3)
  VAR_5 = VAR_3;

 if (VAR_1->bits_per_pixel == 32)
  VAR_1->accel_flags = 0;


 VAR_1->left_margin = (VAR_1->left_margin + 4) & ~7;
 VAR_1->right_margin = (VAR_1->right_margin + 4) & ~7;
 VAR_1->hsync_len = (VAR_1->hsync_len + 4) & ~7;

 if (VAR_1->vmode & VAR_0) {
  if (!((VAR_3 + VAR_1->upper_margin + VAR_1->vsync_len +
         VAR_1->lower_margin) & 1))
   VAR_1->upper_margin++;
 }

 VAR_1->xres = VAR_2;
 VAR_1->yres = VAR_3;
 VAR_1->xres_virtual = VAR_4;
 VAR_1->yres_virtual = VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {unsigned int yres_virtual; unsigned int yres; int bits_per_pixel; int yoffset; int xoffset; } ;
struct fb_fix_screeninfo {unsigned int line_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static unsigned FUNC_0(const struct fb_var_screeninfo *VAR_4,
  const struct fb_fix_screeninfo *VAR_5, int VAR_6)
{
 unsigned VAR_7;

 if (VAR_6 == VAR_2)
  VAR_7 = (VAR_4->yres_virtual - VAR_4->yres) *
   VAR_5->line_length;
 else if (VAR_6 == VAR_1)
  VAR_7 = (VAR_4->yres_virtual - VAR_4->yres) *
   (VAR_4->bits_per_pixel >> 3);
 else
  VAR_7 = 0;

 if (VAR_6 == VAR_3)
  VAR_7 += VAR_4->yoffset * VAR_5->line_length +
   VAR_4->xoffset * (VAR_4->bits_per_pixel >> 3);
 else if (VAR_6 == VAR_2)
  VAR_7 -= VAR_4->yoffset * VAR_5->line_length +
   VAR_4->xoffset * (VAR_4->bits_per_pixel >> 3);
 else if (VAR_6 == VAR_1)
  VAR_7 -= VAR_4->xoffset * VAR_5->line_length +
   VAR_4->yoffset * (VAR_4->bits_per_pixel >> 3);
 else if (VAR_6 == VAR_0)
  VAR_7 += VAR_4->xoffset * VAR_5->line_length +
   VAR_4->yoffset * (VAR_4->bits_per_pixel >> 3);

 return VAR_7;
}

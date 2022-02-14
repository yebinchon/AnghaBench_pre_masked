
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int yoffset; int xoffset; int bits_per_pixel; } ;
struct fb_fix_screeninfo {int line_length; } ;



__attribute__((used)) static unsigned FUNC_0(const struct fb_var_screeninfo *VAR_0,
  const struct fb_fix_screeninfo *VAR_1, int VAR_2)
{
 unsigned VAR_3;

 VAR_3 = VAR_0->yoffset * VAR_1->line_length +
  VAR_0->xoffset * (VAR_0->bits_per_pixel >> 3);

 return VAR_3;
}

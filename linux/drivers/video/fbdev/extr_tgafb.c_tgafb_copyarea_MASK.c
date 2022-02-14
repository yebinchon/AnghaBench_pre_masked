
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long xres_virtual; unsigned long yres_virtual; unsigned long bits_per_pixel; } ;
struct TYPE_3__ {unsigned long line_length; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; } ;
struct fb_copyarea {unsigned long dx; unsigned long dy; unsigned long width; unsigned long height; unsigned long sx; unsigned long sy; } ;


 int FUNC_0 (struct fb_info*,struct fb_copyarea const*) ;
 int FUNC_1 (struct fb_info*,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,struct fb_copyarea const*) ;
 int FUNC_2 (struct fb_info*,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_3 (struct fb_info*,unsigned long,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct fb_info *VAR_0, const struct fb_copyarea *VAR_1)
{
 unsigned long VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned long VAR_10, VAR_11;

 VAR_2 = VAR_1->dx;
 VAR_3 = VAR_1->dy;
 VAR_4 = VAR_1->width;
 VAR_5 = VAR_1->height;
 VAR_6 = VAR_1->sx;
 VAR_7 = VAR_1->sy;
 VAR_8 = VAR_0->var.xres_virtual;
 VAR_9 = VAR_0->var.yres_virtual;
 VAR_10 = VAR_0->fix.line_length;


 if (VAR_2 > VAR_8 || VAR_6 > VAR_8 || VAR_3 > VAR_9 || VAR_7 > VAR_9)
  return;


 if (VAR_2 + VAR_4 > VAR_8)
  VAR_4 = VAR_8 - VAR_2;
 if (VAR_3 + VAR_5 > VAR_9)
  VAR_5 = VAR_9 - VAR_3;


 if (VAR_6 + VAR_4 > VAR_8 || VAR_7 + VAR_5 > VAR_9)
  return;

 VAR_11 = VAR_0->var.bits_per_pixel;


 if (!(VAR_10 & 63) && VAR_4 * (VAR_11 >> 3) == VAR_10) {
  if (VAR_11 == 8)
   FUNC_3(VAR_0, VAR_3, VAR_7, VAR_5, VAR_4);
  else
   FUNC_2(VAR_0, VAR_3, VAR_7, VAR_5, VAR_4);
 }




 else if (VAR_11 == 32)
  FUNC_0(VAR_0, VAR_1);

 else
  FUNC_1(VAR_0, VAR_2, VAR_3, VAR_6, VAR_7, VAR_5,
         VAR_4, VAR_10, VAR_1);
}

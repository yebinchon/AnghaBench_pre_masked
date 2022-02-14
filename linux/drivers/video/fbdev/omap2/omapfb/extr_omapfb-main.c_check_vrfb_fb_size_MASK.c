
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int bits_per_pixel; int yres_virtual; int xres_virtual; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_1,
  const struct fb_var_screeninfo *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_2->xres_virtual,
  VAR_2->yres_virtual, VAR_2->bits_per_pixel >> 3);

 return VAR_3 > VAR_1 ? -VAR_0 : 0;
}

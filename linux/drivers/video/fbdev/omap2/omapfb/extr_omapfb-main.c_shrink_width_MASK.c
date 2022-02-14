
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {unsigned long xres_virtual; unsigned long yres_virtual; int bits_per_pixel; unsigned long xres; } ;


 int FUNC_0 (char*) ;
 unsigned long VAR_0 ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_1,
  struct fb_var_screeninfo *VAR_2)
{
 FUNC_0("can't fit FB into memory, reducing x\n");
 VAR_2->xres_virtual = VAR_1 / VAR_2->yres_virtual /
  (VAR_2->bits_per_pixel >> 3);

 if (VAR_2->xres_virtual < VAR_0)
  VAR_2->xres_virtual = VAR_0;

 if (VAR_2->xres > VAR_2->xres_virtual)
  VAR_2->xres = VAR_2->xres_virtual;
}

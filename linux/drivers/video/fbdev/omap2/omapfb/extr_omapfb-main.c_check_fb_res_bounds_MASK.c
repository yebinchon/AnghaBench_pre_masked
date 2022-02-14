
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int xres_virtual; int xres; int yres_virtual; int yres; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct fb_var_screeninfo *VAR_3)
{
 int VAR_4 = VAR_1;
 int VAR_5 = 2048;
 int VAR_6 = VAR_2;
 int VAR_7 = 2048;


 if (VAR_3->xres_virtual == 0)
  VAR_3->xres_virtual = VAR_3->xres;

 if (VAR_3->yres_virtual == 0)
  VAR_3->yres_virtual = VAR_3->yres;

 if (VAR_3->xres_virtual < VAR_4 || VAR_3->yres_virtual < VAR_6)
  return -VAR_0;

 if (VAR_3->xres < VAR_4)
  VAR_3->xres = VAR_4;
 if (VAR_3->yres < VAR_6)
  VAR_3->yres = VAR_6;
 if (VAR_3->xres > VAR_5)
  VAR_3->xres = VAR_5;
 if (VAR_3->yres > VAR_7)
  VAR_3->yres = VAR_7;

 if (VAR_3->xres > VAR_3->xres_virtual)
  VAR_3->xres = VAR_3->xres_virtual;
 if (VAR_3->yres > VAR_3->yres_virtual)
  VAR_3->yres = VAR_3->yres_virtual;

 return 0;
}

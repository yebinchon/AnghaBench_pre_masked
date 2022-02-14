
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int bits_per_pixel; int yres; int xres_virtual; int xres; } ;
struct atafb_par {int dummy; } ;


 struct fb_var_screeninfo* VAR_0 ;
 int FUNC_0 (struct fb_var_screeninfo*,struct atafb_par*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(void)
{
 struct fb_var_screeninfo *VAR_5 = &VAR_0[0];
 struct atafb_par VAR_6;

 VAR_5->xres = VAR_2;
 VAR_5->xres_virtual = VAR_3;
 VAR_5->yres = VAR_4;
 VAR_5->bits_per_pixel = VAR_1;
 FUNC_0(VAR_5, &VAR_6);
 return 1;
}

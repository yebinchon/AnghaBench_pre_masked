
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int grayscale; int bits_per_pixel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(const struct fb_var_screeninfo *VAR_3)
{
 if (VAR_3->grayscale > 1)
  return VAR_3->grayscale;

 switch (VAR_3->bits_per_pixel) {
 case 16:
  return VAR_2;
 case 24:
  return VAR_0;
 case 32:
  return VAR_1;
 default:
  return 0;
 }
}

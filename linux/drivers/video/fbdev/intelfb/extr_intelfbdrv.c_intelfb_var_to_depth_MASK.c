
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; TYPE_1__ green; } ;


 int FUNC_0 (char*,int,int) ;

__inline__ int FUNC_1(const struct fb_var_screeninfo *VAR_0)
{
 FUNC_0("intelfb_var_to_depth: bpp: %d, green.length is %d\n",
  VAR_0->bits_per_pixel, VAR_0->green.length);

 switch (VAR_0->bits_per_pixel) {
 case 16:
  return (VAR_0->green.length == 6) ? 16 : 15;
 case 32:
  return 24;
 default:
  return VAR_0->bits_per_pixel;
 }
}

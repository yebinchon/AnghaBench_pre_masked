
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int length; } ;
struct TYPE_5__ {int length; } ;
struct TYPE_4__ {int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;



__attribute__((used)) static inline int FUNC_0(const struct fb_var_screeninfo *VAR_0)
{
 if (VAR_0->bits_per_pixel == 16)
  return VAR_0->red.length + VAR_0->green.length
   + VAR_0->blue.length;

 return VAR_0->bits_per_pixel;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int xres; int bits_per_pixel; } ;



__attribute__((used)) static inline int FUNC_0(struct fb_var_screeninfo *VAR_0)
{
 return VAR_0->xres * VAR_0->bits_per_pixel / 8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_videomode {int yres; int xres; } ;
struct fb_var_screeninfo {int yres; int xres; } ;



__attribute__((used)) static int FUNC_0(const struct fb_var_screeninfo *VAR_0,
    const struct fb_videomode *VAR_1)
{
 int VAR_2 = 0;

 VAR_2 = VAR_1->yres - VAR_0->yres;
 VAR_2 += (VAR_1->xres - VAR_0->xres)/2;
 return VAR_2;
}

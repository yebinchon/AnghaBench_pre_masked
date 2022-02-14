
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int grayscale; } ;



__attribute__((used)) static int FUNC_0(const struct fb_var_screeninfo *VAR_0)
{
 return VAR_0->grayscale > 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int bits_per_pixel; void* yres; void* yres_virtual; void* xres; void* xres_virtual; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct fb_var_screeninfo*,int ,int) ;
 void* FUNC_1 (struct device_node*,char*,int) ;

void FUNC_2(struct fb_var_screeninfo *VAR_0, struct device_node *VAR_1,
       int VAR_2)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->xres = FUNC_1(VAR_1, "width", 1152);
 VAR_0->yres = FUNC_1(VAR_1, "height", 900);
 VAR_0->xres_virtual = VAR_0->xres;
 VAR_0->yres_virtual = VAR_0->yres;
 VAR_0->bits_per_pixel = VAR_2;
}

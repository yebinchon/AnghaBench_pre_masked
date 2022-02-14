
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxafb_mode_info {unsigned int xres; unsigned int yres; scalar_t__ bpp; } ;
struct pxafb_mach_info {unsigned int num_modes; struct pxafb_mode_info* modes; } ;
struct fb_var_screeninfo {unsigned int xres; unsigned int yres; scalar_t__ bits_per_pixel; } ;



__attribute__((used)) static struct pxafb_mode_info *FUNC_0(struct pxafb_mach_info *VAR_0,
          struct fb_var_screeninfo *VAR_1)
{
 struct pxafb_mode_info *VAR_2 = ((void*)0);
 struct pxafb_mode_info *VAR_3 = VAR_0->modes;
 unsigned int VAR_4 = 0xffffffff, VAR_5 = 0xffffffff;
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0->num_modes; VAR_6++) {
  if (VAR_3[VAR_6].xres >= VAR_1->xres &&
      VAR_3[VAR_6].yres >= VAR_1->yres &&
      VAR_3[VAR_6].xres < VAR_4 &&
      VAR_3[VAR_6].yres < VAR_5 &&
      VAR_3[VAR_6].bpp >= VAR_1->bits_per_pixel) {
   VAR_4 = VAR_3[VAR_6].xres;
   VAR_5 = VAR_3[VAR_6].yres;
   VAR_2 = &VAR_3[VAR_6];
  }
 }

 return VAR_2;
}

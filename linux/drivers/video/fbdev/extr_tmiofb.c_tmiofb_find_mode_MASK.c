
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_fb_data {int num_modes; struct fb_videomode* modes; } ;
struct fb_videomode {scalar_t__ xres; scalar_t__ yres; } ;
struct fb_var_screeninfo {scalar_t__ xres; scalar_t__ yres; } ;
struct fb_info {int device; } ;


 struct tmio_fb_data* FUNC_0 (int ) ;

__attribute__((used)) static struct fb_videomode *
FUNC_1(struct fb_info *VAR_0, struct fb_var_screeninfo *VAR_1)
{
 struct tmio_fb_data *VAR_2 = FUNC_0(VAR_0->device);
 struct fb_videomode *VAR_3 = ((void*)0);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_modes; VAR_4++) {
  struct fb_videomode *VAR_5 = VAR_2->modes + VAR_4;

  if (VAR_5->xres >= VAR_1->xres && VAR_5->yres >= VAR_1->yres
    && (!VAR_3 || (VAR_5->xres < VAR_3->xres
        && VAR_5->yres < VAR_3->yres)))
   VAR_3 = VAR_5;
 }

 return VAR_3;
}

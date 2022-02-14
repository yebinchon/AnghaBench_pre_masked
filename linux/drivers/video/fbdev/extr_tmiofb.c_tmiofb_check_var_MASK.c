
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tmio_fb_data {int width; int height; } ;
struct fb_videomode {int xres; } ;
struct TYPE_8__ {scalar_t__ length; scalar_t__ offset; } ;
struct TYPE_7__ {int length; scalar_t__ offset; } ;
struct TYPE_6__ {int offset; int length; } ;
struct TYPE_5__ {int offset; int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres_virtual; int yres_virtual; int yres; scalar_t__ rotate; int width; int height; scalar_t__ nonstd; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; scalar_t__ grayscale; scalar_t__ yoffset; scalar_t__ xoffset; } ;
struct fb_info {int screen_size; int device; } ;


 int VAR_0 ;
 struct tmio_fb_data* FUNC_0 (int ) ;
 int FUNC_1 (struct fb_var_screeninfo*,struct fb_videomode*) ;
 struct fb_videomode* FUNC_2 (struct fb_info*,struct fb_var_screeninfo*) ;

__attribute__((used)) static int FUNC_3(struct fb_var_screeninfo *VAR_1, struct fb_info *VAR_2)
{

 struct fb_videomode *VAR_3;
 struct tmio_fb_data *VAR_4 = FUNC_0(VAR_2->device);

 VAR_3 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_3 || VAR_1->bits_per_pixel > 16)
  return -VAR_0;

 FUNC_1(VAR_1, VAR_3);

 VAR_1->xres_virtual = VAR_3->xres;
 VAR_1->yres_virtual = VAR_2->screen_size / (VAR_3->xres * 2);

 if (VAR_1->yres_virtual < VAR_1->yres)
  return -VAR_0;

 VAR_1->xoffset = 0;
 VAR_1->yoffset = 0;
 VAR_1->bits_per_pixel = 16;
 VAR_1->grayscale = 0;
 VAR_1->red.offset = 11;
 VAR_1->red.length = 5;
 VAR_1->green.offset = 5;
 VAR_1->green.length = 6;
 VAR_1->blue.offset = 0;
 VAR_1->blue.length = 5;
 VAR_1->transp.offset = 0;
 VAR_1->transp.length = 0;
 VAR_1->nonstd = 0;
 VAR_1->height = VAR_4->height;
 VAR_1->width = VAR_4->width;
 VAR_1->rotate = 0;
 return 0;
}

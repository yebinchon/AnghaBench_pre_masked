
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mode_map {int vmode; struct fb_videomode* mode; } ;
struct fb_videomode {int vmode; int sync; int vsync_len; int hsync_len; int lower_margin; int upper_margin; int right_margin; int left_margin; int pixclock; int yres; int xres; } ;
struct TYPE_8__ {int offset; int length; } ;
struct TYPE_7__ {int length; int offset; } ;
struct TYPE_6__ {int offset; int length; } ;
struct TYPE_5__ {int offset; int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; int height; int width; int vmode; int sync; int vsync_len; int hsync_len; int lower_margin; int upper_margin; int right_margin; int left_margin; int pixclock; int yres_virtual; int xres_virtual; int yres; int xres; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;





 int VAR_0 ;
 struct mode_map* VAR_1 ;
 int FUNC_0 (struct fb_var_screeninfo*,int ,int) ;

int FUNC_1(int VAR_2, int VAR_3, struct fb_var_screeninfo *VAR_4)
{
    const struct fb_videomode *VAR_5 = ((void*)0);
    const struct mode_map *VAR_6;

    for (VAR_6 = VAR_1; VAR_6->vmode != -1; VAR_6++)
 if (VAR_6->vmode == VAR_2) {
     VAR_5 = VAR_6->mode;
     break;
 }
    if (!VAR_5)
 return -VAR_0;

    FUNC_0(VAR_4, 0, sizeof(struct fb_var_screeninfo));
    switch (VAR_3) {
 case 128:
     VAR_4->bits_per_pixel = 8;
     VAR_4->red.offset = 0;
     VAR_4->red.length = 8;
     VAR_4->green.offset = 0;
     VAR_4->green.length = 8;
     VAR_4->blue.offset = 0;
     VAR_4->blue.length = 8;
     break;

 case 130:
     VAR_4->bits_per_pixel = 16;
     VAR_4->red.offset = 10;
     VAR_4->red.length = 5;
     VAR_4->green.offset = 5;
     VAR_4->green.length = 5;
     VAR_4->blue.offset = 0;
     VAR_4->blue.length = 5;
     break;

 case 129:
     VAR_4->bits_per_pixel = 32;
     VAR_4->red.offset = 16;
     VAR_4->red.length = 8;
     VAR_4->green.offset = 8;
     VAR_4->green.length = 8;
     VAR_4->blue.offset = 0;
     VAR_4->blue.length = 8;
     VAR_4->transp.offset = 24;
     VAR_4->transp.length = 8;
     break;

 default:
     return -VAR_0;
    }
    VAR_4->xres = VAR_5->xres;
    VAR_4->yres = VAR_5->yres;
    VAR_4->xres_virtual = VAR_5->xres;
    VAR_4->yres_virtual = VAR_5->yres;
    VAR_4->height = -1;
    VAR_4->width = -1;
    VAR_4->pixclock = VAR_5->pixclock;
    VAR_4->left_margin = VAR_5->left_margin;
    VAR_4->right_margin = VAR_5->right_margin;
    VAR_4->upper_margin = VAR_5->upper_margin;
    VAR_4->lower_margin = VAR_5->lower_margin;
    VAR_4->hsync_len = VAR_5->hsync_len;
    VAR_4->vsync_len = VAR_5->vsync_len;
    VAR_4->sync = VAR_5->sync;
    VAR_4->vmode = VAR_5->vmode;
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxa168fb_info {struct fb_info* info; } ;
struct fb_videomode {int sync; int vsync_len; int hsync_len; int lower_margin; int upper_margin; int right_margin; int left_margin; int pixclock; int yres; int xres; } ;
struct fb_var_screeninfo {int xres_virtual; int yres_virtual; int bits_per_pixel; int rotate; int vmode; int sync; int vsync_len; int hsync_len; int lower_margin; int upper_margin; int right_margin; int left_margin; int pixclock; int accel_flags; scalar_t__ grayscale; int yres; int xres; } ;
struct TYPE_2__ {int smem_len; } ;
struct fb_info {TYPE_1__ fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int) ;
 int FUNC_1 (struct fb_var_screeninfo*,int) ;

__attribute__((used)) static void FUNC_2(struct pxa168fb_info *VAR_3, struct fb_var_screeninfo *VAR_4,
       struct fb_videomode *VAR_5, int VAR_6, int VAR_7)
{
 struct fb_info *VAR_8 = VAR_3->info;

 FUNC_1(VAR_4, VAR_6);

 VAR_4->xres = VAR_5->xres;
 VAR_4->yres = VAR_5->yres;
 VAR_4->xres_virtual = FUNC_0(VAR_4->xres, VAR_4->xres_virtual);
 if (VAR_7)
  VAR_4->yres_virtual = VAR_8->fix.smem_len /
   (VAR_4->xres_virtual * (VAR_4->bits_per_pixel >> 3));
 else
  VAR_4->yres_virtual = FUNC_0(VAR_4->yres, VAR_4->yres_virtual);
 VAR_4->grayscale = 0;
 VAR_4->accel_flags = VAR_0;
 VAR_4->pixclock = VAR_5->pixclock;
 VAR_4->left_margin = VAR_5->left_margin;
 VAR_4->right_margin = VAR_5->right_margin;
 VAR_4->upper_margin = VAR_5->upper_margin;
 VAR_4->lower_margin = VAR_5->lower_margin;
 VAR_4->hsync_len = VAR_5->hsync_len;
 VAR_4->vsync_len = VAR_5->vsync_len;
 VAR_4->sync = VAR_5->sync;
 VAR_4->vmode = VAR_2;
 VAR_4->rotate = VAR_1;
}

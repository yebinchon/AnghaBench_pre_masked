
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct omap_video_timings {int pixelclock; int interlace; void* vsync_level; void* hsync_level; int y_res; int x_res; int vsw; int hsw; int vfp; int vbp; int hfp; int hbp; int sync_pclk_edge; void* de_level; int data_pclk_edge; } ;
struct omap_dss_device {TYPE_1__* driver; } ;
struct fb_var_screeninfo {int sync; int vmode; int bits_per_pixel; int yres; int xres; int vsync_len; int hsync_len; int lower_margin; int upper_margin; int right_margin; int left_margin; int pixclock; struct fb_var_screeninfo* fbops; } ;
struct fb_ops {int sync; int vmode; int bits_per_pixel; int yres; int xres; int vsync_len; int hsync_len; int lower_margin; int upper_margin; int right_margin; int left_margin; int pixclock; struct fb_ops* fbops; } ;
struct fb_info {int sync; int vmode; int bits_per_pixel; int yres; int xres; int vsync_len; int hsync_len; int lower_margin; int upper_margin; int right_margin; int left_margin; int pixclock; struct fb_info* fbops; } ;
struct TYPE_2__ {int (* get_timings ) (struct omap_dss_device*,struct omap_video_timings*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fb_var_screeninfo*,struct fb_var_screeninfo*,char const*,int *,int ,int *,int) ;
 int FUNC_2 (struct fb_var_screeninfo*) ;
 struct fb_var_screeninfo* FUNC_3 (int,int ) ;
 struct omap_video_timings VAR_10 ;
 struct omap_video_timings VAR_11 ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (struct omap_dss_device*,struct omap_video_timings*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_12,
  struct omap_dss_device *VAR_13,
  struct omap_video_timings *VAR_14, u8 *VAR_15)
{
 struct fb_info *VAR_16;
 struct fb_var_screeninfo *VAR_17;
 struct fb_ops *VAR_18;
 int VAR_19;
 *VAR_15 = 0;
 VAR_16 = ((void*)0);
 VAR_17 = ((void*)0);
 VAR_18 = ((void*)0);

 VAR_16 = FUNC_3(sizeof(*VAR_16), VAR_5);
 if (VAR_16 == ((void*)0)) {
  VAR_19 = -VAR_1;
  goto err;
 }

 VAR_17 = FUNC_3(sizeof(*VAR_17), VAR_5);
 if (VAR_17 == ((void*)0)) {
  VAR_19 = -VAR_1;
  goto err;
 }

 VAR_18 = FUNC_3(sizeof(*VAR_18), VAR_5);
 if (VAR_18 == ((void*)0)) {
  VAR_19 = -VAR_1;
  goto err;
 }

 VAR_16->fbops = VAR_18;

 VAR_19 = FUNC_1(VAR_17, VAR_16, VAR_12, ((void*)0), 0, ((void*)0), 24);
 if (VAR_19 == 0) {
  VAR_19 = -VAR_0;
  goto err;
 }

 if (VAR_13->driver->get_timings) {
  VAR_13->driver->get_timings(VAR_13, VAR_14);
 } else {
  VAR_14->data_pclk_edge = VAR_7;
  VAR_14->de_level = VAR_8;
  VAR_14->sync_pclk_edge = VAR_6;
 }

 VAR_14->pixelclock = FUNC_0(VAR_17->pixclock) * 1000;
 VAR_14->hbp = VAR_17->left_margin;
 VAR_14->hfp = VAR_17->right_margin;
 VAR_14->vbp = VAR_17->upper_margin;
 VAR_14->vfp = VAR_17->lower_margin;
 VAR_14->hsw = VAR_17->hsync_len;
 VAR_14->vsw = VAR_17->vsync_len;
 VAR_14->x_res = VAR_17->xres;
 VAR_14->y_res = VAR_17->yres;
 VAR_14->hsync_level = VAR_17->sync & VAR_2 ?
    VAR_8 :
    VAR_9;
 VAR_14->vsync_level = VAR_17->sync & VAR_3 ?
    VAR_8 :
    VAR_9;
 VAR_14->interlace = VAR_17->vmode & VAR_4;

 switch (VAR_17->bits_per_pixel) {
 case 16:
  *VAR_15 = 16;
  break;
 case 24:
 case 32:
 default:
  *VAR_15 = 24;
  break;
 }

 VAR_19 = 0;

err:
 FUNC_2(VAR_16);
 FUNC_2(VAR_17);
 FUNC_2(VAR_18);

 return VAR_19;
}

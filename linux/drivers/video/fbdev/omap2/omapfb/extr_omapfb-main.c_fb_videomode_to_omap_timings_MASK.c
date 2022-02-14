
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_video_timings {int pixelclock; int interlace; void* vsync_level; void* hsync_level; int vbp; int vfp; int vsw; int hbp; int hfp; int hsw; int y_res; int x_res; int sync_pclk_edge; void* de_level; int data_pclk_edge; } ;
struct omap_dss_device {TYPE_1__* driver; } ;
struct fb_videomode {int sync; int vmode; int upper_margin; int lower_margin; int vsync_len; int left_margin; int right_margin; int hsync_len; int pixclock; int yres; int xres; } ;
struct TYPE_2__ {int (* get_timings ) (struct omap_dss_device*,struct omap_video_timings*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct omap_dss_device*,struct omap_video_timings*) ;

__attribute__((used)) static void FUNC_2(struct fb_videomode *VAR_7,
  struct omap_dss_device *VAR_8,
  struct omap_video_timings *VAR_9)
{
 if (VAR_8->driver->get_timings) {
  VAR_8->driver->get_timings(VAR_8, VAR_9);
 } else {
  VAR_9->data_pclk_edge = VAR_4;
  VAR_9->de_level = VAR_5;
  VAR_9->sync_pclk_edge = VAR_3;
 }

 VAR_9->x_res = VAR_7->xres;
 VAR_9->y_res = VAR_7->yres;
 VAR_9->pixelclock = FUNC_0(VAR_7->pixclock) * 1000;
 VAR_9->hsw = VAR_7->hsync_len;
 VAR_9->hfp = VAR_7->right_margin;
 VAR_9->hbp = VAR_7->left_margin;
 VAR_9->vsw = VAR_7->vsync_len;
 VAR_9->vfp = VAR_7->lower_margin;
 VAR_9->vbp = VAR_7->upper_margin;
 VAR_9->hsync_level = VAR_7->sync & VAR_0 ?
    VAR_5 :
    VAR_6;
 VAR_9->vsync_level = VAR_7->sync & VAR_1 ?
    VAR_5 :
    VAR_6;
 VAR_9->interlace = VAR_7->vmode & VAR_2;
}

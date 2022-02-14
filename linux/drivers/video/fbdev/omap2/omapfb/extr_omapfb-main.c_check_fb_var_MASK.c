
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct omapfb_info {int num_overlays; TYPE_2__* region; TYPE_1__** overlays; int id; } ;
struct omap_video_timings {int pixelclock; scalar_t__ hsync_level; scalar_t__ vsync_level; scalar_t__ interlace; scalar_t__ vsw; scalar_t__ hsw; scalar_t__ vfp; scalar_t__ vbp; scalar_t__ hfp; scalar_t__ hbp; } ;
struct omap_dss_device {TYPE_3__* driver; } ;
struct fb_var_screeninfo {int rotate; scalar_t__ xres; scalar_t__ xoffset; scalar_t__ xres_virtual; scalar_t__ yres; scalar_t__ yoffset; scalar_t__ yres_virtual; int width; int height; void* vmode; int sync; scalar_t__ vsync_len; scalar_t__ hsync_len; scalar_t__ lower_margin; scalar_t__ upper_margin; scalar_t__ right_margin; scalar_t__ left_margin; scalar_t__ pixclock; scalar_t__ grayscale; } ;
struct fb_info {int dummy; } ;
typedef enum omap_color_mode { ____Placeholder_omap_color_mode } omap_color_mode ;
struct TYPE_6__ {int (* get_timings ) (struct omap_dss_device*,struct omap_video_timings*) ;int (* get_dimensions ) (struct omap_dss_device*,int *,int *) ;} ;
struct TYPE_5__ {scalar_t__ size; int lock_count; } ;
struct TYPE_4__ {int supported_modes; } ;


 int FUNC_0 (char*,...) ;
 void* FUNC_1 (int ,int) ;
 int VAR_0 ;
 struct omapfb_info* FUNC_2 (struct fb_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct fb_var_screeninfo*) ;
 scalar_t__ FUNC_7 (struct omapfb_info*,struct fb_var_screeninfo*) ;
 struct omap_dss_device* FUNC_8 (struct fb_info*) ;
 int FUNC_9 (struct fb_var_screeninfo*,int*) ;
 int FUNC_10 (struct omap_dss_device*,int *,int *) ;
 int FUNC_11 (struct omap_dss_device*,struct omap_video_timings*) ;

int FUNC_12(struct fb_info *VAR_6, struct fb_var_screeninfo *VAR_7)
{
 struct omapfb_info *VAR_8 = FUNC_2(VAR_6);
 struct omap_dss_device *VAR_9 = FUNC_8(VAR_6);
 enum omap_color_mode VAR_10 = 0;
 int VAR_11;
 int VAR_12;

 FUNC_0("check_fb_var %d\n", VAR_8->id);

 FUNC_4(!FUNC_5(&VAR_8->region->lock_count));

 VAR_12 = FUNC_9(VAR_7, &VAR_10);
 if (VAR_12) {
  FUNC_0("cannot convert var to omap dss mode\n");
  return VAR_12;
 }

 for (VAR_11 = 0; VAR_11 < VAR_8->num_overlays; ++VAR_11) {
  if ((VAR_8->overlays[VAR_11]->supported_modes & VAR_10) == 0) {
   FUNC_0("invalid mode\n");
   return -VAR_0;
  }
 }

 if (VAR_7->rotate > 3)
  return -VAR_0;

 if (FUNC_6(VAR_7))
  return -VAR_0;


 if (VAR_8->region->size != 0 && FUNC_7(VAR_8, VAR_7))
  return -VAR_0;

 if (VAR_7->xres + VAR_7->xoffset > VAR_7->xres_virtual)
  VAR_7->xoffset = VAR_7->xres_virtual - VAR_7->xres;
 if (VAR_7->yres + VAR_7->yoffset > VAR_7->yres_virtual)
  VAR_7->yoffset = VAR_7->yres_virtual - VAR_7->yres;

 FUNC_0("xres = %d, yres = %d, vxres = %d, vyres = %d\n",
   VAR_7->xres, VAR_7->yres,
   VAR_7->xres_virtual, VAR_7->yres_virtual);

 if (VAR_9 && VAR_9->driver->get_dimensions) {
  u32 VAR_13, VAR_14;
  VAR_9->driver->get_dimensions(VAR_9, &VAR_13, &VAR_14);
  VAR_7->width = FUNC_1(VAR_13, 1000);
  VAR_7->height = FUNC_1(VAR_14, 1000);
 } else {
  VAR_7->height = -1;
  VAR_7->width = -1;
 }

 VAR_7->grayscale = 0;

 if (VAR_9 && VAR_9->driver->get_timings) {
  struct omap_video_timings VAR_15;
  VAR_9->driver->get_timings(VAR_9, &VAR_15);


  VAR_7->pixclock = VAR_15.pixelclock != 0 ?
   FUNC_3(VAR_15.pixelclock / 1000) :
   0;
  VAR_7->left_margin = VAR_15.hbp;
  VAR_7->right_margin = VAR_15.hfp;
  VAR_7->upper_margin = VAR_15.vbp;
  VAR_7->lower_margin = VAR_15.vfp;
  VAR_7->hsync_len = VAR_15.hsw;
  VAR_7->vsync_len = VAR_15.vsw;
  VAR_7->sync |= VAR_15.hsync_level == VAR_5 ?
    VAR_1 : 0;
  VAR_7->sync |= VAR_15.vsync_level == VAR_5 ?
    VAR_2 : 0;
  VAR_7->vmode = VAR_15.interlace ?
    VAR_3 : VAR_4;
 } else {
  VAR_7->pixclock = 0;
  VAR_7->left_margin = 0;
  VAR_7->right_margin = 0;
  VAR_7->upper_margin = 0;
  VAR_7->lower_margin = 0;
  VAR_7->hsync_len = 0;
  VAR_7->vsync_len = 0;
  VAR_7->sync = 0;
  VAR_7->vmode = VAR_4;
 }

 return 0;
}

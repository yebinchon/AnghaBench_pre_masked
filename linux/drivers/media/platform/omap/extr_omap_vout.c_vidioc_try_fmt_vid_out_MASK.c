
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int pix; } ;
struct v4l2_format {TYPE_4__ fmt; } ;
struct omapvideo_info {struct omap_overlay** overlays; } ;
struct TYPE_6__ {int width; int height; } ;
struct TYPE_7__ {TYPE_2__ fmt; } ;
struct omap_vout_device {TYPE_3__ fbuf; struct omapvideo_info vid_info; } ;
struct omap_video_timings {int x_res; int y_res; } ;
struct omap_overlay {struct omap_dss_device* (* get_device ) (struct omap_overlay*) ;} ;
struct TYPE_5__ {struct omap_video_timings timings; } ;
struct omap_dss_device {TYPE_1__ panel; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct omap_dss_device* FUNC_1 (struct omap_overlay*) ;
 struct omap_vout_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
   struct v4l2_format *VAR_3)
{
 struct omap_overlay *VAR_4;
 struct omapvideo_info *VAR_5;
 struct omap_video_timings *VAR_6;
 struct omap_vout_device *VAR_7 = FUNC_2(VAR_1);
 struct omap_dss_device *VAR_8;

 VAR_5 = &VAR_7->vid_info;
 VAR_4 = VAR_5->overlays[0];

 VAR_8 = VAR_4->get_device(VAR_4);

 if (!VAR_8)
  return -VAR_0;

 VAR_6 = &VAR_8->panel.timings;

 VAR_7->fbuf.fmt.height = VAR_6->y_res;
 VAR_7->fbuf.fmt.width = VAR_6->x_res;

 FUNC_0(&VAR_3->fmt.pix);
 return 0;
}

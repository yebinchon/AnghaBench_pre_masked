
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_selection {scalar_t__ type; scalar_t__ target; int r; } ;
struct omapvideo_info {struct omap_overlay** overlays; } ;
struct TYPE_5__ {int width; int height; } ;
struct TYPE_6__ {TYPE_2__ fmt; } ;
struct omap_vout_device {TYPE_3__ fbuf; int win; int crop; int pix; struct omapvideo_info vid_info; int vq; } ;
struct omap_video_timings {int x_res; int y_res; } ;
struct omap_overlay {struct omap_dss_device* (* get_device ) (struct omap_overlay*) ;} ;
struct TYPE_4__ {struct omap_video_timings timings; } ;
struct omap_dss_device {TYPE_1__ panel; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct omap_vout_device*) ;
 int FUNC_1 (int *,int *,int *,TYPE_3__*,int *) ;
 struct omap_dss_device* FUNC_2 (struct omap_overlay*) ;
 scalar_t__ FUNC_3 (int *) ;
 struct omap_vout_device* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4, void *VAR_5, struct v4l2_selection *VAR_6)
{
 int VAR_7 = -VAR_1;
 struct omap_vout_device *VAR_8 = FUNC_4(VAR_4);
 struct omapvideo_info *VAR_9;
 struct omap_overlay *VAR_10;
 struct omap_video_timings *VAR_11;
 struct omap_dss_device *VAR_12;

 if (VAR_6->type != VAR_2)
  return -VAR_1;

 if (VAR_6->target != VAR_3)
  return -VAR_1;

 if (FUNC_3(&VAR_8->vq))
  return -VAR_0;

 VAR_9 = &VAR_8->vid_info;
 VAR_10 = VAR_9->overlays[0];

 VAR_12 = VAR_10->get_device(VAR_10);

 if (!VAR_12) {
  VAR_7 = -VAR_1;
  goto s_crop_err;
 }

 VAR_11 = &VAR_12->panel.timings;

 if (FUNC_0(VAR_8)) {
  VAR_8->fbuf.fmt.height = VAR_11->x_res;
  VAR_8->fbuf.fmt.width = VAR_11->y_res;
 } else {
  VAR_8->fbuf.fmt.height = VAR_11->y_res;
  VAR_8->fbuf.fmt.width = VAR_11->x_res;
 }

 VAR_7 = FUNC_1(&VAR_8->pix, &VAR_8->crop, &VAR_8->win,
     &VAR_8->fbuf, &VAR_6->r);

s_crop_err:
 return VAR_7;
}

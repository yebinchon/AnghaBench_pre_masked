
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int width; int height; int left; int top; } ;
struct v4l2_window {TYPE_2__ w; } ;
struct omapvideo_info {int num_overlays; struct omap_overlay** overlays; } ;
struct omap_vout_device {int rotation; TYPE_3__* vid_dev; struct v4l2_window win; struct omapvideo_info vid_info; } ;
struct omap_video_timings {int x_res; int y_res; } ;
struct omap_overlay {struct omap_dss_device* (* get_device ) (struct omap_overlay*) ;} ;
struct TYPE_4__ {struct omap_video_timings timings; } ;
struct omap_dss_device {TYPE_1__ panel; } ;
struct TYPE_6__ {int v4l2_dev; } ;


 int VAR_0 ;



 int FUNC_0 (struct omap_vout_device*,struct omap_overlay*,int,int,int,int,int ) ;
 struct omap_dss_device* FUNC_1 (struct omap_overlay*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(struct omap_vout_device *VAR_1, u32 VAR_2)
{
 int VAR_3 = 0, VAR_4;
 struct v4l2_window *VAR_5;
 struct omap_overlay *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 struct omap_video_timings *VAR_11;
 struct omapvideo_info *VAR_12 = &VAR_1->vid_info;

 VAR_5 = &VAR_1->win;
 for (VAR_4 = 0; VAR_4 < VAR_12->num_overlays; VAR_4++) {
  struct omap_dss_device *VAR_13;

  VAR_6 = VAR_12->overlays[VAR_4];
  VAR_13 = VAR_6->get_device(VAR_6);

  if (!VAR_13)
   return -VAR_0;

  VAR_11 = &VAR_13->panel.timings;

  VAR_9 = VAR_5->w.width;
  VAR_10 = VAR_5->w.height;
  switch (VAR_1->rotation) {
  case 128:



   FUNC_2(VAR_9, VAR_10);
   VAR_8 = (VAR_11->y_res - VAR_5->w.width) - VAR_5->w.left;
   VAR_7 = VAR_5->w.top;
   break;

  case 130:
   VAR_7 = (VAR_11->x_res - VAR_5->w.width) - VAR_5->w.left;
   VAR_8 = (VAR_11->y_res - VAR_5->w.height) - VAR_5->w.top;
   break;

  case 129:
   FUNC_2(VAR_9, VAR_10);
   VAR_8 = VAR_5->w.left;
   VAR_7 = (VAR_11->x_res - VAR_5->w.height) - VAR_5->w.top;
   break;

  default:
   VAR_7 = VAR_5->w.left;
   VAR_8 = VAR_5->w.top;
   break;
  }

  VAR_3 = FUNC_0(VAR_1, VAR_6, VAR_7, VAR_8,
    VAR_9, VAR_10, VAR_2);
  if (VAR_3)
   goto omapvid_init_err;
 }
 return 0;

omapvid_init_err:
 FUNC_3(&VAR_1->vid_dev->v4l2_dev, "apply_changes failed\n");
 return VAR_3;
}

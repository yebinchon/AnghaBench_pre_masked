
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int height; int width; int bytesperline; int sizeimage; int pixelformat; int colorspace; int field; } ;
struct v4l2_framebuffer {int flags; int capability; int base; TYPE_3__ fmt; } ;
struct omapvideo_info {struct omap_overlay** overlays; } ;
struct TYPE_7__ {int height; int width; } ;
struct TYPE_9__ {int flags; int capability; int base; TYPE_2__ fmt; } ;
struct omap_vout_device {TYPE_4__ fbuf; struct omapvideo_info vid_info; } ;
struct omap_video_timings {int y_res; int x_res; } ;
struct omap_overlay_manager_info {scalar_t__ trans_key_type; scalar_t__ partial_alpha_enabled; } ;
struct omap_overlay {TYPE_5__* manager; struct omap_dss_device* (* get_device ) (struct omap_overlay*) ;} ;
struct TYPE_6__ {struct omap_video_timings timings; } ;
struct omap_dss_device {TYPE_1__ panel; } ;
struct file {int dummy; } ;
struct TYPE_10__ {int (* get_manager_info ) (TYPE_5__*,struct omap_overlay_manager_info*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct omap_dss_device* FUNC_0 (struct omap_overlay*) ;
 int FUNC_1 (TYPE_5__*,struct omap_overlay_manager_info*) ;
 struct omap_vout_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_9, void *VAR_10,
  struct v4l2_framebuffer *VAR_11)
{
 struct omap_overlay *VAR_12;
 struct omapvideo_info *VAR_13;
 struct omap_vout_device *VAR_14 = FUNC_2(VAR_9);
 struct omap_overlay_manager_info VAR_15;
 struct omap_video_timings *VAR_16;
 struct omap_dss_device *VAR_17;

 VAR_13 = &VAR_14->vid_info;
 VAR_12 = VAR_13->overlays[0];

 VAR_17 = VAR_12->get_device(VAR_12);

 if (!VAR_17)
  return -VAR_0;

 VAR_16 = &VAR_17->panel.timings;

 VAR_14->fbuf.fmt.height = VAR_16->y_res;
 VAR_14->fbuf.fmt.width = VAR_16->x_res;
 VAR_11->fmt.field = VAR_7;
 VAR_11->fmt.colorspace = VAR_3;
 VAR_11->fmt.pixelformat = VAR_8;
 VAR_11->fmt.height = VAR_14->fbuf.fmt.height;
 VAR_11->fmt.width = VAR_14->fbuf.fmt.width;
 VAR_11->fmt.bytesperline = VAR_14->fbuf.fmt.width * 4;
 VAR_11->fmt.sizeimage = VAR_11->fmt.height * VAR_11->fmt.bytesperline;
 VAR_11->base = VAR_14->fbuf.base;

 VAR_11->flags = VAR_14->fbuf.flags;
 VAR_11->capability = VAR_14->fbuf.capability;
 VAR_11->flags &= ~(VAR_6 | VAR_4 |
        VAR_5);

 if (VAR_12->manager && VAR_12->manager->get_manager_info) {
  VAR_12->manager->get_manager_info(VAR_12->manager, &VAR_15);
  if (VAR_15.trans_key_type == VAR_2)
   VAR_11->flags |= VAR_6;
  if (VAR_15.trans_key_type == VAR_1)
   VAR_11->flags |= VAR_4;
  if (VAR_15.partial_alpha_enabled)
   VAR_11->flags |= VAR_5;
 }

 return 0;
}

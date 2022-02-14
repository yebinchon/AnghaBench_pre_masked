
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ pixelformat; int sizeimage; int width; int height; } ;
struct TYPE_9__ {TYPE_4__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct omapvideo_info {struct omap_overlay** overlays; } ;
struct TYPE_8__ {int width; int height; } ;
struct TYPE_11__ {TYPE_2__ fmt; } ;
struct omap_vout_device {int bpp; int vrfb_bpp; int win; int crop; TYPE_6__ fbuf; TYPE_4__ pix; struct omapvideo_info vid_info; int vq; } ;
struct omap_video_timings {int x_res; int y_res; } ;
struct omap_overlay {struct omap_dss_device* (* get_device ) (struct omap_overlay*) ;} ;
struct TYPE_7__ {struct omap_video_timings timings; } ;
struct omap_dss_device {TYPE_1__ panel; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct omap_vout_device*) ;
 scalar_t__ FUNC_1 (struct omap_vout_device*) ;
 int FUNC_2 (TYPE_4__*,TYPE_6__*,int *,int *) ;
 int FUNC_3 (TYPE_4__*) ;
 struct omap_dss_device* FUNC_4 (struct omap_overlay*) ;
 scalar_t__ FUNC_5 (int *) ;
 struct omap_vout_device* FUNC_6 (struct file*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_5, void *VAR_6,
   struct v4l2_format *VAR_7)
{
 int VAR_8, VAR_9;
 struct omap_overlay *VAR_10;
 struct omapvideo_info *VAR_11;
 struct omap_video_timings *VAR_12;
 struct omap_vout_device *VAR_13 = FUNC_6(VAR_5);
 struct omap_dss_device *VAR_14;

 if (FUNC_5(&VAR_13->vq))
  return -VAR_0;

 VAR_11 = &VAR_13->vid_info;
 VAR_10 = VAR_11->overlays[0];
 VAR_14 = VAR_10->get_device(VAR_10);


 if (!VAR_14) {
  VAR_8 = -VAR_1;
  goto s_fmt_vid_out_exit;
 }
 VAR_12 = &VAR_14->panel.timings;



 if ((FUNC_1(VAR_13)) &&
   VAR_7->fmt.pix.pixelformat == VAR_2) {
  VAR_8 = -VAR_1;
  goto s_fmt_vid_out_exit;
 }



 if (FUNC_0(VAR_13)) {
  VAR_13->fbuf.fmt.height = VAR_12->x_res;
  VAR_13->fbuf.fmt.width = VAR_12->y_res;
 } else {
  VAR_13->fbuf.fmt.height = VAR_12->y_res;
  VAR_13->fbuf.fmt.width = VAR_12->x_res;
 }



 VAR_9 = FUNC_3(&VAR_7->fmt.pix);
 VAR_7->fmt.pix.sizeimage = VAR_7->fmt.pix.width * VAR_7->fmt.pix.height * VAR_9;


 VAR_13->bpp = VAR_9;
 VAR_13->pix = VAR_7->fmt.pix;
 VAR_13->vrfb_bpp = 1;


 if (VAR_4 == VAR_13->pix.pixelformat ||
   VAR_3 == VAR_13->pix.pixelformat)
  VAR_13->vrfb_bpp = 2;


 FUNC_2(&VAR_13->pix, &VAR_13->fbuf, &VAR_13->crop, &VAR_13->win);

 VAR_8 = 0;

s_fmt_vid_out_exit:
 return VAR_8;
}

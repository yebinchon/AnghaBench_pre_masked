
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_frame_interval_enum {int interval; int code; int which; int height; int width; int pad; int index; } ;
struct v4l2_frmivalenum {int discrete; int type; int pixel_format; int height; int width; int index; } ;
struct imx_media_pixfmt {int * codes; } ;
struct file {int dummy; } ;
struct capture_priv {int src_sd; int src_sd_pad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct imx_media_pixfmt* FUNC_0 (int ,int ,int) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int *,struct v4l2_subdev_frame_interval_enum*) ;
 struct capture_priv* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_6, void *VAR_7,
           struct v4l2_frmivalenum *VAR_8)
{
 struct capture_priv *VAR_9 = FUNC_2(VAR_6);
 const struct imx_media_pixfmt *VAR_10;
 struct v4l2_subdev_frame_interval_enum VAR_11 = {
  .index = VAR_8->index,
  .pad = VAR_9->src_sd_pad,
  .width = VAR_8->width,
  .height = VAR_8->height,
  .which = VAR_3,
 };
 int VAR_12;

 VAR_10 = FUNC_0(VAR_8->pixel_format, VAR_0, 1);
 if (!VAR_10)
  return -VAR_1;

 VAR_11.code = VAR_10->codes[0];

 VAR_12 = FUNC_1(VAR_9->src_sd, VAR_5, VAR_4,
          ((void*)0), &VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_8->type = VAR_2;
 VAR_8->discrete = VAR_11.interval;

 return 0;
}

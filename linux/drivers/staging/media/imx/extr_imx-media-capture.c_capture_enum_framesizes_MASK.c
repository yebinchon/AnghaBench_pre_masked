
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_frame_size_enum {scalar_t__ min_width; scalar_t__ max_width; scalar_t__ min_height; scalar_t__ max_height; int code; int which; int pad; int index; } ;
struct TYPE_4__ {scalar_t__ min_width; scalar_t__ max_width; scalar_t__ min_height; scalar_t__ max_height; int step_width; int step_height; } ;
struct TYPE_3__ {scalar_t__ width; scalar_t__ height; } ;
struct v4l2_frmsizeenum {TYPE_2__ stepwise; int type; TYPE_1__ discrete; int pixel_format; int index; } ;
struct imx_media_pixfmt {int * codes; } ;
struct file {int dummy; } ;
struct capture_priv {int src_sd; int src_sd_pad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct imx_media_pixfmt* FUNC_0 (int ,int ,int) ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ,int *,struct v4l2_subdev_frame_size_enum*) ;
 struct capture_priv* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_7, void *VAR_8,
       struct v4l2_frmsizeenum *VAR_9)
{
 struct capture_priv *VAR_10 = FUNC_2(VAR_7);
 const struct imx_media_pixfmt *VAR_11;
 struct v4l2_subdev_frame_size_enum VAR_12 = {
  .index = VAR_9->index,
  .pad = VAR_10->src_sd_pad,
  .which = VAR_4,
 };
 int VAR_13;

 VAR_11 = FUNC_0(VAR_9->pixel_format, VAR_0, 1);
 if (!VAR_11)
  return -VAR_1;

 VAR_12.code = VAR_11->codes[0];

 VAR_13 = FUNC_1(VAR_10->src_sd, VAR_6, VAR_5, ((void*)0), &VAR_12);
 if (VAR_13)
  return VAR_13;

 if (VAR_12.min_width == VAR_12.max_width &&
     VAR_12.min_height == VAR_12.max_height) {
  VAR_9->type = VAR_3;
  VAR_9->discrete.width = VAR_12.min_width;
  VAR_9->discrete.height = VAR_12.min_height;
 } else {
  VAR_9->type = VAR_2;
  VAR_9->stepwise.min_width = VAR_12.min_width;
  VAR_9->stepwise.max_width = VAR_12.max_width;
  VAR_9->stepwise.min_height = VAR_12.min_height;
  VAR_9->stepwise.max_height = VAR_12.max_height;
  VAR_9->stepwise.step_width = 1;
  VAR_9->stepwise.step_height = 1;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_frame_interval_enum {int interval; int which; int height; int width; int index; int code; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_frmivalenum {int discrete; int type; int pixel_format; int height; int width; int index; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int mbus_code; } ;
struct ceu_subdev {TYPE_1__ mbus_fmt; struct v4l2_subdev* v4l2_sd; } ;
struct ceu_fmt {int dummy; } ;
struct ceu_device {struct ceu_subdev* sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ceu_fmt* FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct v4l2_subdev*,int ,int ,int *,struct v4l2_subdev_frame_interval_enum*) ;
 struct ceu_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6,
       struct v4l2_frmivalenum *VAR_7)
{
 struct ceu_device *VAR_8 = FUNC_2(VAR_5);
 struct ceu_subdev *VAR_9 = VAR_8->sd;
 const struct ceu_fmt *VAR_10;
 struct v4l2_subdev *VAR_11 = VAR_9->v4l2_sd;
 int VAR_12;

 struct v4l2_subdev_frame_interval_enum VAR_13 = {
  .code = VAR_9->mbus_fmt.mbus_code,
  .index = VAR_7->index,
  .width = VAR_7->width,
  .height = VAR_7->height,
  .which = VAR_2,
 };


 VAR_10 = FUNC_0(VAR_7->pixel_format);
 if (!VAR_10)
  return -VAR_0;

 VAR_12 = FUNC_1(VAR_11, VAR_4, VAR_3, ((void*)0),
          &VAR_13);
 if (VAR_12)
  return VAR_12;

 VAR_7->type = VAR_1;
 VAR_7->discrete = VAR_13.interval;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_frame_size_enum {int max_height; int max_width; int which; int index; int code; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_4__ {int height; int width; } ;
struct v4l2_frmsizeenum {TYPE_2__ discrete; int type; int pixel_format; int index; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int mbus_code; } ;
struct ceu_subdev {TYPE_1__ mbus_fmt; struct v4l2_subdev* v4l2_sd; } ;
struct ceu_fmt {int dummy; } ;
struct ceu_device {struct ceu_subdev* sd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ceu_fmt* FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (struct v4l2_subdev*,int ,int ,int *,struct v4l2_subdev_frame_size_enum*) ;
 struct ceu_device* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_5, void *VAR_6,
          struct v4l2_frmsizeenum *VAR_7)
{
 struct ceu_device *VAR_8 = FUNC_4(VAR_5);
 struct ceu_subdev *VAR_9 = VAR_8->sd;
 const struct ceu_fmt *VAR_10;
 struct v4l2_subdev *VAR_11 = VAR_9->v4l2_sd;
 int VAR_12;

 struct v4l2_subdev_frame_size_enum VAR_13 = {
  .code = VAR_9->mbus_fmt.mbus_code,
  .index = VAR_7->index,
  .which = VAR_2,
 };


 VAR_10 = FUNC_2(VAR_7->pixel_format);
 if (!VAR_10)
  return -VAR_0;

 VAR_12 = FUNC_3(VAR_11, VAR_4, VAR_3,
          ((void*)0), &VAR_13);
 if (VAR_12)
  return VAR_12;

 VAR_7->type = VAR_1;
 VAR_7->discrete.width = FUNC_1(VAR_13.max_width);
 VAR_7->discrete.height = FUNC_0(VAR_13.max_height);

 return 0;
}

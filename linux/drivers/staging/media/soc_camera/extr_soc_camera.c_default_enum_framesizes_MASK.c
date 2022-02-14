
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_frame_size_enum {scalar_t__ min_width; scalar_t__ max_width; scalar_t__ min_height; scalar_t__ max_height; int code; int which; int index; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_4__ {scalar_t__ min_width; scalar_t__ max_width; scalar_t__ min_height; scalar_t__ max_height; int step_width; int step_height; } ;
struct TYPE_3__ {scalar_t__ width; scalar_t__ height; } ;
struct v4l2_frmsizeenum {TYPE_2__ stepwise; int type; TYPE_1__ discrete; int pixel_format; int index; } ;
struct soc_camera_format_xlate {int code; } ;
struct soc_camera_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct v4l2_subdev* FUNC_0 (struct soc_camera_device*) ;
 struct soc_camera_format_xlate* FUNC_1 (struct soc_camera_device*,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int ,int ,int *,struct v4l2_subdev_frame_size_enum*) ;

__attribute__((used)) static int FUNC_3(struct soc_camera_device *VAR_6,
       struct v4l2_frmsizeenum *VAR_7)
{
 int VAR_8;
 struct v4l2_subdev *VAR_9 = FUNC_0(VAR_6);
 const struct soc_camera_format_xlate *VAR_10;
 struct v4l2_subdev_frame_size_enum VAR_11 = {
  .index = VAR_7->index,
  .which = VAR_3,
 };

 VAR_10 = FUNC_1(VAR_6, VAR_7->pixel_format);
 if (!VAR_10)
  return -VAR_0;
 VAR_11.code = VAR_10->code;

 VAR_8 = FUNC_2(VAR_9, VAR_5, VAR_4, ((void*)0), &VAR_11);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_11.min_width == VAR_11.max_width &&
     VAR_11.min_height == VAR_11.max_height) {
  VAR_7->type = VAR_2;
  VAR_7->discrete.width = VAR_11.min_width;
  VAR_7->discrete.height = VAR_11.min_height;
  return 0;
 }
 VAR_7->type = VAR_1;
 VAR_7->stepwise.min_width = VAR_11.min_width;
 VAR_7->stepwise.max_width = VAR_11.max_width;
 VAR_7->stepwise.min_height = VAR_11.min_height;
 VAR_7->stepwise.max_height = VAR_11.max_height;
 VAR_7->stepwise.step_width = 1;
 VAR_7->stepwise.step_height = 1;
 return 0;
}

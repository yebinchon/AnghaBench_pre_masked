
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_frame_size_enum {scalar_t__ min_width; scalar_t__ max_width; scalar_t__ min_height; scalar_t__ max_height; int code; int which; int index; } ;
struct TYPE_4__ {scalar_t__ min_width; scalar_t__ max_width; scalar_t__ min_height; scalar_t__ max_height; int step_width; int step_height; } ;
struct TYPE_3__ {scalar_t__ width; scalar_t__ height; } ;
struct v4l2_frmsizeenum {scalar_t__ pixel_format; TYPE_2__ stepwise; int type; TYPE_1__ discrete; int index; } ;
struct mcam_format_struct {scalar_t__ pixelformat; int mbus_code; } ;
struct mcam_camera {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mcam_format_struct* FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_1 (struct mcam_camera*,int ,int ,int *,struct v4l2_subdev_frame_size_enum*) ;
 struct mcam_camera* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_6, void *VAR_7,
  struct v4l2_frmsizeenum *VAR_8)
{
 struct mcam_camera *VAR_9 = FUNC_2(VAR_6);
 struct mcam_format_struct *VAR_10;
 struct v4l2_subdev_frame_size_enum VAR_11 = {
  .index = VAR_8->index,
  .which = VAR_3,
 };
 int VAR_12;

 VAR_10 = FUNC_0(VAR_8->pixel_format);
 if (VAR_10->pixelformat != VAR_8->pixel_format)
  return -VAR_0;
 VAR_11.code = VAR_10->mbus_code;
 VAR_12 = FUNC_1(VAR_9, VAR_5, VAR_4, ((void*)0), &VAR_11);
 if (VAR_12)
  return VAR_12;
 if (VAR_11.min_width == VAR_11.max_width &&
     VAR_11.min_height == VAR_11.max_height) {
  VAR_8->type = VAR_2;
  VAR_8->discrete.width = VAR_11.min_width;
  VAR_8->discrete.height = VAR_11.min_height;
  return 0;
 }
 VAR_8->type = VAR_1;
 VAR_8->stepwise.min_width = VAR_11.min_width;
 VAR_8->stepwise.max_width = VAR_11.max_width;
 VAR_8->stepwise.min_height = VAR_11.min_height;
 VAR_8->stepwise.max_height = VAR_11.max_height;
 VAR_8->stepwise.step_width = 1;
 VAR_8->stepwise.step_height = 1;
 return 0;
}

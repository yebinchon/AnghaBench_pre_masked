
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {scalar_t__ index; scalar_t__ code; void* max_height; void* min_height; void* max_width; void* min_width; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_4,
       struct v4l2_subdev_pad_config *VAR_5,
       struct v4l2_subdev_frame_size_enum *VAR_6)
{
 if (VAR_6->index != 0 || VAR_6->code != VAR_1)
  return -VAR_0;

 VAR_6->min_width = VAR_2;
 VAR_6->max_width = VAR_2;
 VAR_6->min_height = VAR_3;
 VAR_6->max_height = VAR_3;

 return 0;
}

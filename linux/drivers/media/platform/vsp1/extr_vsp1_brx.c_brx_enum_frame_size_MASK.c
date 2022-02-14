
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {scalar_t__ code; void* max_height; void* min_height; void* max_width; void* min_width; scalar_t__ index; } ;
struct v4l2_subdev {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_5,
          struct v4l2_subdev_pad_config *VAR_6,
          struct v4l2_subdev_frame_size_enum *VAR_7)
{
 if (VAR_7->index)
  return -VAR_2;

 if (VAR_7->code != VAR_3 &&
     VAR_7->code != VAR_4)
  return -VAR_2;

 VAR_7->min_width = VAR_1;
 VAR_7->max_width = VAR_0;
 VAR_7->min_height = VAR_1;
 VAR_7->max_height = VAR_0;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {int index; scalar_t__ code; int min_width; int max_width; int min_height; int max_height; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_4,
       struct v4l2_subdev_pad_config *VAR_5,
       struct v4l2_subdev_frame_size_enum *VAR_6)
{
 if (VAR_6->index >= 8 || VAR_6->code != VAR_1)
  return -VAR_0;

 VAR_6->min_width = (VAR_3 + 1) / VAR_6->index;
 VAR_6->max_width = VAR_6->min_width;
 VAR_6->min_height = (VAR_2 + 1) / VAR_6->index;
 VAR_6->max_height = VAR_6->min_height;

 return 0;
}

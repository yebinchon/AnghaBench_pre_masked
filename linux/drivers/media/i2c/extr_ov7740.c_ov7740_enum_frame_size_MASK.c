
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {scalar_t__ index; int max_height; int min_height; int max_width; int min_width; scalar_t__ pad; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_3,
      struct v4l2_subdev_pad_config *VAR_4,
      struct v4l2_subdev_frame_size_enum *VAR_5)
{
 if (VAR_5->pad)
  return -VAR_0;

 if (VAR_5->index > 0)
  return -VAR_0;

 VAR_5->min_width = VAR_5->max_width = VAR_2;
 VAR_5->min_height = VAR_5->max_height = VAR_1;

 return 0;
}

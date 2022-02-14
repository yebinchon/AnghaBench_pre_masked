
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {scalar_t__ pad; size_t index; int min_height; int max_height; int min_width; int max_width; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int vact; int hact; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_3,
      struct v4l2_subdev_pad_config *VAR_4,
      struct v4l2_subdev_frame_size_enum *VAR_5)
{
 if (VAR_5->pad != 0)
  return -VAR_0;
 if (VAR_5->index >= VAR_1)
  return -VAR_0;

 VAR_5->min_width =
  VAR_2[VAR_5->index].hact;
 VAR_5->max_width = VAR_5->min_width;
 VAR_5->min_height =
  VAR_2[VAR_5->index].vact;
 VAR_5->max_height = VAR_5->min_height;

 return 0;
}

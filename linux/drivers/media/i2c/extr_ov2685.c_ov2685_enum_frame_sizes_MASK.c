
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {int index; int min_height; int max_height; int max_width; int min_width; int code; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_3__ {int height; int width; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_3,
       struct v4l2_subdev_pad_config *VAR_4,
       struct v4l2_subdev_frame_size_enum *VAR_5)
{
 int VAR_6 = VAR_5->index;

 if (VAR_6 >= FUNC_0(VAR_2))
  return -VAR_0;

 VAR_5->code = VAR_1;

 VAR_5->min_width = VAR_2[VAR_6].width;
 VAR_5->max_width = VAR_2[VAR_6].width;
 VAR_5->max_height = VAR_2[VAR_6].height;
 VAR_5->min_height = VAR_2[VAR_6].height;

 return 0;
}

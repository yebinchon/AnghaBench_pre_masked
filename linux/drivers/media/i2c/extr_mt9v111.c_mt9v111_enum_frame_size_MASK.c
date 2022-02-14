
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {size_t index; int max_height; int min_height; int max_width; int min_width; scalar_t__ pad; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_3__ {int height; int width; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_2,
       struct v4l2_subdev_pad_config *VAR_3,
       struct v4l2_subdev_frame_size_enum *VAR_4)
{
 if (VAR_4->pad || VAR_4->index >= FUNC_0(VAR_1))
  return -VAR_0;

 VAR_4->min_width = VAR_1[VAR_4->index].width;
 VAR_4->max_width = VAR_1[VAR_4->index].width;
 VAR_4->min_height = VAR_1[VAR_4->index].height;
 VAR_4->max_height = VAR_1[VAR_4->index].height;

 return 0;
}

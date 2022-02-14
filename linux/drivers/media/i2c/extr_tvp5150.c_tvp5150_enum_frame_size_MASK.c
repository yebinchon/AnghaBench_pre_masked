
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {int index; scalar_t__ code; int min_height; int max_height; int max_width; int min_width; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int height; int width; } ;
struct tvp5150 {TYPE_1__ rect; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct tvp5150* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_2,
       struct v4l2_subdev_pad_config *VAR_3,
       struct v4l2_subdev_frame_size_enum *VAR_4)
{
 struct tvp5150 *VAR_5 = FUNC_0(VAR_2);

 if (VAR_4->index >= 8 || VAR_4->code != VAR_1)
  return -VAR_0;

 VAR_4->code = VAR_1;
 VAR_4->min_width = VAR_5->rect.width;
 VAR_4->max_width = VAR_5->rect.width;
 VAR_4->min_height = VAR_5->rect.height / 2;
 VAR_4->max_height = VAR_5->rect.height / 2;

 return 0;
}

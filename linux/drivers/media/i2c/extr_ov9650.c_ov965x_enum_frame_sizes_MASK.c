
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {int index; scalar_t__ code; int max_height; int min_height; int min_width; int max_width; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_4__ {scalar_t__ code; int height; int width; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_3,
       struct v4l2_subdev_pad_config *VAR_4,
       struct v4l2_subdev_frame_size_enum *VAR_5)
{
 int VAR_6 = FUNC_0(VAR_1);

 if (VAR_5->index >= FUNC_0(VAR_2))
  return -VAR_0;

 while (--VAR_6)
  if (VAR_5->code == VAR_1[VAR_6].code)
   break;

 VAR_5->code = VAR_1[VAR_6].code;

 VAR_5->min_width = VAR_2[VAR_5->index].width;
 VAR_5->max_width = VAR_5->min_width;
 VAR_5->max_height = VAR_2[VAR_5->index].height;
 VAR_5->min_height = VAR_5->max_height;

 return 0;
}

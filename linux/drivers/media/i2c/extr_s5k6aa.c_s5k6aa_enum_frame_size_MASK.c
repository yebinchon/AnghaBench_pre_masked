
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {scalar_t__ index; scalar_t__ code; int min_height; int max_height; int max_width; int min_width; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_3__ {scalar_t__ code; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_6,
      struct v4l2_subdev_pad_config *VAR_7,
      struct v4l2_subdev_frame_size_enum *VAR_8)
{
 int VAR_9 = FUNC_0(VAR_5);

 if (VAR_8->index > 0)
  return -VAR_0;

 while (--VAR_9)
  if (VAR_8->code == VAR_5[VAR_9].code)
   break;

 VAR_8->code = VAR_5[VAR_9].code;
 VAR_8->min_width = VAR_4;
 VAR_8->max_width = VAR_3;
 VAR_8->max_height = VAR_2;
 VAR_8->min_height = VAR_1;

 return 0;
}

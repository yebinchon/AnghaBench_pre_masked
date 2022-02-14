
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {scalar_t__ index; scalar_t__ pad; scalar_t__ code; void* min_height; void* max_height; void* max_width; void* min_width; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_3__ {scalar_t__ code; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_8,
      struct v4l2_subdev_pad_config *VAR_9,
      struct v4l2_subdev_frame_size_enum *VAR_10)
{
 int VAR_11;

 if (VAR_10->index > 0)
  return -VAR_0;

 if (VAR_10->pad == VAR_2) {
  VAR_10->code = VAR_1;
  VAR_10->min_width = VAR_4;
  VAR_10->max_width = VAR_4;
  VAR_10->min_height = VAR_3;
  VAR_10->max_height = VAR_3;
  return 0;
 }

 VAR_11 = FUNC_0(VAR_7);
 while (--VAR_11)
  if (VAR_10->code == VAR_7[VAR_11].code)
   break;
 VAR_10->code = VAR_7[VAR_11].code;
 VAR_10->min_width = VAR_6;
 VAR_10->max_width = VAR_4;
 VAR_10->max_height = VAR_5;
 VAR_10->min_height = VAR_3;

 return 0;
}

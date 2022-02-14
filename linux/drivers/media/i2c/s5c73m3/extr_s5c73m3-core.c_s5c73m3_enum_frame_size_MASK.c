
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {scalar_t__ pad; scalar_t__ code; size_t index; int max_height; int min_height; int min_width; int max_width; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__** VAR_6 ;
 size_t* VAR_7 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_8,
       struct v4l2_subdev_pad_config *VAR_9,
       struct v4l2_subdev_frame_size_enum *VAR_10)
{
 int VAR_11;

 if (VAR_10->pad == VAR_4) {
  if (VAR_10->code != VAR_3)
   return -VAR_0;
  VAR_11 = VAR_1;
 } else{
  if (VAR_10->code != VAR_5)
   return -VAR_0;
  VAR_11 = VAR_2;
 }

 if (VAR_10->index >= VAR_7[VAR_11])
  return -VAR_0;

 VAR_10->min_width = VAR_6[VAR_11][VAR_10->index].width;
 VAR_10->max_width = VAR_10->min_width;
 VAR_10->max_height = VAR_6[VAR_11][VAR_10->index].height;
 VAR_10->min_height = VAR_10->max_height;

 return 0;
}

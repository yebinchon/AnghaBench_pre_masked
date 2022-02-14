
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_2__ {int numerator; int denominator; } ;
struct v4l2_subdev_frame_interval_enum {size_t index; scalar_t__ width; scalar_t__ height; TYPE_1__ interval; scalar_t__ pad; } ;
struct v4l2_subdev {int dummy; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_6,
          struct v4l2_subdev_pad_config *VAR_7,
          struct v4l2_subdev_frame_interval_enum *VAR_8)
{
 if (VAR_8->pad || VAR_8->index >= FUNC_0(VAR_5))
  return -VAR_0;

 if (VAR_8->width != VAR_4 && VAR_8->width != VAR_2)
  return -VAR_0;
 if (VAR_8->height != VAR_3 && VAR_8->height != VAR_1)
  return -VAR_0;

 VAR_8->interval.numerator = 1;
 VAR_8->interval.denominator = VAR_5[VAR_8->index];

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_2__ {int numerator; int denominator; } ;
struct v4l2_subdev_frame_interval_enum {int index; scalar_t__ width; scalar_t__ height; TYPE_1__ interval; scalar_t__ pad; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_3,
    struct v4l2_subdev_pad_config *VAR_4,
    struct v4l2_subdev_frame_interval_enum *VAR_5)
{
 if (VAR_5->pad)
  return -VAR_0;

 if (VAR_5->index >= 1)
  return -VAR_0;

 if ((VAR_5->width != VAR_2) || (VAR_5->height != VAR_1))
  return -VAR_0;

 VAR_5->interval.numerator = 1;
 VAR_5->interval.denominator = 60;

 return 0;
}

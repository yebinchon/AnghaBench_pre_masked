
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_fract {int numerator; int denominator; } ;
struct v4l2_subdev_frame_interval_enum {scalar_t__ index; scalar_t__ width; scalar_t__ height; scalar_t__ which; struct v4l2_fract interval; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_6,
         struct v4l2_subdev_pad_config *VAR_7,
         struct v4l2_subdev_frame_interval_enum *VAR_8)
{
 struct v4l2_fract VAR_9;

 if (VAR_8->index >= VAR_3 || VAR_8->width > VAR_4 ||
     VAR_8->height > VAR_2 ||
     VAR_8->which > VAR_5)
  return -VAR_0;

 VAR_9.denominator = VAR_1;
 VAR_9.numerator = 1;

 VAR_8->interval = VAR_9;

 return 0;
}

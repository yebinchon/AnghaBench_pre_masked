
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int numerator; int denominator; } ;
struct v4l2_subdev_frame_interval {TYPE_1__ interval; scalar_t__ pad; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_1,
       struct v4l2_subdev_frame_interval *VAR_2)
{
 VAR_2->pad = 0;
 VAR_2->interval.numerator = 1;
 VAR_2->interval.denominator = VAR_0;

 return 0;
}

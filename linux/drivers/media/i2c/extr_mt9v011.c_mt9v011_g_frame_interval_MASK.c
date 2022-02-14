
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int denominator; int numerator; } ;
struct v4l2_subdev_frame_interval {TYPE_1__ interval; } ;
struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_0,
        struct v4l2_subdev_frame_interval *VAR_1)
{
 FUNC_0(VAR_0,
   &VAR_1->interval.numerator,
   &VAR_1->interval.denominator);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int numerator; int denominator; } ;
struct vs6624 {TYPE_2__ frame_rate; } ;
struct TYPE_3__ {int denominator; int numerator; } ;
struct v4l2_subdev_frame_interval {TYPE_1__ interval; } ;
struct v4l2_subdev {int dummy; } ;


 struct vs6624* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_0,
       struct v4l2_subdev_frame_interval *VAR_1)
{
 struct vs6624 *VAR_2 = FUNC_0(VAR_0);

 VAR_1->interval.numerator = VAR_2->frame_rate.denominator;
 VAR_1->interval.denominator = VAR_2->frame_rate.numerator;
 return 0;
}

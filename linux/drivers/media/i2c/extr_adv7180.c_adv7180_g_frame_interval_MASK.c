
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int numerator; int denominator; } ;
struct v4l2_subdev_frame_interval {TYPE_1__ interval; } ;
struct v4l2_subdev {int dummy; } ;
struct adv7180_state {int curr_norm; } ;


 int VAR_0 ;
 struct adv7180_state* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1,
        struct v4l2_subdev_frame_interval *VAR_2)
{
 struct adv7180_state *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->curr_norm & VAR_0) {
  VAR_2->interval.numerator = 1001;
  VAR_2->interval.denominator = 30000;
 } else {
  VAR_2->interval.numerator = 1;
  VAR_2->interval.denominator = 25;
 }

 return 0;
}

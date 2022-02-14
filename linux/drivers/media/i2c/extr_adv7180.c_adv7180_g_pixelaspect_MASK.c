
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_fract {int numerator; int denominator; } ;
struct adv7180_state {int curr_norm; } ;


 int VAR_0 ;
 struct adv7180_state* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1, struct v4l2_fract *VAR_2)
{
 struct adv7180_state *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->curr_norm & VAR_0) {
  VAR_2->numerator = 11;
  VAR_2->denominator = 10;
 } else {
  VAR_2->numerator = 54;
  VAR_2->denominator = 59;
 }

 return 0;
}

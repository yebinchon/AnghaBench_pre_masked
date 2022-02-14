
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int val; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ bt; } ;
struct adv7511_state {scalar_t__ fmt_code; TYPE_2__ dv_timings; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct v4l2_subdev*,int) ;
 struct adv7511_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_2(struct v4l2_subdev *VAR_2, struct v4l2_ctrl *VAR_3)
{
 struct adv7511_state *VAR_4 = FUNC_1(VAR_2);


 if (VAR_4->fmt_code != VAR_0) {

  FUNC_0(VAR_2, 0);
  return;
 }

 switch (VAR_3->val) {
 case 130:

  if (VAR_4->dv_timings.bt.flags & VAR_1) {

   FUNC_0(VAR_2, 1);
  } else {

   FUNC_0(VAR_2, 0);
  }
  break;
 case 128:

  FUNC_0(VAR_2, 1);
  break;
 case 129:

  FUNC_0(VAR_2, 0);
  break;
 }
}

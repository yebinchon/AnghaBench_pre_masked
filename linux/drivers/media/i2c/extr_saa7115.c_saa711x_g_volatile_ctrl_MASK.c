
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; } ;
struct saa711x_state {TYPE_2__* gain; TYPE_1__* agc; } ;
struct TYPE_4__ {int val; } ;
struct TYPE_3__ {int val; } ;


 int VAR_0 ;

 int FUNC_0 (struct v4l2_subdev*,int ) ;
 struct v4l2_subdev* FUNC_1 (struct v4l2_ctrl*) ;
 struct saa711x_state* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_ctrl *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_1(VAR_1);
 struct saa711x_state *VAR_3 = FUNC_2(VAR_2);

 switch (VAR_1->id) {
 case 128:

  if (VAR_3->agc->val)
   VAR_3->gain->val =
    FUNC_0(VAR_2, VAR_0) & 0x7f;
  break;
 }
 return 0;
}

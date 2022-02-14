
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; } ;
struct TYPE_2__ {int af_status; } ;
struct s5c73m3 {scalar_t__ power; TYPE_1__ ctrls; } ;


 int VAR_0 ;

 struct v4l2_subdev* FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (struct s5c73m3*,int ) ;
 struct s5c73m3* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_ctrl *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_0(VAR_1);
 struct s5c73m3 *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 if (VAR_3->power == 0)
  return -VAR_0;

 switch (VAR_1->id) {
 case 128:
  VAR_4 = FUNC_1(VAR_3, VAR_3->ctrls.af_status);
  if (VAR_4)
   return VAR_4;
  break;
 }

 return 0;
}

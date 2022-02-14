
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; } ;
struct ov2680_ctrls {TYPE_2__* exposure; TYPE_1__* gain; } ;
struct ov2680_dev {int is_enabled; struct ov2680_ctrls ctrls; } ;
struct TYPE_4__ {int val; } ;
struct TYPE_3__ {int val; } ;




 struct v4l2_subdev* FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (struct ov2680_dev*) ;
 int FUNC_2 (struct ov2680_dev*) ;
 struct ov2680_dev* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_ctrl *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_0(VAR_0);
 struct ov2680_dev *VAR_2 = FUNC_3(VAR_1);
 struct ov2680_ctrls *VAR_3 = &VAR_2->ctrls;
 int VAR_4;

 if (!VAR_2->is_enabled)
  return 0;

 switch (VAR_0->id) {
 case 128:
  VAR_4 = FUNC_2(VAR_2);
  if (VAR_4 < 0)
   return VAR_4;
  VAR_3->gain->val = VAR_4;
  break;
 case 129:
  VAR_4 = FUNC_1(VAR_2);
  if (VAR_4 < 0)
   return VAR_4;
  VAR_3->exposure->val = VAR_4;
  break;
 }

 return 0;
}

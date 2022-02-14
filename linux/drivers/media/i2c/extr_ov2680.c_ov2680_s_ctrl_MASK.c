
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; } ;
struct ov2680_ctrls {TYPE_2__* auto_exp; TYPE_1__* auto_gain; } ;
struct ov2680_dev {int is_streaming; int is_enabled; struct ov2680_ctrls ctrls; } ;
struct TYPE_4__ {int val; } ;
struct TYPE_3__ {int val; } ;


 int VAR_0 ;
 int VAR_1 ;







 struct v4l2_subdev* FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (struct ov2680_dev*,int) ;
 int FUNC_2 (struct ov2680_dev*,int) ;
 int FUNC_3 (struct ov2680_dev*) ;
 int FUNC_4 (struct ov2680_dev*) ;
 int FUNC_5 (struct ov2680_dev*,int ) ;
 int FUNC_6 (struct ov2680_dev*) ;
 int FUNC_7 (struct ov2680_dev*) ;
 struct ov2680_dev* FUNC_8 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_9(struct v4l2_ctrl *VAR_2)
{
 struct v4l2_subdev *VAR_3 = FUNC_0(VAR_2);
 struct ov2680_dev *VAR_4 = FUNC_8(VAR_3);
 struct ov2680_ctrls *VAR_5 = &VAR_4->ctrls;

 if (!VAR_4->is_enabled)
  return 0;

 switch (VAR_2->id) {
 case 134:
  return FUNC_2(VAR_4, !!VAR_2->val);
 case 131:
  return FUNC_2(VAR_4, !!VAR_5->auto_gain->val);
 case 132:
  return FUNC_1(VAR_4, !!VAR_2->val);
 case 133:
  return FUNC_1(VAR_4, !!VAR_5->auto_exp->val);
 case 128:
  if (VAR_4->is_streaming)
   return -VAR_0;
  if (VAR_2->val)
   return FUNC_7(VAR_4);
  else
   return FUNC_6(VAR_4);
 case 130:
  if (VAR_4->is_streaming)
   return -VAR_0;
  if (VAR_2->val)
   return FUNC_4(VAR_4);
  else
   return FUNC_3(VAR_4);
 case 129:
  return FUNC_5(VAR_4, VAR_2->val);
 default:
  break;
 }

 return -VAR_1;
}

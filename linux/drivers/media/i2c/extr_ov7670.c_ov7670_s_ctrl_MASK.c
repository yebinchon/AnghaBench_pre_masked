
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; } ;
struct ov7670_info {TYPE_4__* exposure; TYPE_3__* gain; TYPE_2__* hue; TYPE_1__* saturation; } ;
struct TYPE_8__ {int val; } ;
struct TYPE_7__ {int val; } ;
struct TYPE_6__ {int val; } ;
struct TYPE_5__ {int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int ) ;
 int FUNC_3 (struct v4l2_subdev*,int ) ;
 int FUNC_4 (struct v4l2_subdev*,int ) ;
 int FUNC_5 (struct v4l2_subdev*,int ) ;
 int FUNC_6 (struct v4l2_subdev*,int ) ;
 int FUNC_7 (struct v4l2_subdev*,int ,int ) ;
 int FUNC_8 (struct v4l2_subdev*,int ) ;
 int FUNC_9 (struct v4l2_subdev*,int ) ;
 struct v4l2_subdev* FUNC_10 (struct v4l2_ctrl*) ;
 struct ov7670_info* FUNC_11 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_12(struct v4l2_ctrl *VAR_2)
{
 struct v4l2_subdev *VAR_3 = FUNC_10(VAR_2);
 struct ov7670_info *VAR_4 = FUNC_11(VAR_3);

 switch (VAR_2->id) {
 case 134:
  return FUNC_2(VAR_3, VAR_2->val);
 case 133:
  return FUNC_3(VAR_3, VAR_2->val);
 case 130:
  return FUNC_7(VAR_3,
    VAR_4->saturation->val, VAR_4->hue->val);
 case 128:
  return FUNC_9(VAR_3, VAR_2->val);
 case 131:
  return FUNC_6(VAR_3, VAR_2->val);
 case 135:


  if (!VAR_2->val) {

   return FUNC_5(VAR_3, VAR_4->gain->val);
  }
  return FUNC_1(VAR_3, VAR_2->val);
 case 132:


  if (VAR_2->val == VAR_1) {

   return FUNC_4(VAR_3, VAR_4->exposure->val);
  }
  return FUNC_0(VAR_3, VAR_2->val);
 case 129:
  return FUNC_8(VAR_3, VAR_2->val);
 }
 return -VAR_0;
}

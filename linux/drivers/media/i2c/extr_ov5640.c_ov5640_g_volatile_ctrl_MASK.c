
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; } ;
struct TYPE_5__ {TYPE_3__* exposure; TYPE_1__* gain; } ;
struct ov5640_dev {TYPE_2__ ctrls; } ;
struct TYPE_6__ {int val; } ;
struct TYPE_4__ {int val; } ;




 struct v4l2_subdev* FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (struct ov5640_dev*) ;
 int FUNC_2 (struct ov5640_dev*) ;
 struct ov5640_dev* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_ctrl *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_0(VAR_0);
 struct ov5640_dev *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;



 switch (VAR_0->id) {
 case 129:
  VAR_3 = FUNC_2(VAR_2);
  if (VAR_3 < 0)
   return VAR_3;
  VAR_2->ctrls.gain->val = VAR_3;
  break;
 case 128:
  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3 < 0)
   return VAR_3;
  VAR_2->ctrls.exposure->val = VAR_3;
  break;
 }

 return 0;
}

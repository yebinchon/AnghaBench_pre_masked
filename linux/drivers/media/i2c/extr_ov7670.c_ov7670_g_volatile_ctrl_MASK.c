
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; } ;
struct ov7670_info {TYPE_1__* gain; } ;
struct TYPE_2__ {int val; } ;


 int VAR_0 ;

 int FUNC_0 (struct v4l2_subdev*,int *) ;
 struct v4l2_subdev* FUNC_1 (struct v4l2_ctrl*) ;
 struct ov7670_info* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_ctrl *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_1(VAR_1);
 struct ov7670_info *VAR_3 = FUNC_2(VAR_2);

 switch (VAR_1->id) {
 case 128:
  return FUNC_0(VAR_2, &VAR_3->gain->val);
 }
 return -VAR_0;
}

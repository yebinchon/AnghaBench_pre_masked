
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (struct v4l2_subdev*,int ,int) ;
 struct v4l2_subdev* FUNC_1 (struct v4l2_ctrl*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_ctrl *VAR_6)
{
 struct v4l2_subdev *VAR_7 = FUNC_1(VAR_6);

 switch (VAR_6->id) {
 case 130:
  return FUNC_0(VAR_7, VAR_2,
     VAR_6->val & VAR_5);

 case 128:
  return FUNC_0(VAR_7, VAR_3,
     VAR_6->val - VAR_1);

 case 129:
  return FUNC_0(VAR_7, VAR_0,
     VAR_6->val);
 }
 return -VAR_4;
}

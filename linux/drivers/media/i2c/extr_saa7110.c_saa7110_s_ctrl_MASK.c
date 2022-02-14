
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; } ;


 int VAR_0 ;




 int FUNC_0 (struct v4l2_subdev*,int,int ) ;
 struct v4l2_subdev* FUNC_1 (struct v4l2_ctrl*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_ctrl *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_1(VAR_1);

 switch (VAR_1->id) {
 case 131:
  FUNC_0(VAR_2, 0x19, VAR_1->val);
  break;
 case 130:
  FUNC_0(VAR_2, 0x13, VAR_1->val);
  break;
 case 128:
  FUNC_0(VAR_2, 0x12, VAR_1->val);
  break;
 case 129:
  FUNC_0(VAR_2, 0x07, VAR_1->val);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}

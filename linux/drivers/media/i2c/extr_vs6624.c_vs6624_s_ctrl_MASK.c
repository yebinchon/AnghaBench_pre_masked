
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
 struct v4l2_subdev* FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct v4l2_ctrl *VAR_5)
{
 struct v4l2_subdev *VAR_6 = FUNC_0(VAR_5);

 switch (VAR_5->id) {
 case 131:
  FUNC_1(VAR_6, VAR_1, VAR_5->val);
  break;
 case 129:
  FUNC_1(VAR_6, VAR_3, VAR_5->val);
  break;
 case 130:
  FUNC_1(VAR_6, VAR_2, VAR_5->val);
  break;
 case 128:
  FUNC_1(VAR_6, VAR_4, VAR_5->val);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}

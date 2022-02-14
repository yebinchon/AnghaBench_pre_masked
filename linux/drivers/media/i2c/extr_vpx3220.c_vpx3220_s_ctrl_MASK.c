
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; } ;


 int VAR_0 ;




 struct v4l2_subdev* FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (struct v4l2_subdev*,int,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_ctrl *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_0(VAR_1);

 switch (VAR_1->id) {
 case 131:
  FUNC_2(VAR_2, 0xe6, VAR_1->val);
  return 0;
 case 130:

  FUNC_2(VAR_2, 0xe7, VAR_1->val + 192);
  return 0;
 case 128:
  FUNC_1(VAR_2, 0xa0, VAR_1->val);
  return 0;
 case 129:
  FUNC_1(VAR_2, 0x1c, VAR_1->val);
  return 0;
 }
 return -VAR_0;
}

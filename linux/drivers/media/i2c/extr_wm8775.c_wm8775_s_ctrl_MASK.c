
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




 struct v4l2_subdev* FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (struct v4l2_subdev*,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_ctrl *VAR_4)
{
 struct v4l2_subdev *VAR_5 = FUNC_0(VAR_4);

 switch (VAR_4->id) {
 case 129:
 case 128:
 case 131:
  FUNC_1(VAR_5, 0);
  return 0;
 case 130:
  FUNC_2(VAR_5, VAR_3, (VAR_4->val ? VAR_0 : 0) | VAR_1);
  return 0;
 }
 return -VAR_2;
}

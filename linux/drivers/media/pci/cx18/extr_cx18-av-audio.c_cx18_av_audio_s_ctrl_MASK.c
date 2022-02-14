
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; } ;
struct cx18 {int dummy; } ;


 int VAR_0 ;





 int FUNC_0 (struct cx18*,int ) ;
 int FUNC_1 (struct cx18*,int ) ;
 int FUNC_2 (struct cx18*,int ) ;
 int FUNC_3 (struct cx18*,int ) ;
 int FUNC_4 (struct cx18*,int ) ;
 struct v4l2_subdev* FUNC_5 (struct v4l2_ctrl*) ;
 struct cx18* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_ctrl *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_5(VAR_1);
 struct cx18 *VAR_3 = FUNC_6(VAR_2);

 switch (VAR_1->id) {
 case 128:
  FUNC_4(VAR_3, VAR_1->val);
  break;
 case 131:
  FUNC_1(VAR_3, VAR_1->val);
  break;
 case 129:
  FUNC_3(VAR_3, VAR_1->val);
  break;
 case 132:
  FUNC_0(VAR_3, VAR_1->val);
  break;
 case 130:
  FUNC_2(VAR_3, VAR_1->val);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}

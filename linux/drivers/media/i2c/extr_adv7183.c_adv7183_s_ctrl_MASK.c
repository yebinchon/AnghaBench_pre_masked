
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int val; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (struct v4l2_subdev*,int ,int) ;
 struct v4l2_subdev* FUNC_1 (struct v4l2_ctrl*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_ctrl *VAR_7)
{
 struct v4l2_subdev *VAR_8 = FUNC_1(VAR_7);
 int VAR_9 = VAR_7->val;

 switch (VAR_7->id) {
 case 131:
  if (VAR_9 < 0)
   VAR_9 = 127 - VAR_9;
  FUNC_0(VAR_8, VAR_0, VAR_9);
  break;
 case 130:
  FUNC_0(VAR_8, VAR_1, VAR_9);
  break;
 case 128:
  FUNC_0(VAR_8, VAR_4, VAR_9 >> 8);
  FUNC_0(VAR_8, VAR_5, (VAR_9 & 0xFF));
  break;
 case 129:
  FUNC_0(VAR_8, VAR_2, VAR_9 >> 8);
  FUNC_0(VAR_8, VAR_3, (VAR_9 & 0xFF));
  break;
 default:
  return -VAR_6;
 }

 return 0;
}

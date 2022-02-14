
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (struct i2c_client*,int,int) ;
 int FUNC_1 (struct cx25840_state*) ;
 struct v4l2_subdev* FUNC_2 (struct v4l2_ctrl*) ;
 struct cx25840_state* FUNC_3 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_ctrl *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_2(VAR_1);
 struct cx25840_state *VAR_3 = FUNC_3(VAR_2);
 struct i2c_client *VAR_4 = FUNC_4(VAR_2);

 switch (VAR_1->id) {
 case 131:
  FUNC_0(VAR_4, 0x414, VAR_1->val - 128);
  break;

 case 130:
  FUNC_0(VAR_4, 0x415, VAR_1->val << 1);
  break;

 case 128:
  if (FUNC_1(VAR_3)) {
   FUNC_0(VAR_4, 0x418, VAR_1->val << 1);
   FUNC_0(VAR_4, 0x419, VAR_1->val << 1);
  } else {
   FUNC_0(VAR_4, 0x420, VAR_1->val << 1);
   FUNC_0(VAR_4, 0x421, VAR_1->val << 1);
  }
  break;

 case 129:
  if (FUNC_1(VAR_3))
   FUNC_0(VAR_4, 0x41a, VAR_1->val);
  else
   FUNC_0(VAR_4, 0x422, VAR_1->val);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}

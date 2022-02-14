
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct i2c_client*,int ,int ,int) ;
 struct v4l2_subdev* FUNC_1 (struct v4l2_ctrl*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_ctrl *VAR_20)
{
 struct v4l2_subdev *VAR_21 = FUNC_1(VAR_20);
 struct i2c_client *VAR_22 = FUNC_2(VAR_21);
 int VAR_23 = -VAR_13;

 switch (VAR_20->id) {
 case 134:
  VAR_23 = FUNC_0(VAR_22, VAR_19,
      VAR_18, VAR_20->val);
  break;
 case 131:
  VAR_23 = FUNC_0(VAR_22, VAR_12,
      VAR_11, VAR_20->val);
  break;
 case 133:
  VAR_23 = FUNC_0(VAR_22, VAR_7, VAR_5,
      VAR_20->val << VAR_6);
  break;
 case 130:
  VAR_23 = FUNC_0(VAR_22, VAR_14, ~0, VAR_20->val);
  break;
 case 129:
  VAR_23 = FUNC_0(VAR_22, VAR_4,
      VAR_2,
      VAR_20->val << VAR_3);
  break;
 case 135:
  VAR_23 = FUNC_0(VAR_22, VAR_4,
      VAR_0,
      VAR_20->val << VAR_1);
  break;
 case 128:
  VAR_23 = FUNC_0(VAR_22, VAR_17,
      VAR_15,
      VAR_20->val << VAR_16);
  break;
 case 132:
  VAR_23 = FUNC_0(VAR_22, VAR_10,
      VAR_8,
      VAR_20->val << VAR_9);
  break;
 }

 return VAR_23;
}

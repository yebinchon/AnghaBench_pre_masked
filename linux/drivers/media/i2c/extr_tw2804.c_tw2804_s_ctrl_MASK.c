
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {int id; int val; } ;
struct tw2804 {int channel; int sd; } ;
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
 int FUNC_0 (struct i2c_client*,int,int ) ;
 struct tw2804* FUNC_1 (struct v4l2_ctrl*) ;
 struct i2c_client* FUNC_2 (int *) ;
 int FUNC_3 (struct i2c_client*,int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct v4l2_ctrl *VAR_11)
{
 struct tw2804 *VAR_12 = FUNC_1(VAR_11);
 struct i2c_client *VAR_13 = FUNC_2(&VAR_12->sd);
 int VAR_14;
 int VAR_15;

 switch (VAR_11->id) {
 case 137:
  VAR_14 = VAR_1;
  VAR_15 = FUNC_0(VAR_13, VAR_14, VAR_12->channel);
  if (VAR_15 < 0)
   return VAR_15;
  if (VAR_11->val == 0)
   VAR_15 &= ~(1 << 7);
  else
   VAR_15 |= 1 << 7;
  return FUNC_3(VAR_13, VAR_14, VAR_15, VAR_12->channel);

 case 133:
  VAR_14 = VAR_5;
  VAR_15 = FUNC_0(VAR_13, VAR_14, VAR_12->channel);
  if (VAR_15 < 0)
   return VAR_15;
  VAR_15 = (VAR_15 & ~(0x03)) | (VAR_11->val == 0 ? 0x02 : 0x03);
  return FUNC_3(VAR_13, VAR_14, VAR_15, VAR_12->channel);

 case 131:
  return FUNC_3(VAR_13, VAR_7, VAR_11->val, 0);

 case 134:
  return FUNC_3(VAR_13, VAR_4, VAR_11->val, 0);

 case 136:
  return FUNC_3(VAR_13, VAR_2, VAR_11->val, 0);

 case 129:
  return FUNC_3(VAR_13, VAR_9, VAR_11->val, 0);

 case 135:
  return FUNC_3(VAR_13, VAR_3,
    VAR_11->val, VAR_12->channel);

 case 132:
  return FUNC_3(VAR_13, VAR_6,
    VAR_11->val, VAR_12->channel);

 case 128:
  return FUNC_3(VAR_13, VAR_10,
    VAR_11->val, VAR_12->channel);

 case 130:
  return FUNC_3(VAR_13, VAR_8,
    VAR_11->val, VAR_12->channel);

 default:
  break;
 }
 return -VAR_0;
}

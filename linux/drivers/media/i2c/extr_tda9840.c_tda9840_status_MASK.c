
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int*,int) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,...) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;
 u8 VAR_6;

 VAR_5 = FUNC_0(VAR_4, &VAR_6, 1);
 if (VAR_5 != 1) {
  FUNC_1(1, VAR_2, VAR_3,
   "i2c_master_recv() failed\n");
  if (VAR_5 < 0)
   return VAR_5;
  return -VAR_1;
 }

 if (VAR_6 & 0x80) {
  FUNC_1(1, VAR_2, VAR_3,
   "TDA9840_DETECT: register contents invalid\n");
  return -VAR_0;
 }

 FUNC_1(1, VAR_2, VAR_3, "TDA9840_DETECT: byte: 0x%02x\n", VAR_6);
 return VAR_6 & 0x60;
}

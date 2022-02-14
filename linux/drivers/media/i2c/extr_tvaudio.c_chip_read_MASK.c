
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct CHIPSTATE {struct v4l2_subdev sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,unsigned char*,int) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,unsigned char) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_4(struct CHIPSTATE *VAR_2)
{
 struct v4l2_subdev *VAR_3 = &VAR_2->sd;
 struct i2c_client *VAR_4 = FUNC_2(VAR_3);
 unsigned char VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, &VAR_5, 1);
 if (VAR_6 != 1) {
  FUNC_3(VAR_3, "I/O error (read)\n");
  if (VAR_6 < 0)
   return VAR_6;
  return -VAR_0;
 }
 FUNC_1(1, VAR_1, VAR_3, "chip_read: 0x%x\n", VAR_5);
 return VAR_5;
}

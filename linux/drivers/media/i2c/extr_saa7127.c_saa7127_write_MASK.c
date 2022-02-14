
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ FUNC_0 (struct i2c_client*,int ,int ) ;
 int FUNC_1 (struct v4l2_subdev*,char*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
  if (FUNC_0(VAR_3, VAR_1, VAR_2) == 0)
   return 0;
 }
 FUNC_1(VAR_0, "I2C Write Problem\n");
 return -1;
}

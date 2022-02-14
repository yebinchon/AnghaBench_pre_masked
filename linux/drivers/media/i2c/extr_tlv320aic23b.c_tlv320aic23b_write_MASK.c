
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ FUNC_0 (struct i2c_client*,int,int) ;
 int FUNC_1 (struct v4l2_subdev*,char*,int,...) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0, int VAR_1, u16 VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 if ((VAR_1 < 0 || VAR_1 > 9) && (VAR_1 != 15)) {
  FUNC_1(VAR_0, "Invalid register R%d\n", VAR_1);
  return -1;
 }

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
  if (FUNC_0(VAR_3,
    (VAR_1 << 1) | (VAR_2 >> 8), VAR_2 & 0xff) == 0)
   return 0;
 FUNC_1(VAR_0, "I2C: cannot write %03x to register R%d\n", VAR_2, VAR_1);
 return -1;
}

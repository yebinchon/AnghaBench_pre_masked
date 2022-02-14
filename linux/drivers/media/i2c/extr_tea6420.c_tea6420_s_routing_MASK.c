
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int,...) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_3,
        u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_2(VAR_3);
 int VAR_8 = (VAR_5 >> 4) & 0xf;
 u8 VAR_9;
 int VAR_10;

 VAR_5 &= 0xf;
 FUNC_1(1, VAR_2, VAR_3, "i=%d, o=%d, g=%d\n", VAR_4, VAR_5, VAR_8);


 if (VAR_4 < 1 || VAR_4 > 6 || VAR_5 < 1 || VAR_5 > 4 || VAR_8 < 0 || VAR_8 > 6 || VAR_8 % 2 != 0)
  return -VAR_0;

 VAR_9 = ((VAR_5 - 1) << 5);
 VAR_9 |= (VAR_4 - 1);


 switch (VAR_8) {
 case 0:
  VAR_9 |= (3 << 3);
  break;
 case 2:
  VAR_9 |= (2 << 3);
  break;
 case 4:
  VAR_9 |= (1 << 3);
  break;
 case 6:
  break;
 }

 VAR_10 = FUNC_0(VAR_7, VAR_9);
 if (VAR_10) {
  FUNC_1(1, VAR_2, VAR_3,
   "i2c_smbus_write_byte() failed, ret:%d\n", VAR_10);
  return -VAR_1;
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tuner_i2c_props {int addr; struct i2c_adapter* adap; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct tuner_i2c_props*,unsigned char*,int) ;

int FUNC_2(struct i2c_adapter* VAR_1, u8 VAR_2)
{
 struct tuner_i2c_props VAR_3 = { .adap = VAR_1, .addr = VAR_2 };
 unsigned char VAR_4[7] = { 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff };

 int VAR_5;

 if ((VAR_5 = FUNC_1(&VAR_3, VAR_4, 7))< 5) {
  FUNC_0("It is not a TEA5767. Received %i bytes.\n", VAR_5);
  return -VAR_0;
 }


 if (VAR_4[0] == VAR_4[1] && VAR_4[0] == VAR_4[2] &&
     VAR_4[0] == VAR_4[3] && VAR_4[0] == VAR_4[4]) {
  FUNC_0("All bytes are equal. It is not a TEA5767\n");
  return -VAR_0;
 }






 if (((VAR_4[3] & 0x0f) != 0x00) || (VAR_4[4] != 0x00)) {
  FUNC_0("Chip ID is not zero. It is not a TEA5767\n");
  return -VAR_0;
 }


 return 0;
}

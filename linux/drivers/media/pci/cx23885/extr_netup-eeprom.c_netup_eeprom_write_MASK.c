
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct i2c_msg {unsigned char* buf; int len; int flags; int addr; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;

int FUNC_3(struct i2c_adapter *VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4;
 unsigned char VAR_5[2];


 struct i2c_msg VAR_6[] = {
  {
   .addr = VAR_0,
   .flags = 0,
   .buf = &VAR_5[0],
   .len = 2
  }
 };

 VAR_5[0] = VAR_2;
 VAR_5[1] = VAR_3;

 VAR_4 = FUNC_0(VAR_1, VAR_6, 1);

 if (VAR_4 != 1) {
  FUNC_2("eeprom i2c write error, status=%d\n", VAR_4);
  return -1;
 }

 FUNC_1(10);
 return 0;
}

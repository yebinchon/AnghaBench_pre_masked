
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct i2c_msg {unsigned char* buf; int len; int flags; int addr; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_1 (char*,int) ;

int FUNC_2(struct i2c_adapter *VAR_2, u8 VAR_3)
{
 int VAR_4;
 unsigned char VAR_5[2];


 struct i2c_msg VAR_6[] = {
  {
   .addr = VAR_0,
   .flags = 0,
   .buf = &VAR_5[0],
   .len = 1
  }, {
   .addr = VAR_0,
   .flags = VAR_1,
   .buf = &VAR_5[1],
   .len = 1
  }

 };

 VAR_5[0] = VAR_3;
 VAR_5[1] = 0x0;

 VAR_4 = FUNC_0(VAR_2, VAR_6, 2);

 if (VAR_4 != 2) {
  FUNC_1("eeprom i2c read error, status=%d\n", VAR_4);
  return -1;
 }

 return VAR_5[1];
}

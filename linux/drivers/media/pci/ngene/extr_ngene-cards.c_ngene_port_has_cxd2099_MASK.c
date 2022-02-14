
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;

int FUNC_1(struct i2c_adapter *VAR_1, u8 *VAR_2)
{
 u8 VAR_3;
 u8 VAR_4[4] = { 0xe0, 0x00, 0x00, 0x00 }, VAR_5[4];
 struct i2c_msg VAR_6[2] = {{ .addr = 0x40, .flags = 0,
        .buf = VAR_4, .len = 4 },
      { .addr = 0x40, .flags = VAR_0,
        .buf = VAR_5, .len = 4 } };
 VAR_3 = FUNC_0(VAR_1, VAR_6, 2);
 if (VAR_3 != 2)
  return 0;

 if (VAR_5[0] == 0x02 && VAR_5[1] == 0x2b && VAR_5[3] == 0x43)
  *VAR_2 = 2;
 else
  *VAR_2 = 1;
 return 1;
}

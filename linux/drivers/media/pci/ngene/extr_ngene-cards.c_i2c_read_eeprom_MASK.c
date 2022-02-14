
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct TYPE_2__ {struct device* parent; } ;
struct i2c_adapter {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_2,
      u8 VAR_3, u16 VAR_4, u8 *VAR_5, int VAR_6)
{
 struct device *VAR_7 = VAR_2->dev.parent;
 u8 VAR_8[2] = {(VAR_4 >> 8), (VAR_4 & 0xff)};
 struct i2c_msg VAR_9[2] = {{.addr = VAR_3, .flags = 0,
       .buf = VAR_8, .len = 2 },
      {.addr = VAR_3, .flags = VAR_1,
       .buf = VAR_5, .len = VAR_6} };

 if (FUNC_1(VAR_2, VAR_9, 2) != 2) {
  FUNC_0(VAR_7, "Error reading EEPROM\n");
  return -VAR_0;
 }
 return 0;
}

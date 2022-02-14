
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
typedef int m ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_1,
       u8 VAR_2, u16 VAR_3, u8 VAR_4)
{
 struct device *VAR_5 = VAR_1->dev.parent;
 u8 VAR_6[3] = {(VAR_3 >> 8), (VAR_3 & 0xff), VAR_4};
 struct i2c_msg VAR_7 = {.addr = VAR_2, .flags = 0, .buf = VAR_6,
         .len = sizeof(VAR_6)};

 if (FUNC_1(VAR_1, &VAR_7, 1) != 1) {
  FUNC_0(VAR_5, "Error writing EEPROM!\n");
  return -VAR_0;
 }
 return 0;
}

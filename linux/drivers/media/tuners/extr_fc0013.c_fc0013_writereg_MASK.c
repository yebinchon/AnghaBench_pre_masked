
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct fc0013_priv {int i2c; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct fc0013_priv *VAR_1, u8 VAR_2, u8 VAR_3)
{
 u8 VAR_4[2] = {VAR_2, VAR_3};
 struct i2c_msg VAR_5 = {
  .addr = VAR_1->addr, .flags = 0, .buf = VAR_4, .len = 2
 };

 if (FUNC_1(VAR_1->i2c, &VAR_5, 1) != 1) {
  FUNC_0("I2C write reg failed, reg: %02x, val: %02x", VAR_2, VAR_3);
  return -VAR_0;
 }
 return 0;
}

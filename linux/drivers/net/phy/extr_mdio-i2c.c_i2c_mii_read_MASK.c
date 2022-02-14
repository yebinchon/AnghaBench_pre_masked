
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mii_bus {struct i2c_adapter* priv; } ;
struct i2c_msg {int addr; int len; int* buf; scalar_t__ flags; } ;
struct i2c_adapter {int dummy; } ;
typedef int data ;


 int FUNC_0 (struct i2c_msg*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_1, int VAR_2, int VAR_3)
{
 struct i2c_adapter *VAR_4 = VAR_1->priv;
 struct i2c_msg VAR_5[2];
 u8 VAR_6[2], VAR_7 = VAR_3;
 int VAR_8, VAR_9;

 if (!FUNC_2(VAR_2))
  return 0xffff;

 VAR_8 = FUNC_1(VAR_2);
 VAR_5[0].addr = VAR_8;
 VAR_5[0].flags = 0;
 VAR_5[0].len = 1;
 VAR_5[0].buf = &VAR_7;
 VAR_5[1].addr = VAR_8;
 VAR_5[1].flags = VAR_0;
 VAR_5[1].len = sizeof(VAR_6);
 VAR_5[1].buf = VAR_6;

 VAR_9 = FUNC_3(VAR_4, VAR_5, FUNC_0(VAR_5));
 if (VAR_9 != FUNC_0(VAR_5))
  return 0xffff;

 return VAR_6[0] << 8 | VAR_6[1];
}

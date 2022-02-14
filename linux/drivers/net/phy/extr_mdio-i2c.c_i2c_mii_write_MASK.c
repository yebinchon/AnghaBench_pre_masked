
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mii_bus {struct i2c_adapter* priv; } ;
struct i2c_msg {int len; int* buf; scalar_t__ flags; int addr; } ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_0, int VAR_1, int VAR_2, u16 VAR_3)
{
 struct i2c_adapter *VAR_4 = VAR_0->priv;
 struct i2c_msg VAR_5;
 int VAR_6;
 u8 VAR_7[3];

 if (!FUNC_1(VAR_1))
  return 0;

 VAR_7[0] = VAR_2;
 VAR_7[1] = VAR_3 >> 8;
 VAR_7[2] = VAR_3;

 VAR_5.addr = FUNC_0(VAR_1);
 VAR_5.flags = 0;
 VAR_5.len = 3;
 VAR_5.buf = VAR_7;

 VAR_6 = FUNC_2(VAR_4, &VAR_5, 1);

 return VAR_6 < 0 ? VAR_6 : 0;
}

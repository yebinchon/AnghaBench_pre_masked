
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int addr; int len; int* buf; scalar_t__ flags; } ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_adapter *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 u8 VAR_4[2] = { VAR_2, VAR_3 };
 struct i2c_msg VAR_5;

 VAR_5.flags = 0;
 VAR_5.addr = VAR_1 / 2;
 VAR_5.len = 2;
 VAR_5.buf = VAR_4;
 return FUNC_0(VAR_0, &VAR_5, 1);
}

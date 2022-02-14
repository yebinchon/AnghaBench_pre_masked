
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_adapter *VAR_1, u8 VAR_2, u8 *VAR_3)
{
 struct i2c_msg VAR_4[1] = {{.addr = VAR_2, .flags = VAR_0,
       .buf = VAR_3, .len = 1 } };
 return (FUNC_0(VAR_1, VAR_4, 1) == 1) ? 0 : -1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int addr; int len; int * buf; int flags; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_adapter *VAR_2,u8 VAR_3,u8 *VAR_4)
{
 struct i2c_msg VAR_5[2] = {
  { .addr = 0x50, .flags = 0, .buf = &VAR_3, .len = 1 },
  { .addr = 0x50, .flags = VAR_1, .buf = VAR_4, .len = 1 },
 };
 if (FUNC_0(VAR_2, VAR_5, 2) != 2) return -VAR_0;
 return 0;
}

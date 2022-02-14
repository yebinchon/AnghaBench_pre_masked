
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int * buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
typedef int buffer ;


 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_0, u8 VAR_1, u8 VAR_2)
{
 u8 VAR_3[2] = { VAR_1, VAR_2 };
 struct i2c_msg VAR_4;
 int VAR_5;

 VAR_4.addr = VAR_0->addr;
 VAR_4.flags = 0;
 VAR_4.len = sizeof(VAR_3);
 VAR_4.buf = VAR_3;

 VAR_5 = FUNC_0(VAR_0->adapter, &VAR_4, 1);
 if (VAR_5 < 0)
  return VAR_5;

 return 0;
}

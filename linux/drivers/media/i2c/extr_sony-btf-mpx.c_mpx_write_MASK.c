
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;


 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 u8 VAR_4[5];
 struct i2c_msg VAR_5;

 VAR_4[0] = VAR_1;
 VAR_4[1] = VAR_2 >> 8;
 VAR_4[2] = VAR_2 & 0xff;
 VAR_4[3] = VAR_3 >> 8;
 VAR_4[4] = VAR_3 & 0xff;
 VAR_5.addr = VAR_0->addr;
 VAR_5.flags = 0;
 VAR_5.len = 5;
 VAR_5.buf = VAR_4;
 FUNC_0(VAR_0->adapter, &VAR_5, 1);
 return 0;
}

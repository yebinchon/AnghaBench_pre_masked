
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef int u16 ;
struct i2c_msg {unsigned char* buf; int len; scalar_t__ flags; int addr; } ;
struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1, const u16 VAR_2, const u8 VAR_3)
{
 struct i2c_adapter *VAR_4 = VAR_1->adapter;
 struct i2c_msg VAR_5;
 unsigned char VAR_6[3];
 int VAR_7;

 VAR_5.addr = VAR_1->addr;
 VAR_5.buf = VAR_6;
 VAR_5.len = 3;
 VAR_5.flags = 0;

 VAR_6[0] = VAR_2 >> 8;
 VAR_6[1] = VAR_2 & 0xff;
 VAR_6[2] = VAR_3;

 VAR_7 = FUNC_0(VAR_4, &VAR_5, 1);

 FUNC_1(2);

 return VAR_7 == 1 ? 0 : -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int * buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_2, u8 VAR_3, int VAR_4,
      u8 *VAR_5)
{
 struct i2c_msg VAR_6;
 int VAR_7;







 VAR_6.addr = VAR_2->addr;
 VAR_6.flags = 0;
 VAR_6.len = 1;
 VAR_6.buf = &VAR_3;

 VAR_7 = FUNC_0(VAR_2->adapter, &VAR_6, 1);
 if (VAR_7 != 1) {
  if (VAR_7 < 0)
   return VAR_7;
  else
   return -VAR_0;
 }


 VAR_6.addr = VAR_2->addr;
 VAR_6.flags = VAR_1;
 VAR_6.len = VAR_4;
 VAR_6.buf = VAR_5;

 VAR_7 = FUNC_0(VAR_2->adapter, &VAR_6, 1);
 if (VAR_7 == 1)
  return 0;
 else if (VAR_7 < 0)
  return VAR_7;
 else
  return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_mem {int nr; unsigned char* data; int loc; } ;
struct i2c_msg {int len; unsigned char* buf; int flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_3, struct rtc_mem *VAR_4)
{
 unsigned char VAR_5[1];
 struct i2c_msg VAR_6[2] = {
  {
   .addr = VAR_3->addr,
   .flags = 0,
   .len = 1,
   .buf = VAR_5,
  }, {
   .addr = VAR_3->addr,
   .flags = VAR_2,
   .len = VAR_4->nr,
   .buf = VAR_4->data,
  }
 };

 if (VAR_4->loc < 8)
  return -VAR_0;

 VAR_5[0] = VAR_4->loc;

 return FUNC_0(VAR_3->adapter, VAR_6, 2) == 2 ? 0 : -VAR_1;
}

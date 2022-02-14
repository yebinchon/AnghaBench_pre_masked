
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u32 ;
struct i2c_msg {unsigned char* buf; int len; int flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_3,
            enum rc_proto *VAR_4,
            u32 *VAR_5)
{
 unsigned char VAR_6, VAR_7, VAR_8;

 struct i2c_msg VAR_9[] = {
  {
   .addr = VAR_3->addr,
   .flags = 0,
   .buf = &VAR_6, .len = 1
  }, {
   .addr = VAR_3->addr,
   .flags = VAR_1,
   .buf = &VAR_7,
   .len = 1
  }
 };

 VAR_6 = 0x10;
 if (FUNC_0(VAR_3->adapter, VAR_9, 2) != 2)
  return -VAR_0;
 if (VAR_7 == 0x00)
  return 0;

 VAR_6 = 0x00;
 VAR_9[1].buf = &VAR_8;
 if (FUNC_0(VAR_3->adapter, VAR_9, 2) != 2)
  return -VAR_0;
 if (VAR_8 == 0x00)
  return 0;

 *VAR_4 = VAR_2;
 *VAR_5 = VAR_8;
 return 1;
}

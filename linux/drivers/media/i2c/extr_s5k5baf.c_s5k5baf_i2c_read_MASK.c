
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct s5k5baf {int error; int sd; } ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;
 int FUNC_3 (int,int ,struct i2c_client*,char*,int ,int ) ;
 int FUNC_4 (struct i2c_client*,char*,int) ;
 struct i2c_client* FUNC_5 (int *) ;

__attribute__((used)) static u16 FUNC_6(struct s5k5baf *VAR_2, u16 VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_5(&VAR_2->sd);
 __be16 VAR_5, VAR_6;
 u16 VAR_7;
 struct i2c_msg VAR_8[] = {
  { .addr = VAR_4->addr, .flags = 0,
    .len = 2, .buf = (u8 *)&VAR_5 },
  { .addr = VAR_4->addr, .flags = VAR_0,
    .len = 2, .buf = (u8 *)&VAR_6 },
 };
 int VAR_9;

 if (VAR_2->error)
  return 0;

 VAR_5 = FUNC_1(VAR_3);
 VAR_9 = FUNC_2(VAR_4->adapter, VAR_8, 2);
 VAR_7 = FUNC_0(VAR_6);

 FUNC_3(3, VAR_1, VAR_4, "i2c_read: 0x%04x : 0x%04x\n", VAR_3, VAR_7);

 if (VAR_9 != 2) {
  FUNC_4(VAR_4, "i2c_read: error during transfer (%d)\n", VAR_9);
  VAR_2->error = VAR_9;
 }
 return VAR_7;
}

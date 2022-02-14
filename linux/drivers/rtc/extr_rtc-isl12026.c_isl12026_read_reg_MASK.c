
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int* buf; int flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;
typedef int addr ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2, int VAR_3)
{
 u8 VAR_4[] = {0, VAR_3};
 u8 VAR_5;
 int VAR_6;

 struct i2c_msg VAR_7[] = {
  {
   .addr = VAR_2->addr,
   .flags = 0,
   .len = sizeof(VAR_4),
   .buf = VAR_4
  }, {
   .addr = VAR_2->addr,
   .flags = VAR_1,
   .len = 1,
   .buf = &VAR_5
  }
 };

 VAR_6 = FUNC_2(VAR_2->adapter, VAR_7, FUNC_0(VAR_7));
 if (VAR_6 != FUNC_0(VAR_7)) {
  FUNC_1(&VAR_2->dev, "read reg error, ret=%d\n", VAR_6);
  VAR_6 = VAR_6 < 0 ? VAR_6 : -VAR_0;
 } else {
  VAR_6 = VAR_5;
 }

 return VAR_6;
}

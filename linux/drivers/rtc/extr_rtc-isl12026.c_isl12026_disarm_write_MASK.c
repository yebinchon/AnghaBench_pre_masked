
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;
typedef int op ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_2)
{
 int VAR_3;
 u8 VAR_4[3] = {0, VAR_1, 0};
 struct i2c_msg VAR_5 = {
  .addr = VAR_2->addr,
  .flags = 0,
  .len = sizeof(VAR_4),
  .buf = VAR_4
 };

 VAR_3 = FUNC_1(VAR_2->adapter, &VAR_5, 1);
 if (VAR_3 != 1) {
  FUNC_0(&VAR_2->dev,
   "write error SR, ret=%d\n", VAR_3);
  VAR_3 = VAR_3 < 0 ? VAR_3 : -VAR_0;
 } else {
  VAR_3 = 0;
 }

 return VAR_3;
}

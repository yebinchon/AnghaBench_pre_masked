
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int* buf; int flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_4)
{
 int VAR_5;
 u8 VAR_6[3];
 struct i2c_msg VAR_7 = {
  .addr = VAR_4->addr,
  .flags = 0,
  .len = 1,
  .buf = VAR_6
 };


 VAR_6[0] = 0;
 VAR_6[1] = VAR_1;
 VAR_6[2] = VAR_3;
 VAR_7.len = 3;
 VAR_5 = FUNC_1(VAR_4->adapter, &VAR_7, 1);
 if (VAR_5 != 1) {
  FUNC_0(&VAR_4->dev, "write error SR.WEL, ret=%d\n", VAR_5);
  VAR_5 = VAR_5 < 0 ? VAR_5 : -VAR_0;
  goto out;
 }


 VAR_6[2] = VAR_3 | VAR_2;
 VAR_7.len = 3;
 VAR_5 = FUNC_1(VAR_4->adapter, &VAR_7, 1);
 if (VAR_5 != 1) {
  FUNC_0(&VAR_4->dev,
   "write error SR.WEL|SR.RWEL, ret=%d\n", VAR_5);
  VAR_5 = VAR_5 < 0 ? VAR_5 : -VAR_0;
  goto out;
 } else {
  VAR_5 = 0;
 }
out:
 return VAR_5;
}

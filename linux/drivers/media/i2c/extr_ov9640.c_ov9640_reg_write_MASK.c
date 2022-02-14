
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct i2c_msg {int len; unsigned char* buf; int flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;


 int FUNC_0 (int *,char*,unsigned char) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (struct i2c_client*,unsigned char,unsigned char*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0, u8 VAR_1, u8 VAR_2)
{
 int VAR_3;
 u8 VAR_4;
 unsigned char VAR_5[2] = { VAR_1, VAR_2 };
 struct i2c_msg VAR_6 = {
  .addr = VAR_0->addr,
  .flags = 0,
  .len = 2,
  .buf = VAR_5,
 };

 VAR_3 = FUNC_1(VAR_0->adapter, &VAR_6, 1);
 if (VAR_3 < 0) {
  FUNC_0(&VAR_0->dev, "Failed writing register 0x%02x!\n", VAR_1);
  return VAR_3;
 }


 VAR_3 = FUNC_2(VAR_0, VAR_1, &VAR_4);
 if (VAR_3)
  FUNC_0(&VAR_0->dev,
   "Failed reading back register 0x%02x!\n", VAR_1);

 return 0;
}

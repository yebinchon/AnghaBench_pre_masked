
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int flags; int * buf; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1, u8 VAR_2, u8 *VAR_3)
{
 int VAR_4;
 u8 VAR_5 = VAR_2;
 struct i2c_msg VAR_6 = {
  .addr = VAR_1->addr,
  .flags = 0,
  .len = 1,
  .buf = &VAR_5,
 };

 VAR_4 = FUNC_1(VAR_1->adapter, &VAR_6, 1);
 if (VAR_4 < 0)
  goto err;

 VAR_6.flags = VAR_0;
 VAR_4 = FUNC_1(VAR_1->adapter, &VAR_6, 1);
 if (VAR_4 < 0)
  goto err;

 *VAR_3 = VAR_5;
 return 0;

err:
 FUNC_0(&VAR_1->dev, "Failed reading register 0x%02x!\n", VAR_2);
 return VAR_4;
}

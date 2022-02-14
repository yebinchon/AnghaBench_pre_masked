
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int* buf; int flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;
typedef int op ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_2, int VAR_3, u8 VAR_4)
{
 int VAR_5;
 u8 VAR_6[3] = {0, VAR_3, VAR_4};
 struct i2c_msg VAR_7 = {
  .addr = VAR_2->addr,
  .flags = 0,
  .len = sizeof(VAR_6),
  .buf = VAR_6
 };

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_2->adapter, &VAR_7, 1);
 if (VAR_5 != 1) {
  FUNC_0(&VAR_2->dev, "write error CCR, ret=%d\n", VAR_5);
  VAR_5 = VAR_5 < 0 ? VAR_5 : -VAR_0;
  goto out;
 }

 FUNC_4(VAR_1);

 VAR_5 = FUNC_3(VAR_2);
out:
 return VAR_5;
}

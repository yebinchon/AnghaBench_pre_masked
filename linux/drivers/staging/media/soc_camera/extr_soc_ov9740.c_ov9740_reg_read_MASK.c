
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1, u16 VAR_2, u8 *VAR_3)
{
 int VAR_4;
 struct i2c_msg VAR_5[] = {
  {
   .addr = VAR_1->addr,
   .flags = 0,
   .len = 2,
   .buf = (u8 *)&VAR_2,
  },
  {
   .addr = VAR_1->addr,
   .flags = VAR_0,
   .len = 1,
   .buf = VAR_3,
  },
 };

 VAR_2 = FUNC_2(VAR_2);

 VAR_4 = FUNC_1(VAR_1->adapter, VAR_5, 2);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_1->dev, "Failed reading register 0x%04x!\n", VAR_2);
  return VAR_4;
 }

 return 0;
}

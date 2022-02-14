
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef int u16 ;
struct i2c_msg {int len; int const* buf; int flags; int addr; } ;
struct i2c_client {int addr; int dev; int adapter; } ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int const,int ) ;
 int FUNC_2 (int ,struct i2c_msg*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1, const u16 VAR_2)
{
 u8 VAR_3[2] = {VAR_2 >> 8, VAR_2 & 0xff};
 int VAR_4;
 struct i2c_msg VAR_5[] = {
  {
   .addr = VAR_1->addr,
   .flags = 0,
   .len = 2,
   .buf = VAR_3,
  }, {
   .addr = VAR_1->addr,
   .flags = VAR_0,
   .len = 2,
   .buf = VAR_3,
  },
 };

 VAR_4 = FUNC_2(VAR_1->adapter, VAR_5, FUNC_0(VAR_5));
 if (VAR_4 < 0) {
  FUNC_1(&VAR_1->dev, "Reading register %x from %x failed\n",
    VAR_2, VAR_1->addr);
  return VAR_4;
 }

 return VAR_3[0] & 0xff;
}

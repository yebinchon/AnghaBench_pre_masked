
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct fc0011_priv {TYPE_1__* i2c; int addr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (TYPE_1__*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct fc0011_priv *VAR_2, u8 VAR_3, u8 *VAR_4)
{
 u8 VAR_5;
 struct i2c_msg VAR_6[2] = {
  { .addr = VAR_2->addr,
    .flags = 0, .buf = &VAR_3, .len = 1 },
  { .addr = VAR_2->addr,
    .flags = VAR_1, .buf = VAR_4 ? : &VAR_5, .len = 1 },
 };

 if (FUNC_1(VAR_2->i2c, VAR_6, 2) != 2) {
  FUNC_0(&VAR_2->i2c->dev,
   "I2C read failed, reg: %02x\n", VAR_3);
  return -VAR_0;
 }

 return 0;
}

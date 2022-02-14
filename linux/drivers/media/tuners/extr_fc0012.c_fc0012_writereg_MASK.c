
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct fc0012_priv {TYPE_2__* i2c; TYPE_1__* cfg; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int i2c_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct fc0012_priv *VAR_2, u8 VAR_3, u8 VAR_4)
{
 u8 VAR_5[2] = {VAR_3, VAR_4};
 struct i2c_msg VAR_6 = {
  .addr = VAR_2->cfg->i2c_address, .flags = 0, .buf = VAR_5, .len = 2
 };

 if (FUNC_1(VAR_2->i2c, &VAR_6, 1) != 1) {
  FUNC_0(&VAR_2->i2c->dev,
   "%s: I2C write reg failed, reg: %02x, val: %02x\n",
   VAR_1, VAR_3, VAR_4);
  return -VAR_0;
 }
 return 0;
}

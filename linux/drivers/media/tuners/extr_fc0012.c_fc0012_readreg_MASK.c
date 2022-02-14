
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
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct fc0012_priv *VAR_3, u8 VAR_4, u8 *VAR_5)
{
 struct i2c_msg VAR_6[2] = {
  { .addr = VAR_3->cfg->i2c_address, .flags = 0,
   .buf = &VAR_4, .len = 1 },
  { .addr = VAR_3->cfg->i2c_address, .flags = VAR_1,
   .buf = VAR_5, .len = 1 },
 };

 if (FUNC_1(VAR_3->i2c, VAR_6, 2) != 2) {
  FUNC_0(&VAR_3->i2c->dev,
   "%s: I2C read reg failed, reg: %02x\n",
   VAR_2, VAR_4);
  return -VAR_0;
 }
 return 0;
}

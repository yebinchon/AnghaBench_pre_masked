
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smiapp_sensor {TYPE_1__* src; } ;
struct smiapp_reg_8 {int val; int reg; } ;
struct i2c_client {int dev; } ;
struct TYPE_2__ {int sd; } ;


 int FUNC_0 (int *,char*,int,int ,int ) ;
 int FUNC_1 (struct smiapp_sensor*,int ,int ) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct smiapp_sensor *VAR_0,
      const struct smiapp_reg_8 *VAR_1, int VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(&VAR_0->src->sd);
 int VAR_4;

 for (; VAR_2 > 0; VAR_2--, VAR_1++) {
  VAR_4 = FUNC_1(VAR_0, VAR_1->reg, VAR_1->val);
  if (VAR_4 < 0) {
   FUNC_0(&VAR_3->dev,
    "error %d writing reg 0x%4.4x, val 0x%2.2x",
    VAR_4, VAR_1->reg, VAR_1->val);
   return VAR_4;
  }
 }

 return 0;
}

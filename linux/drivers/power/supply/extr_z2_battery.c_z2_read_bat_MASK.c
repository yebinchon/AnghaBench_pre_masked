
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct z2_charger {TYPE_1__* info; int client; } ;
struct TYPE_2__ {int batt_mult; int batt_div; int batt_I2C_reg; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct z2_charger *VAR_0)
{
 int VAR_1;
 VAR_1 = FUNC_0(VAR_0->client,
     VAR_0->info->batt_I2C_reg);
 if (VAR_1 < 0)
  return 0;

 return VAR_1 * VAR_0->info->batt_mult / VAR_0->info->batt_div;
}

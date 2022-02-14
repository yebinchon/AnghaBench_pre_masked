
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct watchdog_device {int dummy; } ;
struct mlxreg_wdt {size_t tleft_idx; int regmap; TYPE_1__* pdata; } ;
struct mlxreg_core_data {int reg; } ;
struct TYPE_2__ {struct mlxreg_core_data* data; } ;


 int FUNC_0 (int ,int ,unsigned int*) ;
 struct mlxreg_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static unsigned int FUNC_2(struct watchdog_device *VAR_0)
{
 struct mlxreg_wdt *VAR_1 = FUNC_1(VAR_0);
 struct mlxreg_core_data *VAR_2 = &VAR_1->pdata->data[VAR_1->tleft_idx];
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1->regmap, VAR_2->reg, &VAR_3);

 return VAR_4 == 0 ? VAR_3 : 0;
}

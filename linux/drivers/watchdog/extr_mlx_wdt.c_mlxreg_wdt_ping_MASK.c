
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {int dummy; } ;
struct mlxreg_wdt {size_t ping_idx; int regmap; TYPE_1__* pdata; } ;
struct mlxreg_core_data {int bit; int mask; int reg; } ;
struct TYPE_2__ {struct mlxreg_core_data* data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int *,int,int) ;
 struct mlxreg_wdt* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_0)
{
 struct mlxreg_wdt *VAR_1 = FUNC_2(VAR_0);
 struct mlxreg_core_data *VAR_2 = &VAR_1->pdata->data[VAR_1->ping_idx];

 return FUNC_1(VAR_1->regmap, VAR_2->reg,
           ~VAR_2->mask, FUNC_0(VAR_2->bit),
           ((void*)0), 0, 1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct watchdog_device {int timeout; } ;
struct mlxreg_wdt {size_t timeout_idx; scalar_t__ wdt_type; int regmap; TYPE_1__* pdata; } ;
struct mlxreg_core_data {int mask; int reg; } ;
struct TYPE_2__ {struct mlxreg_core_data* data; } ;


 unsigned int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (struct watchdog_device*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (struct watchdog_device*) ;
 struct mlxreg_wdt* FUNC_7 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_8(struct watchdog_device *VAR_2,
      unsigned int VAR_3)
{
 struct mlxreg_wdt *VAR_4 = FUNC_7(VAR_2);
 struct mlxreg_core_data *VAR_5 = &VAR_4->pdata->data[VAR_4->timeout_idx];
 u32 VAR_6, VAR_7, VAR_8;
 int VAR_9;

 if (VAR_4->wdt_type == VAR_1) {
  VAR_9 = FUNC_4(VAR_4->regmap, VAR_5->reg, &VAR_6);
  if (VAR_9)
   return VAR_9;

  VAR_8 = FUNC_3(VAR_3 * VAR_0);
  VAR_6 = (VAR_6 & VAR_5->mask) | VAR_8;

  VAR_7 = FUNC_0(VAR_8) / VAR_0;
 } else {
  VAR_7 = VAR_3;
  VAR_6 = VAR_3;
 }

 VAR_2->timeout = VAR_7;
 VAR_9 = FUNC_5(VAR_4->regmap, VAR_5->reg, VAR_6);

 if (!VAR_9) {




  if (FUNC_6(VAR_2)) {
   VAR_9 = FUNC_2(VAR_2);
   if (!VAR_9)
    VAR_9 = FUNC_1(VAR_2);
  }
 }

 return VAR_9;
}

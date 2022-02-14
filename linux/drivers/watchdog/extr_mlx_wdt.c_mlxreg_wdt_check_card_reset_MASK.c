
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int bootstatus; int parent; TYPE_2__* info; } ;
struct mlxreg_wdt {size_t reset_idx; TYPE_3__ wdd; int regmap; TYPE_1__* pdata; } ;
struct mlxreg_core_data {int mask; int reg; } ;
struct TYPE_5__ {int options; } ;
struct TYPE_4__ {struct mlxreg_core_data* data; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_2(struct mlxreg_wdt *VAR_2)
{
 struct mlxreg_core_data *VAR_3;
 u32 VAR_4;
 int VAR_5;

 if (VAR_2->reset_idx == -VAR_0)
  return;

 if (!(VAR_2->wdd.info->options & VAR_1))
  return;

 VAR_3 = &VAR_2->pdata->data[VAR_2->reset_idx];
 VAR_5 = FUNC_1(VAR_2->regmap, VAR_3->reg, &VAR_4);
 if (!VAR_5) {
  if (VAR_4 & ~VAR_3->mask) {
   VAR_2->wdd.bootstatus = VAR_1;
   FUNC_0(VAR_2->wdd.parent,
     "watchdog previously reset the CPU\n");
  }
 }
}

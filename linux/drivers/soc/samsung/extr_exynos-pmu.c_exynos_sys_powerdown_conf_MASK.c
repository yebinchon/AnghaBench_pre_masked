
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct exynos_pmu_data {int (* powerdown_conf_extra ) (int) ;TYPE_1__* pmu_config; int (* powerdown_conf ) (int) ;} ;
typedef enum sys_powerdown { ____Placeholder_sys_powerdown } sys_powerdown ;
struct TYPE_4__ {struct exynos_pmu_data* pmu_data; } ;
struct TYPE_3__ {scalar_t__ offset; int * val; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

void FUNC_3(enum sys_powerdown VAR_2)
{
 unsigned int VAR_3;
 const struct exynos_pmu_data *VAR_4;

 if (!VAR_1 || !VAR_1->pmu_data)
  return;

 VAR_4 = VAR_1->pmu_data;

 if (VAR_4->powerdown_conf)
  VAR_4->powerdown_conf(VAR_2);

 if (VAR_4->pmu_config) {
  for (VAR_3 = 0; (VAR_4->pmu_config[VAR_3].offset != VAR_0); VAR_3++)
   FUNC_0(VAR_4->pmu_config[VAR_3].val[VAR_2],
     VAR_4->pmu_config[VAR_3].offset);
 }

 if (VAR_4->powerdown_conf_extra)
  VAR_4->powerdown_conf_extra(VAR_2);
}

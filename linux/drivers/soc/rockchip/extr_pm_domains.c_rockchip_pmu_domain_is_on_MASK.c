
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rockchip_pmu {TYPE_1__* info; int regmap; } ;
struct rockchip_pm_domain {TYPE_2__* info; struct rockchip_pmu* pmu; } ;
struct TYPE_4__ {unsigned int status_mask; } ;
struct TYPE_3__ {int status_offset; } ;


 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (struct rockchip_pm_domain*) ;

__attribute__((used)) static bool FUNC_2(struct rockchip_pm_domain *VAR_0)
{
 struct rockchip_pmu *VAR_1 = VAR_0->pmu;
 unsigned int VAR_2;


 if (VAR_0->info->status_mask == 0)
  return !FUNC_1(VAR_0);

 FUNC_0(VAR_1->regmap, VAR_1->info->status_offset, &VAR_2);


 return !(VAR_2 & VAR_0->info->status_mask);
}

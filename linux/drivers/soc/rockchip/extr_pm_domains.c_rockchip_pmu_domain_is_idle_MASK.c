
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rockchip_pmu {TYPE_1__* info; int regmap; } ;
struct rockchip_pm_domain {struct rockchip_domain_info* info; struct rockchip_pmu* pmu; } ;
struct rockchip_domain_info {unsigned int idle_mask; } ;
struct TYPE_2__ {int idle_offset; } ;


 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static bool FUNC_1(struct rockchip_pm_domain *VAR_0)
{
 struct rockchip_pmu *VAR_1 = VAR_0->pmu;
 const struct rockchip_domain_info *VAR_2 = VAR_0->info;
 unsigned int VAR_3;

 FUNC_0(VAR_1->regmap, VAR_1->info->idle_offset, &VAR_3);
 return (VAR_3 & VAR_2->idle_mask) == VAR_2->idle_mask;
}

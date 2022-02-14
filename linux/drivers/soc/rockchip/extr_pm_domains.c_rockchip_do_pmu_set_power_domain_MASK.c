
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rockchip_pmu {int dev; TYPE_1__* info; int regmap; } ;
struct generic_pm_domain {int name; } ;
struct rockchip_pm_domain {TYPE_2__* info; struct generic_pm_domain genpd; struct rockchip_pmu* pmu; } ;
struct TYPE_4__ {int pwr_mask; int pwr_w_mask; } ;
struct TYPE_3__ {int pwr_offset; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,struct rockchip_pm_domain*,int,int,int ,int) ;
 int FUNC_3 (int ,int ,int,unsigned int) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct rockchip_pm_domain *VAR_2,
          bool VAR_3)
{
 struct rockchip_pmu *VAR_4 = VAR_2->pmu;
 struct generic_pm_domain *VAR_5 = &VAR_2->genpd;
 bool VAR_6;

 if (VAR_2->info->pwr_mask == 0)
  return;
 else if (VAR_2->info->pwr_w_mask)
  FUNC_4(VAR_4->regmap, VAR_4->info->pwr_offset,
        VAR_3 ? VAR_2->info->pwr_w_mask :
        (VAR_2->info->pwr_mask | VAR_2->info->pwr_w_mask));
 else
  FUNC_3(VAR_4->regmap, VAR_4->info->pwr_offset,
       VAR_2->info->pwr_mask, VAR_3 ? 0 : -1U);

 FUNC_1(VAR_1);

 if (FUNC_2(VAR_0, VAR_2, VAR_6,
          VAR_6 == VAR_3, 0, 10000)) {
  FUNC_0(VAR_4->dev,
   "failed to set domain '%s', val=%d\n",
   VAR_5->name, VAR_6);
  return;
 }
}

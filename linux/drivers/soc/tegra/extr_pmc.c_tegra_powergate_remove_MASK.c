
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_powergate {size_t num_clks; int id; struct tegra_powergate* clks; int reset; } ;
struct generic_pm_domain {int dummy; } ;
struct TYPE_2__ {int powergates_available; } ;


 int FUNC_0 (struct tegra_powergate) ;
 int FUNC_1 (struct tegra_powergate*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 struct tegra_powergate* FUNC_4 (struct generic_pm_domain*) ;

__attribute__((used)) static void FUNC_5(struct generic_pm_domain *VAR_1)
{
 struct tegra_powergate *VAR_2 = FUNC_4(VAR_1);

 FUNC_2(VAR_2->reset);

 while (VAR_2->num_clks--)
  FUNC_0(VAR_2->clks[VAR_2->num_clks]);

 FUNC_1(VAR_2->clks);

 FUNC_3(VAR_2->id, VAR_0->powergates_available);

 FUNC_1(VAR_2);
}

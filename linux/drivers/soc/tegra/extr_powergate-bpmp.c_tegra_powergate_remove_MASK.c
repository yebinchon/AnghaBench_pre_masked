
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct generic_pm_domain {int name; } ;
struct tegra_powergate {struct tegra_bpmp* bpmp; struct generic_pm_domain genpd; } ;
struct tegra_bpmp {int dev; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct generic_pm_domain*) ;

__attribute__((used)) static void FUNC_3(struct tegra_powergate *VAR_0)
{
 struct generic_pm_domain *VAR_1 = &VAR_0->genpd;
 struct tegra_bpmp *VAR_2 = VAR_0->bpmp;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 < 0)
  FUNC_0(VAR_2->dev, "failed to remove power domain %s: %d\n",
   VAR_1->name, VAR_3);

 FUNC_1(VAR_1->name);
}

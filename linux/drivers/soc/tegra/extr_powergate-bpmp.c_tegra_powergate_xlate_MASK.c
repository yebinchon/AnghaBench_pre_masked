
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct generic_pm_domain {int dummy; } ;
struct tegra_powergate {scalar_t__ id; struct generic_pm_domain genpd; } ;
struct of_phandle_args {scalar_t__* args; } ;
struct genpd_onecell_data {unsigned int num_domains; int * domains; } ;


 int VAR_0 ;
 struct generic_pm_domain* FUNC_0 (int ) ;
 struct tegra_powergate* FUNC_1 (int ) ;

__attribute__((used)) static struct generic_pm_domain *
FUNC_2(struct of_phandle_args *VAR_1, void *VAR_2)
{
 struct generic_pm_domain *VAR_3 = FUNC_0(-VAR_0);
 struct genpd_onecell_data *VAR_4 = VAR_2;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_domains; VAR_5++) {
  struct tegra_powergate *VAR_6;

  VAR_6 = FUNC_1(VAR_4->domains[VAR_5]);
  if (VAR_6->id == VAR_1->args[0]) {
   VAR_3 = &VAR_6->genpd;
   break;
  }
 }

 return VAR_3;
}

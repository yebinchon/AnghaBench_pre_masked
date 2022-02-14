
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_powergate {int dummy; } ;
struct genpd_onecell_data {unsigned int num_domains; TYPE_1__** domains; } ;
struct tegra_bpmp {int dev; struct genpd_onecell_data genpd; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct tegra_powergate*) ;
 struct tegra_powergate* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct tegra_bpmp *VAR_0)
{
 struct genpd_onecell_data *VAR_1 = &VAR_0->genpd;
 unsigned int VAR_2 = VAR_1->num_domains;
 struct tegra_powergate *VAR_3;

 while (VAR_2--) {
  FUNC_0(VAR_0->dev, "removing power domain %s\n",
   VAR_1->domains[VAR_2]->name);
  VAR_3 = FUNC_2(VAR_1->domains[VAR_2]);
  FUNC_1(VAR_3);
 }
}

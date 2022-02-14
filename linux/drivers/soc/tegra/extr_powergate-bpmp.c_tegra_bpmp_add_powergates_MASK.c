
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_powergate_info {int dummy; } ;
struct generic_pm_domain {int name; } ;
struct tegra_powergate {struct generic_pm_domain genpd; } ;
struct genpd_onecell_data {unsigned int num_domains; struct generic_pm_domain** domains; } ;
struct tegra_bpmp {int dev; struct genpd_onecell_data genpd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tegra_powergate*) ;
 int FUNC_1 (struct tegra_powergate*) ;
 int FUNC_2 (int ,char*,int ) ;
 struct generic_pm_domain** FUNC_3 (unsigned int,int,int ) ;
 int FUNC_4 (struct generic_pm_domain**) ;
 struct tegra_powergate* FUNC_5 (struct tegra_bpmp*,struct tegra_powergate_info*) ;
 int FUNC_6 (struct tegra_powergate*) ;
 struct tegra_powergate* FUNC_7 (struct generic_pm_domain*) ;

__attribute__((used)) static int FUNC_8(struct tegra_bpmp *VAR_2,
         struct tegra_powergate_info *VAR_3,
         unsigned int VAR_4)
{
 struct genpd_onecell_data *VAR_5 = &VAR_2->genpd;
 struct generic_pm_domain **VAR_6;
 struct tegra_powergate *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_6 = FUNC_3(VAR_4, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_7 = FUNC_5(VAR_2, &VAR_3[VAR_8]);
  if (FUNC_0(VAR_7)) {
   VAR_9 = FUNC_1(VAR_7);
   goto remove;
  }

  FUNC_2(VAR_2->dev, "added power domain %s\n",
   VAR_7->genpd.name);
  VAR_6[VAR_8] = &VAR_7->genpd;
 }

 VAR_5->num_domains = VAR_4;
 VAR_5->domains = VAR_6;

 return 0;

remove:
 while (VAR_8--) {
  VAR_7 = FUNC_7(VAR_6[VAR_8]);
  FUNC_6(VAR_7);
 }

 FUNC_4(VAR_5->domains);
 return VAR_9;
}

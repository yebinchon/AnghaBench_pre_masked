
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_powergate {int id; struct tegra_bpmp* bpmp; } ;
struct tegra_bpmp {int dummy; } ;
struct generic_pm_domain {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tegra_bpmp*,int ,int ) ;
 struct tegra_powergate* FUNC_1 (struct generic_pm_domain*) ;

__attribute__((used)) static int FUNC_2(struct generic_pm_domain *VAR_1)
{
 struct tegra_powergate *VAR_2 = FUNC_1(VAR_1);
 struct tegra_bpmp *VAR_3 = VAR_2->bpmp;

 return FUNC_0(VAR_3, VAR_2->id,
           VAR_0);
}

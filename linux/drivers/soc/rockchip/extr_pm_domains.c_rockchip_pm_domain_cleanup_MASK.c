
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_domains; struct generic_pm_domain** domains; } ;
struct rockchip_pmu {TYPE_1__ genpd_data; } ;
struct rockchip_pm_domain {int dummy; } ;
struct generic_pm_domain {int dummy; } ;


 int FUNC_0 (struct rockchip_pm_domain*) ;
 struct rockchip_pm_domain* FUNC_1 (struct generic_pm_domain*) ;

__attribute__((used)) static void FUNC_2(struct rockchip_pmu *VAR_0)
{
 struct generic_pm_domain *VAR_1;
 struct rockchip_pm_domain *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->genpd_data.num_domains; VAR_3++) {
  VAR_1 = VAR_0->genpd_data.domains[VAR_3];
  if (VAR_1) {
   VAR_2 = FUNC_1(VAR_1);
   FUNC_0(VAR_2);
  }
 }


}

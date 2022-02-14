
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct generic_pm_domain {int (* power_on ) (struct generic_pm_domain*) ;} ;
struct scp_domain {struct generic_pm_domain genpd; } ;
struct genpd_onecell_data {int dummy; } ;
struct scp {struct genpd_onecell_data pd_data; struct scp_domain* domains; } ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (int ,struct genpd_onecell_data*) ;
 int FUNC_2 (struct generic_pm_domain*,int *,int) ;
 int FUNC_3 (struct generic_pm_domain*) ;

__attribute__((used)) static void FUNC_4(struct platform_device *VAR_0,
    struct scp *VAR_1, int VAR_2)
{
 struct genpd_onecell_data *VAR_3;
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  struct scp_domain *VAR_6 = &VAR_1->domains[VAR_4];
  struct generic_pm_domain *VAR_7 = &VAR_6->genpd;







  VAR_7->power_on(VAR_7);

  FUNC_2(VAR_7, ((void*)0), 0);
 }







 VAR_3 = &VAR_1->pd_data;

 VAR_5 = FUNC_1(VAR_0->dev.of_node, VAR_3);
 if (VAR_5)
  FUNC_0(&VAR_0->dev, "Failed to add OF provider: %d\n", VAR_5);
}

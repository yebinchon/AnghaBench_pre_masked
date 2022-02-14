
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct rockchip_pm_domain {TYPE_1__* pmu; scalar_t__ num_clks; int clks; TYPE_2__ genpd; } ;
struct TYPE_3__ {int mutex; int dev; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(struct rockchip_pm_domain *VAR_0)
{
 int VAR_1;





 VAR_1 = FUNC_5(&VAR_0->genpd);
 if (VAR_1 < 0)
  FUNC_2(VAR_0->pmu->dev, "failed to remove domain '%s' : %d - state may be inconsistent\n",
   VAR_0->genpd.name, VAR_1);

 FUNC_1(VAR_0->num_clks, VAR_0->clks);
 FUNC_0(VAR_0->num_clks, VAR_0->clks);


 FUNC_3(&VAR_0->pmu->mutex);
 VAR_0->num_clks = 0;
 FUNC_4(&VAR_0->pmu->mutex);


}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_pmu {int mutex; int dev; } ;
struct rockchip_pm_domain {int clks; int num_clks; struct rockchip_pmu* pmu; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rockchip_pm_domain*,int) ;
 int FUNC_6 (struct rockchip_pm_domain*) ;
 int FUNC_7 (struct rockchip_pm_domain*) ;
 int FUNC_8 (struct rockchip_pm_domain*) ;
 int FUNC_9 (struct rockchip_pm_domain*,int) ;

__attribute__((used)) static int FUNC_10(struct rockchip_pm_domain *VAR_0, bool VAR_1)
{
 struct rockchip_pmu *VAR_2 = VAR_0->pmu;
 int VAR_3;

 FUNC_3(&VAR_2->mutex);

 if (FUNC_6(VAR_0) != VAR_1) {
  VAR_3 = FUNC_1(VAR_0->num_clks, VAR_0->clks);
  if (VAR_3 < 0) {
   FUNC_2(VAR_2->dev, "failed to enable clocks\n");
   FUNC_4(&VAR_2->mutex);
   return VAR_3;
  }

  if (!VAR_1) {
   FUNC_8(VAR_0);


   FUNC_9(VAR_0, 1);
  }

  FUNC_5(VAR_0, VAR_1);

  if (VAR_1) {

   FUNC_9(VAR_0, 0);

   FUNC_7(VAR_0);
  }

  FUNC_0(VAR_0->num_clks, VAR_0->clks);
 }

 FUNC_4(&VAR_2->mutex);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct exynos_pmu_context {int dummy; } ;
struct TYPE_6__ {int (* pmu_init ) () ;} ;
struct TYPE_5__ {TYPE_3__* pmu_data; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,struct resource*) ;
 TYPE_1__* FUNC_5 (struct device*,int,int ) ;
 scalar_t__ FUNC_6 (struct device*) ;
 TYPE_3__* FUNC_7 (struct device*) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,TYPE_1__*) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct resource *VAR_7;

 VAR_7 = FUNC_8(VAR_5, VAR_2, 0);
 VAR_3 = FUNC_4(VAR_6, VAR_7);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_5(&VAR_5->dev,
   sizeof(struct exynos_pmu_context),
   VAR_1);
 if (!VAR_4)
  return -VAR_0;
 VAR_4->dev = VAR_6;
 VAR_4->pmu_data = FUNC_7(VAR_6);

 if (VAR_4->pmu_data && VAR_4->pmu_data->pmu_init)
  VAR_4->pmu_data->pmu_init();

 FUNC_9(VAR_5, VAR_4);

 if (FUNC_6(VAR_6))
  FUNC_3(VAR_6, "Error populating children, reboot and poweroff might not work properly\n");

 FUNC_2(VAR_6, "Exynos PMU Driver probe done\n");
 return 0;
}

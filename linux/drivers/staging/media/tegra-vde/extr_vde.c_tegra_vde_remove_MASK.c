
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_vde {int iram_pool; scalar_t__ iram; int miscdev; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int FUNC_0 (int ,unsigned long,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct tegra_vde* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct tegra_vde*) ;
 int FUNC_8 (struct tegra_vde*) ;
 int FUNC_9 (struct device*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_0)
{
 struct tegra_vde *VAR_1 = FUNC_3(VAR_0);
 struct device *VAR_2 = &VAR_0->dev;
 int VAR_3;

 if (!FUNC_6(VAR_2)) {
  VAR_3 = FUNC_9(VAR_2);
  if (VAR_3)
   return VAR_3;
 }

 FUNC_5(VAR_2);
 FUNC_4(VAR_2);

 FUNC_2(&VAR_1->miscdev);

 FUNC_7(VAR_1);
 FUNC_8(VAR_1);

 FUNC_0(VAR_1->iram_pool, (unsigned long)VAR_1->iram,
        FUNC_1(VAR_1->iram_pool));

 return 0;
}

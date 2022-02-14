
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct cdns_pcie {int dummy; } ;


 int FUNC_0 (struct cdns_pcie*) ;
 int FUNC_1 (struct device*,char*) ;
 struct cdns_pcie* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct cdns_pcie *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3 < 0)
  FUNC_1(VAR_1, "pm_runtime_put_sync failed\n");

 FUNC_3(VAR_1);

 FUNC_0(VAR_2);
}

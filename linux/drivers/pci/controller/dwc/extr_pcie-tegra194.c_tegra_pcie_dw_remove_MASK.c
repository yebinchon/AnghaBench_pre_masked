
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcie_dw {int bpmp; int dev; int debugfs; int link_state; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct tegra_pcie_dw* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct tegra_pcie_dw*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct tegra_pcie_dw *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1->link_state)
  return 0;

 FUNC_0(VAR_1->debugfs);
 FUNC_5(VAR_1);
 FUNC_3(VAR_1->dev);
 FUNC_2(VAR_1->dev);
 FUNC_4(VAR_1->bpmp);

 return 0;
}

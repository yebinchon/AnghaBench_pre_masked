
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int msi_irq; int irq; } ;
struct TYPE_4__ {TYPE_1__ pp; } ;
struct tegra_pcie_dw {TYPE_2__ pci; int debugfs; int link_state; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct tegra_pcie_dw*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct tegra_pcie_dw* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct tegra_pcie_dw*) ;
 int FUNC_6 (struct tegra_pcie_dw*) ;

__attribute__((used)) static void FUNC_7(struct platform_device *VAR_1)
{
 struct tegra_pcie_dw *VAR_2 = FUNC_4(VAR_1);

 if (!VAR_2->link_state)
  return;

 FUNC_2(VAR_2->debugfs);
 FUNC_5(VAR_2);

 FUNC_3(VAR_2->pci.pp.irq);
 if (FUNC_0(VAR_0))
  FUNC_3(VAR_2->pci.pp.msi_irq);

 FUNC_6(VAR_2);
 FUNC_1(VAR_2);
}

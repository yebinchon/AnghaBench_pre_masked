
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_port {int * ops; } ;
struct dw_pcie {struct pcie_port pp; } ;
struct tegra_pcie_dw {int dev; struct dw_pcie pci; } ;


 int FUNC_0 (struct tegra_pcie_dw*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct pcie_port*) ;
 int FUNC_3 (struct tegra_pcie_dw*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct tegra_pcie_dw *VAR_1)
{
 struct dw_pcie *VAR_2 = &VAR_1->pci;
 struct pcie_port *VAR_3 = &VAR_2->pp;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_1, 0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->ops = &VAR_0;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 < 0) {
  FUNC_1(VAR_1->dev, "Failed to add PCIe port: %d\n", VAR_4);
  goto fail_host_init;
 }

 return 0;

fail_host_init:
 return FUNC_0(VAR_1);
}

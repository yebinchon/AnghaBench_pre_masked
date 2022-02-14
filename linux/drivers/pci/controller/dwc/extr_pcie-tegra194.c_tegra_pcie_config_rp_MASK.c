
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcie_port {int msi_irq; } ;
struct TYPE_2__ {struct pcie_port pp; } ;
struct tegra_pcie_dw {int debugfs; int link_state; TYPE_1__ pci; struct device* dev; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (struct device*,char*,...) ;
 char* FUNC_3 (struct device*,int ,char*,int ) ;
 int FUNC_4 (struct tegra_pcie_dw*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct tegra_pcie_dw*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (struct tegra_pcie_dw*) ;

__attribute__((used)) static int FUNC_14(struct tegra_pcie_dw *VAR_5)
{
 struct pcie_port *VAR_6 = &VAR_5->pci.pp;
 struct device *VAR_7 = VAR_5->dev;
 char *VAR_8;
 int VAR_9;

 if (FUNC_0(VAR_0)) {
  VAR_6->msi_irq = FUNC_5(VAR_7->of_node, "msi");
  if (!VAR_6->msi_irq) {
   FUNC_2(VAR_7, "Failed to get MSI interrupt\n");
   return -VAR_1;
  }
 }

 FUNC_8(VAR_7);

 VAR_9 = FUNC_9(VAR_7);
 if (VAR_9 < 0) {
  FUNC_2(VAR_7, "Failed to get runtime sync for PCIe dev: %d\n",
   VAR_9);
  goto fail_pm_get_sync;
 }

 VAR_9 = FUNC_6(VAR_7);
 if (VAR_9 < 0) {
  FUNC_2(VAR_7, "Failed to configure sideband pins: %d\n", VAR_9);
  goto fail_pinctrl;
 }

 FUNC_13(VAR_5);

 VAR_5->link_state = FUNC_12(&VAR_5->pci);
 if (!VAR_5->link_state) {
  VAR_9 = -VAR_2;
  goto fail_host_init;
 }

 VAR_8 = FUNC_3(VAR_7, VAR_4, "%pOFP", VAR_7->of_node);
 if (!VAR_8) {
  VAR_9 = -VAR_3;
  goto fail_host_init;
 }

 VAR_5->debugfs = FUNC_1(VAR_8, ((void*)0));
 if (!VAR_5->debugfs)
  FUNC_2(VAR_7, "Failed to create debugfs\n");
 else
  FUNC_4(VAR_5);

 return VAR_9;

fail_host_init:
 FUNC_11(VAR_5);
fail_pinctrl:
 FUNC_10(VAR_7);
fail_pm_get_sync:
 FUNC_7(VAR_7);
 return VAR_9;
}

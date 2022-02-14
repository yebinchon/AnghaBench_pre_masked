
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int teardown_irq; int setup_irq; struct device* dev; } ;
struct tegra_msi {int irq; int domain; TYPE_2__ chip; int virt; int phys; int lock; } ;
struct tegra_pcie {struct device* dev; struct tegra_msi msi; } ;
struct platform_device {int dummy; } ;
struct pci_host_bridge {TYPE_2__* msi; } ;
struct device {int of_node; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,int ,int *,int ,int ) ;
 int FUNC_3 (struct device*,int ) ;
 int FUNC_4 (int,struct tegra_pcie*) ;
 int FUNC_5 (int ,int ,int *,TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int FUNC_7 (int *) ;
 struct pci_host_bridge* FUNC_8 (struct tegra_pcie*) ;
 int FUNC_9 (struct platform_device*,char*) ;
 int FUNC_10 (int,int ,int ,int ,struct tegra_pcie*) ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct platform_device* FUNC_11 (struct device*) ;

__attribute__((used)) static int FUNC_12(struct tegra_pcie *VAR_11)
{
 struct pci_host_bridge *VAR_12 = FUNC_8(VAR_11);
 struct platform_device *VAR_13 = FUNC_11(VAR_11->dev);
 struct tegra_msi *VAR_14 = &VAR_11->msi;
 struct device *VAR_15 = VAR_11->dev;
 int VAR_16;

 FUNC_7(&VAR_14->lock);

 VAR_14->chip.dev = VAR_15;
 VAR_14->chip.setup_irq = VAR_8;
 VAR_14->chip.teardown_irq = VAR_9;

 VAR_14->domain = FUNC_5(VAR_15->of_node, VAR_3,
         &VAR_6, &VAR_14->chip);
 if (!VAR_14->domain) {
  FUNC_1(VAR_15, "failed to create IRQ domain\n");
  return -VAR_1;
 }

 VAR_16 = FUNC_9(VAR_13, "msi");
 if (VAR_16 < 0) {
  FUNC_1(VAR_15, "failed to get IRQ: %d\n", VAR_16);
  goto free_irq_domain;
 }

 VAR_14->irq = VAR_16;

 VAR_16 = FUNC_10(VAR_14->irq, VAR_10, VAR_4,
     VAR_7.name, VAR_11);
 if (VAR_16 < 0) {
  FUNC_1(VAR_15, "failed to request IRQ: %d\n", VAR_16);
  goto free_irq_domain;
 }






 VAR_16 = FUNC_3(VAR_15, FUNC_0(32));
 if (VAR_16 < 0) {
  FUNC_1(VAR_15, "failed to set DMA coherent mask: %d\n", VAR_16);
  goto free_irq;
 }

 VAR_14->virt = FUNC_2(VAR_15, VAR_5, &VAR_14->phys, VAR_2,
        VAR_0);
 if (!VAR_14->virt) {
  FUNC_1(VAR_15, "failed to allocate DMA memory for MSI\n");
  VAR_16 = -VAR_1;
  goto free_irq;
 }

 VAR_12->msi = &VAR_14->chip;

 return 0;

free_irq:
 FUNC_4(VAR_14->irq, VAR_11);
free_irq_domain:
 FUNC_6(VAR_14->domain);
 return VAR_16;
}

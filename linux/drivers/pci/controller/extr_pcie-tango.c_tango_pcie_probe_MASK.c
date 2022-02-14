
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tango_pcie {int used_msi_lock; struct irq_domain* dom; scalar_t__ base; scalar_t__ msi_doorbell; } ;
struct resource {scalar_t__ start; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct of_pci_range_parser {int dummy; } ;
struct of_pci_range {scalar_t__ pci_addr; scalar_t__ size; } ;
struct irq_domain {int dummy; } ;
struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 scalar_t__ FUNC_5 (struct device*,struct resource*) ;
 struct tango_pcie* FUNC_6 (struct device*,int,int ) ;
 int VAR_11 ;
 struct irq_domain* FUNC_7 (struct fwnode_handle*,int,int *,struct tango_pcie*) ;
 int FUNC_8 (struct irq_domain*) ;
 int FUNC_9 (int,int ,struct tango_pcie*) ;
 int VAR_12 ;
 struct fwnode_handle* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct of_pci_range_parser*,int ) ;
 int * FUNC_12 (struct of_pci_range_parser*,struct of_pci_range*) ;
 int FUNC_13 (struct platform_device*,int *) ;
 struct irq_domain* FUNC_14 (struct fwnode_handle*,int *,struct irq_domain*) ;
 int FUNC_15 (struct platform_device*,int) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int) ;
 int FUNC_17 (struct platform_device*,struct tango_pcie*) ;
 int VAR_13 ;
 int FUNC_18 (int *) ;
 int VAR_14 ;
 int FUNC_19 (struct tango_pcie*) ;
 int FUNC_20 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_15)
{
 struct device *VAR_16 = &VAR_15->dev;
 struct tango_pcie *VAR_17;
 struct resource *VAR_18;
 struct fwnode_handle *VAR_19 = FUNC_10(VAR_16->of_node);
 struct irq_domain *VAR_20, *VAR_21;
 struct of_pci_range_parser VAR_22;
 struct of_pci_range VAR_23;
 int VAR_24, VAR_25;

 FUNC_4(VAR_16, "simultaneous PCI config and MMIO accesses may cause data corruption\n");
 FUNC_2(VAR_10, VAR_6);

 VAR_17 = FUNC_6(VAR_16, sizeof(*VAR_17), VAR_4);
 if (!VAR_17)
  return -VAR_2;

 VAR_18 = FUNC_16(VAR_15, VAR_5, 1);
 VAR_17->base = FUNC_5(VAR_16, VAR_18);
 if (FUNC_0(VAR_17->base))
  return FUNC_1(VAR_17->base);

 FUNC_17(VAR_15, VAR_17);

 if (!FUNC_19(VAR_17))
  return -VAR_0;

 if (FUNC_11(&VAR_22, VAR_16->of_node) < 0)
  return -VAR_1;

 if (FUNC_12(&VAR_22, &VAR_23) == ((void*)0))
  return -VAR_1;

 VAR_23.pci_addr += VAR_23.size;
 VAR_17->msi_doorbell = VAR_23.pci_addr + VAR_18->start + VAR_8;

 for (VAR_25 = 0; VAR_25 < VAR_7 / 8; VAR_25 += 4)
  FUNC_20(0, VAR_17->base + VAR_9 + VAR_25);

 VAR_24 = FUNC_15(VAR_15, 1);
 if (VAR_24 <= 0) {
  FUNC_3(VAR_16, "Failed to map IRQ\n");
  return -VAR_3;
 }

 VAR_21 = FUNC_7(VAR_19, VAR_7, &VAR_11, VAR_17);
 if (!VAR_21) {
  FUNC_3(VAR_16, "Failed to create IRQ domain\n");
  return -VAR_2;
 }

 VAR_20 = FUNC_14(VAR_19, &VAR_12, VAR_21);
 if (!VAR_20) {
  FUNC_3(VAR_16, "Failed to create MSI domain\n");
  FUNC_8(VAR_21);
  return -VAR_2;
 }

 VAR_17->dom = VAR_21;
 FUNC_18(&VAR_17->used_msi_lock);
 FUNC_9(VAR_24, VAR_14, VAR_17);

 return FUNC_13(VAR_15, &VAR_13);
}

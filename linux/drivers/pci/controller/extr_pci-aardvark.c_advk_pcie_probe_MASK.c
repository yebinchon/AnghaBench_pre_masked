
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {struct device* parent; } ;
struct pci_host_bridge {int swizzle_irq; int map_irq; int * ops; scalar_t__ busnr; struct advk_pcie* sysdata; TYPE_1__ dev; int windows; } ;
struct advk_pcie {int resources; int base; struct platform_device* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct advk_pcie*) ;
 int FUNC_3 (struct advk_pcie*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct advk_pcie*) ;
 int FUNC_5 (struct advk_pcie*) ;
 int FUNC_6 (struct advk_pcie*) ;
 int FUNC_7 (struct advk_pcie*) ;
 int FUNC_8 (struct advk_pcie*) ;
 int FUNC_9 (struct device*,char*) ;
 int FUNC_10 (struct device*,struct resource*) ;
 struct pci_host_bridge* FUNC_11 (struct device*,int) ;
 int FUNC_12 (struct device*,int,int ,int,char*,struct advk_pcie*) ;
 int FUNC_13 (int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 struct advk_pcie* FUNC_14 (struct pci_host_bridge*) ;
 int FUNC_15 (struct pci_host_bridge*) ;
 int FUNC_16 (struct platform_device*,int ) ;
 struct resource* FUNC_17 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct advk_pcie *VAR_10;
 struct resource *VAR_11;
 struct pci_host_bridge *VAR_12;
 int VAR_13, VAR_14;

 VAR_12 = FUNC_11(VAR_9, sizeof(struct advk_pcie));
 if (!VAR_12)
  return -VAR_0;

 VAR_10 = FUNC_14(VAR_12);
 VAR_10->pdev = VAR_8;

 VAR_11 = FUNC_17(VAR_8, VAR_1, 0);
 VAR_10->base = FUNC_10(VAR_9, VAR_11);
 if (FUNC_0(VAR_10->base))
  return FUNC_1(VAR_10->base);

 VAR_14 = FUNC_16(VAR_8, 0);
 VAR_13 = FUNC_12(VAR_9, VAR_14, VAR_4,
          VAR_3 | VAR_2, "advk-pcie",
          VAR_10);
 if (VAR_13) {
  FUNC_9(VAR_9, "Failed to register interrupt\n");
  return VAR_13;
 }

 VAR_13 = FUNC_4(VAR_10);
 if (VAR_13) {
  FUNC_9(VAR_9, "Failed to parse resources\n");
  return VAR_13;
 }

 FUNC_7(VAR_10);

 FUNC_8(VAR_10);

 VAR_13 = FUNC_2(VAR_10);
 if (VAR_13) {
  FUNC_9(VAR_9, "Failed to initialize irq\n");
  return VAR_13;
 }

 VAR_13 = FUNC_3(VAR_10);
 if (VAR_13) {
  FUNC_9(VAR_9, "Failed to initialize irq\n");
  FUNC_5(VAR_10);
  return VAR_13;
 }

 FUNC_13(&VAR_10->resources, &VAR_12->windows);
 VAR_12->dev.parent = VAR_9;
 VAR_12->sysdata = VAR_10;
 VAR_12->busnr = 0;
 VAR_12->ops = &VAR_5;
 VAR_12->map_irq = VAR_6;
 VAR_12->swizzle_irq = VAR_7;

 VAR_13 = FUNC_15(VAR_12);
 if (VAR_13 < 0) {
  FUNC_6(VAR_10);
  FUNC_5(VAR_10);
  return VAR_13;
 }

 return 0;
}

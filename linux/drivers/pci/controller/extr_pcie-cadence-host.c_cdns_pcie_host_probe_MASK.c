
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {struct device* parent; } ;
struct pci_host_bridge {int swizzle_irq; int map_irq; int * ops; int busnr; TYPE_1__ dev; int windows; } ;
struct list_head {int dummy; } ;
struct device_node {int dummy; } ;
struct cdns_pcie {int is_rc; int phy_count; int * link; int bus; struct resource* mem_res; int reg_base; } ;
struct cdns_pcie_rc {int max_regions; int no_bar_nbits; int vendor_id; int device_id; struct resource* cfg_res; int cfg_base; struct cdns_pcie pcie; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cdns_pcie*) ;
 int FUNC_3 (struct device*,struct list_head*,struct cdns_pcie_rc*) ;
 int VAR_3 ;
 int FUNC_4 (struct device*,struct cdns_pcie*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct device*,struct resource*) ;
 struct pci_host_bridge* FUNC_8 (struct device*,int) ;
 int FUNC_9 (struct device*,struct resource*) ;
 int FUNC_10 (struct list_head*,int *) ;
 int VAR_4 ;
 int FUNC_11 (struct device_node*,char*,int*) ;
 int FUNC_12 (struct device_node*,char*,int*) ;
 int VAR_5 ;
 int FUNC_13 (struct list_head*) ;
 struct cdns_pcie_rc* FUNC_14 (struct pci_host_bridge*) ;
 int FUNC_15 (struct pci_host_bridge*) ;
 struct resource* FUNC_16 (struct platform_device*,int ,char*) ;
 int FUNC_17 (struct platform_device*,struct cdns_pcie*) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*) ;
 int FUNC_20 (struct device*) ;
 int FUNC_21 (struct device*) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct device_node *VAR_8 = VAR_7->of_node;
 struct pci_host_bridge *VAR_9;
 struct list_head VAR_10;
 struct cdns_pcie_rc *VAR_11;
 struct cdns_pcie *VAR_12;
 struct resource *VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_9 = FUNC_8(VAR_7, sizeof(*VAR_11));
 if (!VAR_9)
  return -VAR_1;

 VAR_11 = FUNC_14(VAR_9);
 VAR_11->dev = VAR_7;

 VAR_12 = &VAR_11->pcie;
 VAR_12->is_rc = 1;

 VAR_11->max_regions = 32;
 FUNC_12(VAR_8, "cdns,max-outbound-regions", &VAR_11->max_regions);

 VAR_11->no_bar_nbits = 32;
 FUNC_12(VAR_8, "cdns,no-bar-match-nbits", &VAR_11->no_bar_nbits);

 VAR_11->vendor_id = 0xffff;
 FUNC_11(VAR_8, "vendor-id", &VAR_11->vendor_id);

 VAR_11->device_id = 0xffff;
 FUNC_11(VAR_8, "device-id", &VAR_11->device_id);

 VAR_13 = FUNC_16(VAR_6, VAR_2, "reg");
 VAR_12->reg_base = FUNC_7(VAR_7, VAR_13);
 if (FUNC_0(VAR_12->reg_base)) {
  FUNC_5(VAR_7, "missing \"reg\"\n");
  return FUNC_1(VAR_12->reg_base);
 }

 VAR_13 = FUNC_16(VAR_6, VAR_2, "cfg");
 VAR_11->cfg_base = FUNC_9(VAR_7, VAR_13);
 if (FUNC_0(VAR_11->cfg_base)) {
  FUNC_5(VAR_7, "missing \"cfg\"\n");
  return FUNC_1(VAR_11->cfg_base);
 }
 VAR_11->cfg_res = VAR_13;

 VAR_13 = FUNC_16(VAR_6, VAR_2, "mem");
 if (!VAR_13) {
  FUNC_5(VAR_7, "missing \"mem\"\n");
  return -VAR_0;
 }
 VAR_12->mem_res = VAR_13;

 VAR_14 = FUNC_4(VAR_7, VAR_12);
 if (VAR_14) {
  FUNC_5(VAR_7, "failed to init phy\n");
  return VAR_14;
 }
 FUNC_17(VAR_6, VAR_12);

 FUNC_19(VAR_7);
 VAR_14 = FUNC_20(VAR_7);
 if (VAR_14 < 0) {
  FUNC_5(VAR_7, "pm_runtime_get_sync() failed\n");
  goto err_get_sync;
 }

 VAR_14 = FUNC_3(VAR_7, &VAR_10, VAR_11);
 if (VAR_14)
  goto err_init;

 FUNC_10(&VAR_10, &VAR_9->windows);
 VAR_9->dev.parent = VAR_7;
 VAR_9->busnr = VAR_12->bus;
 VAR_9->ops = &VAR_3;
 VAR_9->map_irq = VAR_4;
 VAR_9->swizzle_irq = VAR_5;

 VAR_14 = FUNC_15(VAR_9);
 if (VAR_14 < 0)
  goto err_host_probe;

 return 0;

 err_host_probe:
 FUNC_13(&VAR_10);

 err_init:
 FUNC_21(VAR_7);

 err_get_sync:
 FUNC_18(VAR_7);
 FUNC_2(VAR_12);
 VAR_15 = VAR_12->phy_count;
 while (VAR_15--)
  FUNC_6(VAR_12->link[VAR_15]);

 return VAR_14;
}

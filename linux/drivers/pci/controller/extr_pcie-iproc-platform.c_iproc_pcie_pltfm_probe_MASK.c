
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct resource {int start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct pci_host_bridge {int dummy; } ;
struct TYPE_2__ {int axi_offset; } ;
struct iproc_pcie {int type; int need_ob_cfg; int map_irq; int phy; scalar_t__ need_ib_cfg; TYPE_1__ ob; int base_addr; int base; struct device* dev; } ;
struct device_node {int dummy; } ;
typedef int resource_size_t ;
typedef enum iproc_pcie_type { ____Placeholder_iproc_pcie_type } iproc_pcie_type ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,int ,int,int *,int *) ;
 struct pci_host_bridge* FUNC_5 (struct device*,int) ;
 int FUNC_6 (struct device*,int ,int ) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct iproc_pcie*,int *) ;
 int FUNC_9 (struct device_node*,int ,struct resource*) ;
 scalar_t__ FUNC_10 (struct device*) ;
 int VAR_1 ;
 scalar_t__ FUNC_11 (struct device_node*,char*) ;
 int FUNC_12 (struct device_node*,char*,int *) ;
 int FUNC_13 (int *) ;
 struct iproc_pcie* FUNC_14 (struct pci_host_bridge*) ;
 int FUNC_15 (struct platform_device*,struct iproc_pcie*) ;
 int FUNC_16 (struct resource*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct iproc_pcie *VAR_5;
 struct device_node *VAR_6 = VAR_4->of_node;
 struct resource VAR_7;
 resource_size_t VAR_8 = 0;
 FUNC_1(VAR_2);
 struct pci_host_bridge *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(VAR_4, sizeof(*VAR_5));
 if (!VAR_9)
  return -VAR_0;

 VAR_5 = FUNC_14(VAR_9);

 VAR_5->dev = VAR_4;
 VAR_5->type = (enum iproc_pcie_type) FUNC_10(VAR_4);

 VAR_10 = FUNC_9(VAR_6, 0, &VAR_7);
 if (VAR_10 < 0) {
  FUNC_3(VAR_4, "unable to obtain controller resources\n");
  return VAR_10;
 }

 VAR_5->base = FUNC_6(VAR_4, VAR_7.start,
          FUNC_16(&VAR_7));
 if (!VAR_5->base) {
  FUNC_3(VAR_4, "unable to map controller registers\n");
  return -VAR_0;
 }
 VAR_5->base_addr = VAR_7.start;

 if (FUNC_11(VAR_6, "brcm,pcie-ob")) {
  u32 VAR_11;

  VAR_10 = FUNC_12(VAR_6, "brcm,pcie-ob-axi-offset",
        &VAR_11);
  if (VAR_10) {
   FUNC_3(VAR_4,
    "missing brcm,pcie-ob-axi-offset property\n");
   return VAR_10;
  }
  VAR_5->ob.axi_offset = VAR_11;
  VAR_5->need_ob_cfg = 1;
 }






 VAR_5->need_ib_cfg = FUNC_11(VAR_6, "dma-ranges");


 VAR_5->phy = FUNC_7(VAR_4, "pcie-phy");
 if (FUNC_0(VAR_5->phy))
  return FUNC_2(VAR_5->phy);

 VAR_10 = FUNC_4(VAR_4, 0, 0xff, &VAR_2,
          &VAR_8);
 if (VAR_10) {
  FUNC_3(VAR_4, "unable to get PCI host bridge resources\n");
  return VAR_10;
 }


 switch (VAR_5->type) {
 case 129:
 case 128:
  break;
 default:
  VAR_5->map_irq = VAR_1;
 }

 VAR_10 = FUNC_8(VAR_5, &VAR_2);
 if (VAR_10) {
  FUNC_3(VAR_4, "PCIe controller setup failed\n");
  FUNC_13(&VAR_2);
  return VAR_10;
 }

 FUNC_15(VAR_3, VAR_5);
 return 0;
}

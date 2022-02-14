
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {char* name; void* flags; void* start; void* end; } ;
struct platform_device_info {scalar_t__ id; int dma_mask; int num_res; struct resource* res; int name; int fwnode; TYPE_1__* parent; } ;
struct pci_device_id {int dummy; } ;
struct TYPE_3__ {int fwnode; } ;
struct pci_dev {scalar_t__ devfn; int dma_mask; TYPE_1__ dev; void* irq; } ;
struct cdns3_wrap {scalar_t__ devfn; int plat_dev; struct resource* dev_res; } ;
typedef int plat_info ;


 int FUNC_0 (struct resource*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 struct pci_dev* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 int FUNC_5 (TYPE_1__*,char*,int) ;
 int FUNC_6 (struct cdns3_wrap*) ;
 struct cdns3_wrap* FUNC_7 (int,int ) ;
 int FUNC_8 (struct platform_device_info*,int ,int) ;
 int FUNC_9 (struct pci_dev*) ;
 struct cdns3_wrap* FUNC_10 (struct pci_dev*) ;
 scalar_t__ FUNC_11 (struct pci_dev*) ;
 void* FUNC_12 (struct pci_dev*,int ) ;
 void* FUNC_13 (struct pci_dev*,int ) ;
 int FUNC_14 (struct pci_dev*,struct cdns3_wrap*) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (struct platform_device_info*) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static int FUNC_19(struct pci_dev *VAR_17,
      const struct pci_device_id *VAR_18)
{
 struct platform_device_info VAR_19;
 struct cdns3_wrap *VAR_20;
 struct resource *VAR_21;
 struct pci_dev *VAR_22;
 int VAR_23;





 if (!VAR_18 || (VAR_17->devfn != VAR_8 &&
      VAR_17->devfn != VAR_9))
  return -VAR_0;

 VAR_22 = FUNC_3(VAR_17);
 if (FUNC_18(!VAR_22))
  return -VAR_0;

 VAR_23 = FUNC_16(VAR_17);
 if (VAR_23) {
  FUNC_5(&VAR_17->dev, "Enabling PCI device has failed %d\n", VAR_23);
  return VAR_23;
 }

 FUNC_15(VAR_17);

 if (FUNC_11(VAR_22)) {
  VAR_20 = FUNC_10(VAR_22);
 } else {
  VAR_20 = FUNC_7(sizeof(*VAR_20), VAR_2);
  if (!VAR_20) {
   FUNC_9(VAR_17);
   return -VAR_1;
  }
 }

 VAR_21 = VAR_20->dev_res;

 if (VAR_17->devfn == VAR_8) {

  FUNC_4(&VAR_17->dev, "Initialize Device resources\n");
  VAR_21[VAR_11].start = FUNC_13(VAR_17, VAR_5);
  VAR_21[VAR_11].end = FUNC_12(VAR_17, VAR_5);
  VAR_21[VAR_11].name = "dev";
  VAR_21[VAR_11].flags = VAR_4;
  FUNC_4(&VAR_17->dev, "USBSS-DEV physical base addr: %pa\n",
   &VAR_21[VAR_11].start);

  VAR_21[VAR_13].start = FUNC_13(VAR_17, VAR_6);
  VAR_21[VAR_13].end = FUNC_12(VAR_17, VAR_6);
  VAR_21[VAR_13].name = "xhci";
  VAR_21[VAR_13].flags = VAR_4;
  FUNC_4(&VAR_17->dev, "USBSS-XHCI physical base addr: %pa\n",
   &VAR_21[VAR_13].start);


  VAR_20->dev_res[VAR_14].start = VAR_17->irq;
  VAR_20->dev_res[VAR_14].name = "host";
  VAR_20->dev_res[VAR_14].flags = VAR_3;


  VAR_20->dev_res[VAR_16].start = VAR_17->irq;
  VAR_20->dev_res[VAR_16].name = "peripheral";
  VAR_20->dev_res[VAR_16].flags = VAR_3;
 } else {
  VAR_21[VAR_12].start = FUNC_13(VAR_17, VAR_7);
  VAR_21[VAR_12].end = FUNC_12(VAR_17, VAR_7);
  VAR_21[VAR_12].name = "otg";
  VAR_21[VAR_12].flags = VAR_4;
  FUNC_4(&VAR_17->dev, "USBSS-DRD physical base addr: %pa\n",
   &VAR_21[VAR_12].start);


  VAR_20->dev_res[VAR_15].start = VAR_17->irq;
  VAR_20->dev_res[VAR_15].name = "otg";
  VAR_20->dev_res[VAR_15].flags = VAR_3;
 }

 if (FUNC_11(VAR_22)) {

  FUNC_8(&VAR_19, 0, sizeof(VAR_19));
  VAR_19.parent = &VAR_17->dev;
  VAR_19.fwnode = VAR_17->dev.fwnode;
  VAR_19.name = VAR_10;
  VAR_19.id = VAR_17->devfn;
  VAR_20->devfn = VAR_17->devfn;
  VAR_19.res = VAR_20->dev_res;
  VAR_19.num_res = FUNC_0(VAR_20->dev_res);
  VAR_19.dma_mask = VAR_17->dma_mask;

  VAR_20->plat_dev = FUNC_17(&VAR_19);
  if (FUNC_1(VAR_20->plat_dev)) {
   FUNC_9(VAR_17);
   VAR_23 = FUNC_2(VAR_20->plat_dev);
   FUNC_6(VAR_20);
   return VAR_23;
  }
 }

 FUNC_14(VAR_17, VAR_20);
 return VAR_23;
}

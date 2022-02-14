
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct resource {char* name; int flags; int start; int end; } ;
struct property_entry {int dummy; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct device {int dummy; } ;
struct pci_dev {int irq; struct device dev; } ;
struct dwc3_pci {TYPE_1__* dwc3; int wakeup_work; struct pci_dev* pci; } ;
struct TYPE_8__ {struct device* parent; } ;
struct TYPE_7__ {TYPE_6__ dev; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 (struct resource*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,int) ;
 struct dwc3_pci* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct dwc3_pci*) ;
 int VAR_6 ;
 int FUNC_8 (struct resource*,int,int) ;
 int FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*,struct dwc3_pci*) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,struct property_entry*) ;
 int FUNC_16 (TYPE_1__*,struct resource*,int) ;
 TYPE_1__* FUNC_17 (char*,int ) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (struct device*) ;

__attribute__((used)) static int FUNC_20(struct pci_dev *VAR_7, const struct pci_device_id *VAR_8)
{
 struct property_entry *VAR_9 = (struct property_entry *)VAR_8->driver_data;
 struct dwc3_pci *VAR_10;
 struct resource VAR_11[2];
 int VAR_12;
 struct device *VAR_13 = &VAR_7->dev;

 VAR_12 = FUNC_13(VAR_7);
 if (VAR_12) {
  FUNC_4(VAR_13, "failed to enable pci device\n");
  return -VAR_0;
 }

 FUNC_12(VAR_7);

 VAR_10 = FUNC_6(VAR_13, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->dwc3 = FUNC_17("dwc3", VAR_5);
 if (!VAR_10->dwc3)
  return -VAR_1;

 FUNC_8(VAR_11, 0x00, sizeof(struct resource) * FUNC_2(VAR_11));

 VAR_11[0].start = FUNC_10(VAR_7, 0);
 VAR_11[0].end = FUNC_9(VAR_7, 0);
 VAR_11[0].name = "dwc_usb3";
 VAR_11[0].flags = VAR_4;

 VAR_11[1].start = VAR_7->irq;
 VAR_11[1].name = "dwc_usb3";
 VAR_11[1].flags = VAR_3;

 VAR_12 = FUNC_16(VAR_10->dwc3, VAR_11, FUNC_2(VAR_11));
 if (VAR_12) {
  FUNC_4(VAR_13, "couldn't add resources to dwc3 device\n");
  goto err;
 }

 VAR_10->pci = VAR_7;
 VAR_10->dwc3->dev.parent = VAR_13;
 FUNC_1(&VAR_10->dwc3->dev, FUNC_0(VAR_13));

 VAR_12 = FUNC_15(VAR_10->dwc3, VAR_9);
 if (VAR_12 < 0)
  goto err;

 VAR_12 = FUNC_7(VAR_10);
 if (VAR_12)
  goto err;

 VAR_12 = FUNC_14(VAR_10->dwc3);
 if (VAR_12) {
  FUNC_4(VAR_13, "failed to register dwc3 device\n");
  goto err;
 }

 FUNC_5(VAR_13, 1);
 FUNC_11(VAR_7, VAR_10);
 FUNC_19(VAR_13);




 return 0;
err:
 FUNC_18(VAR_10->dwc3);
 return VAR_12;
}

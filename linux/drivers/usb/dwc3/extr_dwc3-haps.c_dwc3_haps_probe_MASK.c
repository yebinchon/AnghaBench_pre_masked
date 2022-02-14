
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct resource {char* name; int flags; int start; int end; } ;
struct pci_device_id {int dummy; } ;
struct device {int dummy; } ;
struct pci_dev {int irq; struct device dev; } ;
struct dwc3_haps {TYPE_2__* dwc3; struct pci_dev* pci; } ;
struct TYPE_7__ {struct device* parent; } ;
struct TYPE_8__ {TYPE_1__ dev; } ;


 int FUNC_0 (struct resource*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct device*,char*) ;
 struct dwc3_haps* FUNC_2 (struct device*,int,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct resource*,int,int) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*,struct dwc3_haps*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_2__*,struct resource*,int) ;
 TYPE_2__* FUNC_12 (char*,int ) ;
 int FUNC_13 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_14(struct pci_dev *VAR_7,
      const struct pci_device_id *VAR_8)
{
 struct dwc3_haps *VAR_9;
 struct device *VAR_10 = &VAR_7->dev;
 struct resource VAR_11[2];
 int VAR_12;

 VAR_12 = FUNC_8(VAR_7);
 if (VAR_12) {
  FUNC_1(VAR_10, "failed to enable pci device\n");
  return -VAR_0;
 }

 FUNC_7(VAR_7);

 VAR_9 = FUNC_2(VAR_10, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->dwc3 = FUNC_12("dwc3", VAR_5);
 if (!VAR_9->dwc3)
  return -VAR_1;

 FUNC_3(VAR_11, 0x00, sizeof(struct resource) * FUNC_0(VAR_11));

 VAR_11[0].start = FUNC_5(VAR_7, 0);
 VAR_11[0].end = FUNC_4(VAR_7, 0);
 VAR_11[0].name = "dwc_usb3";
 VAR_11[0].flags = VAR_4;

 VAR_11[1].start = VAR_7->irq;
 VAR_11[1].name = "dwc_usb3";
 VAR_11[1].flags = VAR_3;

 VAR_12 = FUNC_11(VAR_9->dwc3, VAR_11, FUNC_0(VAR_11));
 if (VAR_12) {
  FUNC_1(VAR_10, "couldn't add resources to dwc3 device\n");
  goto err;
 }

 VAR_9->pci = VAR_7;
 VAR_9->dwc3->dev.parent = VAR_10;

 VAR_12 = FUNC_10(VAR_9->dwc3, VAR_6);
 if (VAR_12)
  goto err;

 VAR_12 = FUNC_9(VAR_9->dwc3);
 if (VAR_12) {
  FUNC_1(VAR_10, "failed to register dwc3 device\n");
  goto err;
 }

 FUNC_6(VAR_7, VAR_9);

 return 0;
err:
 FUNC_13(VAR_9->dwc3);
 return VAR_12;
}

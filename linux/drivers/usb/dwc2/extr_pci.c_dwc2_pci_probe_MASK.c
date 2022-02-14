
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {char* name; int flags; int start; int end; } ;
struct TYPE_2__ {struct device* parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pci_device_id {int dummy; } ;
struct device {int dummy; } ;
struct pci_dev {int irq; struct device dev; } ;
struct dwc2_pci_glue {struct platform_device* dwc2; struct platform_device* phy; } ;


 int FUNC_0 (struct resource*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct platform_device*) ;
 int VAR_5 ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct dwc2_pci_glue* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct pci_dev*,struct platform_device*) ;
 int FUNC_6 (struct resource*,int,int) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*,struct dwc2_pci_glue*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct platform_device*) ;
 int FUNC_13 (struct platform_device*,struct resource*,int) ;
 struct platform_device* FUNC_14 (char*,int ) ;
 int FUNC_15 (struct platform_device*) ;
 struct platform_device* FUNC_16 () ;
 int FUNC_17 (struct platform_device*) ;

__attribute__((used)) static int FUNC_18(struct pci_dev *VAR_6,
     const struct pci_device_id *VAR_7)
{
 struct resource VAR_8[2];
 struct platform_device *VAR_9;
 struct platform_device *VAR_10;
 int VAR_11;
 struct device *VAR_12 = &VAR_6->dev;
 struct dwc2_pci_glue *VAR_13;

 VAR_11 = FUNC_11(VAR_6);
 if (VAR_11) {
  FUNC_3(VAR_12, "failed to enable pci device\n");
  return -VAR_0;
 }

 FUNC_10(VAR_6);

 VAR_10 = FUNC_16();
 if (FUNC_1(VAR_10)) {
  FUNC_3(VAR_12, "error registering generic PHY (%ld)\n",
   FUNC_2(VAR_10));
  return FUNC_2(VAR_10);
 }

 VAR_9 = FUNC_14("dwc2", VAR_5);
 if (!VAR_9) {
  FUNC_3(VAR_12, "couldn't allocate dwc2 device\n");
  VAR_11 = -VAR_1;
  goto err;
 }

 FUNC_6(VAR_8, 0x00, sizeof(struct resource) * FUNC_0(VAR_8));

 VAR_8[0].start = FUNC_8(VAR_6, 0);
 VAR_8[0].end = FUNC_7(VAR_6, 0);
 VAR_8[0].name = "dwc2";
 VAR_8[0].flags = VAR_4;

 VAR_8[1].start = VAR_6->irq;
 VAR_8[1].name = "dwc2";
 VAR_8[1].flags = VAR_3;

 VAR_11 = FUNC_13(VAR_9, VAR_8, FUNC_0(VAR_8));
 if (VAR_11) {
  FUNC_3(VAR_12, "couldn't add resources to dwc2 device\n");
  goto err;
 }

 VAR_9->dev.parent = VAR_12;

 VAR_11 = FUNC_5(VAR_6, VAR_9);
 if (VAR_11)
  goto err;

 VAR_13 = FUNC_4(VAR_12, sizeof(*VAR_13), VAR_2);
 if (!VAR_13) {
  VAR_11 = -VAR_1;
  goto err;
 }

 VAR_11 = FUNC_12(VAR_9);
 if (VAR_11) {
  FUNC_3(VAR_12, "failed to register dwc2 device\n");
  goto err;
 }

 VAR_13->phy = VAR_10;
 VAR_13->dwc2 = VAR_9;
 FUNC_9(VAR_6, VAR_13);

 return 0;
err:
 FUNC_17(VAR_10);
 FUNC_15(VAR_9);
 return VAR_11;
}

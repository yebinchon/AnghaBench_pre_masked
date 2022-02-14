
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int irq; } ;
struct TYPE_2__ {int name; } ;
struct cobalt {int device_id; int pci_dev; TYPE_1__ v4l2_dev; int * bar1; void* bar0; int card_rev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int VAR_6 ;
 int FUNC_4 (struct cobalt*,struct pci_dev*) ;
 int FUNC_5 (struct cobalt*) ;
 int FUNC_6 (struct cobalt*,int ) ;
 int FUNC_7 (struct cobalt*,int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (struct cobalt*,int ,int) ;
 int FUNC_10 (struct cobalt*,struct pci_dev*) ;
 int FUNC_11 (struct cobalt*) ;
 int FUNC_12 (struct pci_dev*,int,int,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*) ;
 void* FUNC_16 (struct pci_dev*,int,int ) ;
 int FUNC_17 (struct pci_dev*,int ,int *) ;
 int FUNC_18 (struct pci_dev*,int ,int*) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (struct pci_dev*,char*) ;
 int FUNC_21 (struct pci_dev*,int ) ;
 int FUNC_22 (struct pci_dev*) ;
 int FUNC_23 (struct cobalt*) ;
 int FUNC_24 (struct cobalt*) ;
 scalar_t__ FUNC_25 (int ,int ,int ,int ,void*) ;

__attribute__((used)) static int FUNC_26(struct cobalt *VAR_7, struct pci_dev *VAR_8,
       const struct pci_device_id *VAR_9)
{
 u32 VAR_10;
 int VAR_11;

 FUNC_1(1, "enabling pci device\n");

 VAR_11 = FUNC_15(VAR_8);
 if (VAR_11) {
  FUNC_2("can't enable device\n");
  return VAR_11;
 }
 FUNC_22(VAR_8);
 FUNC_17(VAR_8, VAR_3, &VAR_7->card_rev);
 FUNC_18(VAR_8, VAR_4, &VAR_7->device_id);

 switch (VAR_7->device_id) {
 case 128:
  FUNC_3("PCI Express interface from Omnitek\n");
  break;
 default:
  FUNC_3("PCI Express interface provider is unknown!\n");
  break;
 }

 if (FUNC_24(VAR_7) != 8) {
  FUNC_8("PCI Express link width is %d lanes.\n",
    FUNC_24(VAR_7));
  if (FUNC_23(VAR_7) < 8)
   FUNC_8("The current slot only supports %d lanes, for best performance 8 are needed\n",
     FUNC_23(VAR_7));
  if (FUNC_24(VAR_7) != FUNC_23(VAR_7)) {
   FUNC_2("The card is most likely not seated correctly in the PCIe slot\n");
   VAR_11 = -VAR_1;
   goto err_disable;
  }
 }

 if (FUNC_21(VAR_8, FUNC_0(64))) {
  VAR_11 = FUNC_21(VAR_8, FUNC_0(32));
  if (VAR_11) {
   FUNC_2("no suitable DMA available\n");
   goto err_disable;
  }
 }

 VAR_11 = FUNC_20(VAR_8, "cobalt");
 if (VAR_11) {
  FUNC_2("error requesting regions\n");
  goto err_disable;
 }

 FUNC_5(VAR_7);

 VAR_7->bar0 = FUNC_16(VAR_8, 0, 0);
 VAR_7->bar1 = FUNC_16(VAR_8, 1, 0);
 if (VAR_7->bar1 == ((void*)0)) {
  VAR_7->bar1 = FUNC_16(VAR_8, 2, 0);
  FUNC_3("64-bit BAR\n");
 }
 if (!VAR_7->bar0 || !VAR_7->bar1) {
  VAR_11 = -VAR_1;
  goto err_release;
 }


 VAR_10 = FUNC_6(VAR_7, VAR_0);
 FUNC_9(VAR_7, VAR_0, VAR_10 & ~0xf00);



 FUNC_7(VAR_7, 0);

 if (FUNC_12(VAR_8, 1, 1, VAR_5) < 1) {
  FUNC_2("Could not enable MSI\n");
  VAR_11 = -VAR_1;
  goto err_release;
 }
 FUNC_10(VAR_7, VAR_8);


 if (FUNC_25(VAR_8->irq, VAR_6, VAR_2,
   VAR_7->v4l2_dev.name, (void *)VAR_7)) {
  FUNC_2("Failed to register irq %d\n", VAR_8->irq);
  VAR_11 = -VAR_1;
  goto err_msi;
 }

 FUNC_11(VAR_7);
 return 0;

err_msi:
 FUNC_14(VAR_8);

err_release:
 FUNC_4(VAR_7, VAR_8);
 FUNC_19(VAR_8);

err_disable:
 FUNC_13(VAR_7->pci_dev);
 return VAR_11;
}

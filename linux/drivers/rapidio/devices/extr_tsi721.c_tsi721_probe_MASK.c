
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tsi721_device {void* odb_base; void* regs; TYPE_1__* p2r_bar; struct pci_dev* pdev; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int * resource; } ;
struct TYPE_2__ {scalar_t__ size; void* base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct tsi721_device*) ;
 struct tsi721_device* FUNC_4 (int,int ) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 void* FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_13 (struct pci_dev*,int ) ;
 void* FUNC_14 (struct pci_dev*,int ) ;
 int FUNC_15 (struct pci_dev*,int ) ;
 int FUNC_16 (struct pci_dev*,int ) ;
 int FUNC_17 (struct pci_dev*,struct tsi721_device*) ;
 int FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct pci_dev*,int ,int) ;
 int FUNC_20 (struct pci_dev*,int ,int,int) ;
 int VAR_26 ;
 int FUNC_21 (struct tsi721_device*) ;
 scalar_t__ FUNC_22 (struct tsi721_device*) ;
 int FUNC_23 (struct tsi721_device*) ;
 int FUNC_24 (struct tsi721_device*) ;
 int FUNC_25 (struct tsi721_device*) ;
 int FUNC_26 (struct tsi721_device*) ;
 int FUNC_27 (struct tsi721_device*) ;
 int FUNC_28 (struct tsi721_device*) ;
 int FUNC_29 (struct tsi721_device*) ;
 int FUNC_30 (struct tsi721_device*) ;
 int FUNC_31 (struct tsi721_device*) ;
 int FUNC_32 (struct tsi721_device*) ;
 int FUNC_33 (int ,int *,char*,...) ;
 int FUNC_34 (int *,char*) ;
 int FUNC_35 (int *,char*,...) ;

__attribute__((used)) static int FUNC_36(struct pci_dev *VAR_27,
      const struct pci_device_id *VAR_28)
{
 struct tsi721_device *VAR_29;
 int VAR_30;

 VAR_29 = FUNC_4(sizeof(struct tsi721_device), VAR_7);
 if (!VAR_29) {
  VAR_30 = -VAR_6;
  goto err_exit;
 }

 VAR_30 = FUNC_7(VAR_27);
 if (VAR_30) {
  FUNC_34(&VAR_27->dev, "Failed to enable PCI device");
  goto err_clean;
 }

 VAR_29->pdev = VAR_27;
 if (!(FUNC_12(VAR_27, VAR_0) & VAR_9) ||
     FUNC_12(VAR_27, VAR_0) & VAR_10 ||
     FUNC_13(VAR_27, VAR_0) < VAR_25) {
  FUNC_34(&VAR_27->dev, "Missing or misconfigured CSR BAR0");
  VAR_30 = -VAR_5;
  goto err_disable_pdev;
 }


 if (!(FUNC_12(VAR_27, VAR_1) & VAR_9) ||
     FUNC_12(VAR_27, VAR_1) & VAR_10 ||
     FUNC_13(VAR_27, VAR_1) < VAR_19) {
  FUNC_34(&VAR_27->dev, "Missing or misconfigured Doorbell BAR1");
  VAR_30 = -VAR_5;
  goto err_disable_pdev;
 }
 VAR_29->p2r_bar[0].size = VAR_29->p2r_bar[1].size = 0;

 if (FUNC_12(VAR_27, VAR_2) & VAR_10) {
  if (FUNC_12(VAR_27, VAR_2) & VAR_11)
   FUNC_33(VAR_8, &VAR_27->dev,
     "Prefetchable OBW BAR2 will not be used");
  else {
   VAR_29->p2r_bar[0].base = FUNC_14(VAR_27, VAR_2);
   VAR_29->p2r_bar[0].size = FUNC_13(VAR_27, VAR_2);
  }
 }

 if (FUNC_12(VAR_27, VAR_3) & VAR_10) {
  if (FUNC_12(VAR_27, VAR_3) & VAR_11)
   FUNC_33(VAR_8, &VAR_27->dev,
     "Prefetchable OBW BAR4 will not be used");
  else {
   VAR_29->p2r_bar[1].base = FUNC_14(VAR_27, VAR_3);
   VAR_29->p2r_bar[1].size = FUNC_13(VAR_27, VAR_3);
  }
 }

 VAR_30 = FUNC_11(VAR_27, VAR_4);
 if (VAR_30) {
  FUNC_34(&VAR_27->dev, "Unable to obtain PCI resources");
  goto err_disable_pdev;
 }

 FUNC_18(VAR_27);

 VAR_29->regs = FUNC_8(VAR_27, VAR_0);
 if (!VAR_29->regs) {
  FUNC_34(&VAR_27->dev, "Unable to map device registers space");
  VAR_30 = -VAR_6;
  goto err_free_res;
 }

 VAR_29->odb_base = FUNC_8(VAR_27, VAR_1);
 if (!VAR_29->odb_base) {
  FUNC_34(&VAR_27->dev, "Unable to map outbound doorbells space");
  VAR_30 = -VAR_6;
  goto err_unmap_bars;
 }


 if (FUNC_16(VAR_27, FUNC_1(64))) {
  VAR_30 = FUNC_16(VAR_27, FUNC_1(32));
  if (VAR_30) {
   FUNC_34(&VAR_27->dev, "Unable to set DMA mask");
   goto err_unmap_bars;
  }

  if (FUNC_15(VAR_27, FUNC_1(32)))
   FUNC_35(&VAR_27->dev, "Unable to set consistent DMA mask");
 } else {
  VAR_30 = FUNC_15(VAR_27, FUNC_1(64));
  if (VAR_30)
   FUNC_35(&VAR_27->dev, "Unable to set consistent DMA mask");
 }

 FUNC_0(!FUNC_9(VAR_27));


 FUNC_20(VAR_27, VAR_12,
  VAR_17 | VAR_15, 0);


 if (VAR_26 >= 0) {
  if (VAR_26 <= 5)
   FUNC_20(VAR_27, VAR_12,
     VAR_16, VAR_26 << 12);
  else
   FUNC_35(&VAR_27->dev,
     "Invalid MRRS override value %d", VAR_26);
 }


 FUNC_20(VAR_27, VAR_13,
        VAR_14, 0x2);




 FUNC_19(VAR_27, VAR_22, 0x01);
 FUNC_19(VAR_27, VAR_24,
      VAR_21);
 FUNC_19(VAR_27, VAR_23,
      VAR_20);
 FUNC_19(VAR_27, VAR_22, 0);


 FUNC_23(VAR_29);

 FUNC_26(VAR_29);
 FUNC_27(VAR_29);

 if (FUNC_22(VAR_29)) {
  FUNC_34(&VAR_27->dev, "BDMA initialization failed");
  VAR_30 = -VAR_6;
  goto err_unmap_bars;
 }

 VAR_30 = FUNC_25(VAR_29);
 if (VAR_30)
  goto err_free_bdma;

 FUNC_31(VAR_29);

 VAR_30 = FUNC_29(VAR_29);
 if (VAR_30)
  goto err_free_consistent;

 VAR_30 = FUNC_32(VAR_29);
 if (VAR_30)
  goto err_free_consistent;

 FUNC_17(VAR_27, VAR_29);
 FUNC_28(VAR_29);

 return 0;

err_free_consistent:
 FUNC_30(VAR_29);
 FUNC_24(VAR_29);
err_free_bdma:
 FUNC_21(VAR_29);
err_unmap_bars:
 if (VAR_29->regs)
  FUNC_2(VAR_29->regs);
 if (VAR_29->odb_base)
  FUNC_2(VAR_29->odb_base);
err_free_res:
 FUNC_10(VAR_27);
 FUNC_5(VAR_27);
err_disable_pdev:
 FUNC_6(VAR_27);
err_clean:
 FUNC_3(VAR_29);
err_exit:
 return VAR_30;
}

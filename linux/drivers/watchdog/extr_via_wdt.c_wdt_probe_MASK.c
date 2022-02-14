
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct TYPE_8__ {int timeout; int bootstatus; int * parent; } ;
struct TYPE_7__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,int ,int,int,int,int *,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int VAR_11 ;
 int * FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (int *,scalar_t__) ;
 int VAR_14 ;
 int FUNC_6 (struct pci_dev*) ;
 scalar_t__ FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int ,unsigned char*) ;
 int FUNC_9 (struct pci_dev*,int ,scalar_t__*) ;
 int FUNC_10 (struct pci_dev*,int ,unsigned char) ;
 int FUNC_11 (struct pci_dev*,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (scalar_t__,int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (scalar_t__,int ,char*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*,int ) ;
 TYPE_2__ VAR_17 ;
 int * VAR_18 ;
 TYPE_1__ VAR_19 ;

__attribute__((used)) static int FUNC_18(struct pci_dev *VAR_20,
          const struct pci_device_id *VAR_21)
{
 unsigned char VAR_22;
 int VAR_23 = -VAR_0;

 if (FUNC_7(VAR_20)) {
  FUNC_1(&VAR_20->dev, "cannot enable PCI device\n");
  return -VAR_0;
 }







 if (FUNC_0(&VAR_11, &VAR_19, VAR_6,
         0xf0000000, 0xffffff00, 0xff, ((void*)0), ((void*)0))) {
  FUNC_1(&VAR_20->dev, "MMIO allocation failed\n");
  goto err_out_disable_device;
 }

 FUNC_11(VAR_20, VAR_5, VAR_19.start);
 FUNC_8(VAR_20, VAR_1, &VAR_22);
 VAR_22 |= VAR_2 | VAR_3;
 FUNC_10(VAR_20, VAR_1, VAR_22);

 FUNC_9(VAR_20, VAR_5, &VAR_13);
 if (VAR_13) {
  FUNC_2(&VAR_20->dev, "VIA Chipset watchdog MMIO: %x\n", VAR_13);
 } else {
  FUNC_1(&VAR_20->dev, "MMIO setting failed. Check BIOS.\n");
  goto err_out_resource;
 }

 if (!FUNC_15(VAR_13, VAR_6, "via_wdt")) {
  FUNC_1(&VAR_20->dev, "MMIO region busy\n");
  goto err_out_resource;
 }

 VAR_18 = FUNC_3(VAR_13, VAR_6);
 if (VAR_18 == ((void*)0)) {
  FUNC_1(&VAR_20->dev, "cannot remap VIA wdt MMIO registers\n");
  goto err_out_release;
 }

 if (VAR_15 < 1 || VAR_15 > VAR_10)
  VAR_15 = VAR_9;

 VAR_17.timeout = VAR_15;
 VAR_17.parent = &VAR_20->dev;
 FUNC_17(&VAR_17, VAR_14);
 if (FUNC_12(VAR_18) & VAR_4)
  VAR_17.bootstatus |= VAR_7;

 VAR_23 = FUNC_16(&VAR_17);
 if (VAR_23)
  goto err_out_iounmap;


 FUNC_5(&VAR_16, VAR_12 + VAR_8);
 return 0;

err_out_iounmap:
 FUNC_4(VAR_18);
err_out_release:
 FUNC_13(VAR_13, VAR_6);
err_out_resource:
 FUNC_14(&VAR_19);
err_out_disable_device:
 FUNC_6(VAR_20);
 return VAR_23;
}

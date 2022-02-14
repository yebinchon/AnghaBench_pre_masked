
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct esas2r_adapter {int flags2; int intr_mode; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct esas2r_adapter*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct esas2r_adapter*) ;
 int FUNC_3 (struct esas2r_adapter*) ;
 int FUNC_4 (struct esas2r_adapter*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int *,char*,...) ;
 scalar_t__ FUNC_7 (struct esas2r_adapter*) ;
 int FUNC_8 (struct esas2r_adapter*,int) ;
 int FUNC_9 (struct esas2r_adapter*,int ) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int ,int ) ;
 struct Scsi_Host* FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_16 (int ,int *) ;

int FUNC_17(struct pci_dev *VAR_6)
{
 struct Scsi_Host *VAR_7 = FUNC_12(VAR_6);
 struct esas2r_adapter *VAR_8 = (struct esas2r_adapter *)VAR_7->hostdata;
 int VAR_9;

 FUNC_6(VAR_4, &(VAR_6->dev), "resuming adapter()");
 FUNC_6(VAR_4, &(VAR_6->dev),
         "pci_set_power_state(PCI_D0) "
         "called");
 FUNC_15(VAR_6, VAR_5);
 FUNC_6(VAR_4, &(VAR_6->dev),
         "pci_enable_wake(PCI_D0, 0) "
         "called");
 FUNC_11(VAR_6, VAR_5, 0);
 FUNC_6(VAR_4, &(VAR_6->dev),
         "pci_restore_state() called");
 FUNC_13(VAR_6);
 FUNC_6(VAR_4, &(VAR_6->dev),
         "pci_enable_device() called");
 VAR_9 = FUNC_10(VAR_6);
 FUNC_14(VAR_6);

 if (!VAR_8) {
  VAR_9 = -VAR_1;
  goto error_exit;
 }

 if (FUNC_7(VAR_8) != 0) {
  FUNC_5(VAR_3, "could not re-map PCI regions!");
  VAR_9 = -VAR_2;
  goto error_exit;
 }


 FUNC_9(VAR_8, VAR_8->intr_mode);





 FUNC_2(VAR_8);
 if (!FUNC_8(VAR_8, 1)) {
  FUNC_1("yikes, esas2r_power_up failed");
  VAR_9 = -VAR_2;
  goto error_exit;
 }

 FUNC_0(VAR_8);

 if (FUNC_16(VAR_0, &VAR_8->flags2)) {




  FUNC_3(VAR_8);
  FUNC_4(VAR_8);
 } else {
  FUNC_1("yikes, unable to claim IRQ");
  FUNC_5(VAR_3, "could not re-claim IRQ!");
  VAR_9 = -VAR_2;
  goto error_exit;
 }

error_exit:
 FUNC_6(VAR_3, &(VAR_6->dev), "esas2r_resume(): %d",
         VAR_9);
 return VAR_9;
}

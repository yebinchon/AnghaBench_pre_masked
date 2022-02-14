
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct esas2r_adapter {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct esas2r_adapter*,int) ;
 int FUNC_1 (int ,int *,char*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 struct Scsi_Host* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ) ;

int FUNC_7(struct pci_dev *VAR_2, pm_message_t VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_4(VAR_2);
 u32 VAR_5;
 struct esas2r_adapter *VAR_6 = (struct esas2r_adapter *)VAR_4->hostdata;

 FUNC_1(VAR_1, &(VAR_2->dev), "suspending adapter()");
 if (!VAR_6)
  return -VAR_0;

 FUNC_0(VAR_6, 1);
 VAR_5 = FUNC_2(VAR_2, VAR_3);
 FUNC_1(VAR_1, &(VAR_2->dev),
         "pci_save_state() called");
 FUNC_5(VAR_2);
 FUNC_1(VAR_1, &(VAR_2->dev),
         "pci_disable_device() called");
 FUNC_3(VAR_2);
 FUNC_1(VAR_1, &(VAR_2->dev),
         "pci_set_power_state() called");
 FUNC_6(VAR_2, VAR_5);
 FUNC_1(VAR_1, &(VAR_2->dev), "esas2r_suspend(): 0");
 return 0;
}

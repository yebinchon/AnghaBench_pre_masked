
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_6__ {int dma; int va; int size; } ;
struct TYPE_7__ {TYPE_2__ mbox_mem_alloced; } ;
struct TYPE_5__ {int boot_kset; } ;
struct beiscsi_hba {int shost; TYPE_4__* pcidev; TYPE_3__ ctrl; int wq; TYPE_1__ boot_struct; int sess_work; int recover_port; int hw_check; } ;
struct TYPE_8__ {int dev; } ;


 int FUNC_0 (struct beiscsi_hba*,int) ;
 int FUNC_1 (struct beiscsi_hba*) ;
 int FUNC_2 (struct beiscsi_hba*) ;
 int FUNC_3 (struct beiscsi_hba*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int ,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*) ;
 struct beiscsi_hba* FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct pci_dev*,int *) ;

__attribute__((used)) static void FUNC_19(struct pci_dev *VAR_0)
{
 struct beiscsi_hba *VAR_1 = ((void*)0);

 VAR_1 = FUNC_16(VAR_0);
 if (!VAR_1) {
  FUNC_8(&VAR_0->dev, "beiscsi_remove called with no phba\n");
  return;
 }


 FUNC_6(&VAR_1->hw_check);
 FUNC_4(&VAR_1->recover_port);
 FUNC_5(&VAR_1->sess_work);

 FUNC_2(VAR_1);
 FUNC_12(VAR_1->shost);
 FUNC_0(VAR_1, 1);


 FUNC_10(VAR_1->boot_struct.boot_kset);


 FUNC_7(VAR_1->wq);
 FUNC_1(VAR_1);


 FUNC_3(VAR_1);
 FUNC_9(&VAR_1->pcidev->dev,
       VAR_1->ctrl.mbox_mem_alloced.size,
       VAR_1->ctrl.mbox_mem_alloced.va,
       VAR_1->ctrl.mbox_mem_alloced.dma);

 FUNC_13(VAR_1->pcidev);
 FUNC_11(VAR_1->shost);
 FUNC_15(VAR_0);
 FUNC_18(VAR_0, ((void*)0));
 FUNC_17(VAR_0);
 FUNC_14(VAR_0);
}

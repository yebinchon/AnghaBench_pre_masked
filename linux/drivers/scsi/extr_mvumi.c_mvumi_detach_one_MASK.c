
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct mvumi_hba {TYPE_2__* pdev; TYPE_1__* instancet; struct Scsi_Host* shost; int * dm_thread; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_4__ {int irq; } ;
struct TYPE_3__ {int (* disable_intr ) (struct mvumi_hba*) ;} ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,struct mvumi_hba*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mvumi_hba*) ;
 int FUNC_4 (struct mvumi_hba*) ;
 int FUNC_5 (struct mvumi_hba*) ;
 int FUNC_6 (struct pci_dev*) ;
 struct mvumi_hba* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (struct Scsi_Host*) ;
 int FUNC_10 (struct mvumi_hba*) ;

__attribute__((used)) static void FUNC_11(struct pci_dev *VAR_0)
{
 struct Scsi_Host *VAR_1;
 struct mvumi_hba *VAR_2;

 VAR_2 = FUNC_7(VAR_0);
 if (VAR_2->dm_thread) {
  FUNC_2(VAR_2->dm_thread);
  VAR_2->dm_thread = ((void*)0);
 }

 FUNC_3(VAR_2);
 VAR_1 = VAR_2->shost;
 FUNC_9(VAR_2->shost);
 FUNC_4(VAR_2);

 VAR_2->instancet->disable_intr(VAR_2);
 FUNC_1(VAR_2->pdev->irq, VAR_2);
 FUNC_5(VAR_2);
 FUNC_8(VAR_1);
 FUNC_6(VAR_0);
 FUNC_0(&VAR_0->dev, "driver is removed!\n");
}

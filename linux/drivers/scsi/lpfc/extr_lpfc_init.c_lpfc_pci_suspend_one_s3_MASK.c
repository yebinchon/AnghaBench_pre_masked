
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int worker_thread; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,int ) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 struct Scsi_Host* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ) ;

__attribute__((used)) static int
FUNC_8(struct pci_dev *VAR_4, pm_message_t VAR_5)
{
 struct Scsi_Host *VAR_6 = FUNC_5(VAR_4);
 struct lpfc_hba *VAR_7 = ((struct lpfc_vport *)VAR_6->hostdata)->phba;

 FUNC_3(VAR_7, VAR_0, VAR_1,
   "0473 PCI device Power Management suspend.\n");


 FUNC_2(VAR_7, VAR_2);
 FUNC_1(VAR_7);
 FUNC_0(VAR_7->worker_thread);


 FUNC_4(VAR_7);


 FUNC_6(VAR_4);
 FUNC_7(VAR_4, VAR_3);

 return 0;
}

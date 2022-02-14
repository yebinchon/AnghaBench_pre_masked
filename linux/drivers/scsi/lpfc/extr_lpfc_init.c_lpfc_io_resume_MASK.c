
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int pci_dev_grp; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,int) ;
 struct Scsi_Host* FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static void
FUNC_4(struct pci_dev *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_3(VAR_2);
 struct lpfc_hba *VAR_4 = ((struct lpfc_vport *)VAR_3->hostdata)->phba;

 switch (VAR_4->pci_dev_grp) {
 case 129:
  FUNC_0(VAR_2);
  break;
 case 128:
  FUNC_1(VAR_2);
  break;
 default:
  FUNC_2(VAR_4, VAR_0, VAR_1,
    "1429 Invalid PCI device group: 0x%x\n",
    VAR_4->pci_dev_grp);
  break;
 }
 return;
}

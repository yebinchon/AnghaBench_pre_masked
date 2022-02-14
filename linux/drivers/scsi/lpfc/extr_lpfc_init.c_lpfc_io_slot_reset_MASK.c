
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int pci_dev_grp; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,int) ;
 struct Scsi_Host* FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t
FUNC_4(struct pci_dev *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_3(VAR_3);
 struct lpfc_hba *VAR_5 = ((struct lpfc_vport *)VAR_4->hostdata)->phba;
 pci_ers_result_t VAR_6 = VAR_2;

 switch (VAR_5->pci_dev_grp) {
 case 129:
  VAR_6 = FUNC_0(VAR_3);
  break;
 case 128:
  VAR_6 = FUNC_1(VAR_3);
  break;
 default:
  FUNC_2(VAR_5, VAR_0, VAR_1,
    "1428 Invalid PCI device group: 0x%x\n",
    VAR_5->pci_dev_grp);
  break;
 }
 return VAR_6;
}

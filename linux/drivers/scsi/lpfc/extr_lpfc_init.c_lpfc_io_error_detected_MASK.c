
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int pci_dev_grp; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int pci_ers_result_t ;
typedef int pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,int) ;
 struct Scsi_Host* FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t
FUNC_4(struct pci_dev *VAR_3, pci_channel_state_t VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_3(VAR_3);
 struct lpfc_hba *VAR_6 = ((struct lpfc_vport *)VAR_5->hostdata)->phba;
 pci_ers_result_t VAR_7 = VAR_2;

 switch (VAR_6->pci_dev_grp) {
 case 129:
  VAR_7 = FUNC_0(VAR_3, VAR_4);
  break;
 case 128:
  VAR_7 = FUNC_1(VAR_3, VAR_4);
  break;
 default:
  FUNC_2(VAR_6, VAR_0, VAR_1,
    "1427 Invalid PCI device group: 0x%x\n",
    VAR_6->pci_dev_grp);
  break;
 }
 return VAR_7;
}

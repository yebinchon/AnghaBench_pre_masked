
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int pci_ers_result_t ;
typedef int pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,int) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*) ;



 struct Scsi_Host* FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t
FUNC_5(struct pci_dev *VAR_5, pci_channel_state_t VAR_6)
{
 struct Scsi_Host *VAR_7 = FUNC_4(VAR_5);
 struct lpfc_hba *VAR_8 = ((struct lpfc_vport *)VAR_7->hostdata)->phba;

 switch (VAR_6) {
 case 129:

  FUNC_2(VAR_8);
  return VAR_2;
 case 130:

  FUNC_3(VAR_8);
  return VAR_4;
 case 128:

  FUNC_1(VAR_8);
  return VAR_3;
 default:

  FUNC_0(VAR_8, VAR_0, VAR_1,
    "0472 Unknown PCI error state: x%x\n", VAR_6);
  FUNC_3(VAR_8);
  return VAR_4;
 }
}

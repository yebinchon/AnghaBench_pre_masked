
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_2__ {int sli_flag; } ;
struct lpfc_hba {TYPE_1__ sli; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*,int ) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*) ;
 struct Scsi_Host* FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static void
FUNC_5(struct pci_dev *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_4(VAR_2);
 struct lpfc_hba *VAR_4 = ((struct lpfc_vport *)VAR_3->hostdata)->phba;







 if (!(VAR_4->sli.sli_flag & VAR_1)) {

  FUNC_1(VAR_4, VAR_0);
  FUNC_0(VAR_4);
  FUNC_3(VAR_4);

  FUNC_2(VAR_4);
 }
}

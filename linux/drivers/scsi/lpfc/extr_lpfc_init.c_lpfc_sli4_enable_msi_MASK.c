
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* hba_eq_hdl; } ;
struct lpfc_hba {int cfg_irq_chann; TYPE_2__ sli4_hba; TYPE_3__* pcidev; } ;
struct TYPE_7__ {int irq; } ;
struct TYPE_5__ {int idx; struct lpfc_hba* phba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,...) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*,int,int,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ,int ,int ,struct lpfc_hba*) ;

__attribute__((used)) static int
FUNC_4(struct lpfc_hba *VAR_7)
{
 int VAR_8, VAR_9;

 VAR_8 = FUNC_1(VAR_7->pcidev, 1, 1,
       VAR_5 | VAR_4);
 if (VAR_8 > 0)
  FUNC_0(VAR_7, VAR_0, VAR_2,
    "0487 PCI enable MSI mode success.\n");
 else {
  FUNC_0(VAR_7, VAR_0, VAR_2,
    "0488 PCI enable MSI mode failed (%d)\n", VAR_8);
  return VAR_8 ? VAR_8 : -1;
 }

 VAR_8 = FUNC_3(VAR_7->pcidev->irq, VAR_6,
    0, VAR_3, VAR_7);
 if (VAR_8) {
  FUNC_2(VAR_7->pcidev);
  FUNC_0(VAR_7, VAR_1, VAR_2,
    "0490 MSI request_irq failed (%d)\n", VAR_8);
  return VAR_8;
 }

 for (VAR_9 = 0; VAR_9 < VAR_7->cfg_irq_chann; VAR_9++) {
  VAR_7->sli4_hba.hba_eq_hdl[VAR_9].idx = VAR_9;
  VAR_7->sli4_hba.hba_eq_hdl[VAR_9].phba = VAR_7;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_13__ {scalar_t__ ras_enabled; } ;
struct TYPE_12__ {int sli_flag; TYPE_7__* mbox_active; } ;
struct TYPE_9__ {scalar_t__ intr_enable; } ;
struct lpfc_hba {TYPE_6__* pport; TYPE_5__ ras_fwlog; int worker_thread; scalar_t__ cfg_sriov_nr_virtfn; int hbalock; TYPE_4__ sli; TYPE_1__ sli4_hba; struct pci_dev* pcidev; } ;
struct TYPE_10__ {int mbxStatus; } ;
struct TYPE_11__ {TYPE_2__ mb; } ;
struct TYPE_15__ {TYPE_3__ u; } ;
struct TYPE_14__ {scalar_t__ work_port_events; } ;
typedef TYPE_7__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpfc_hba*,TYPE_7__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*) ;
 int FUNC_6 (struct lpfc_hba*) ;
 int FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (struct lpfc_hba*) ;
 int FUNC_9 (struct lpfc_hba*) ;
 int FUNC_10 (struct lpfc_hba*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void
FUNC_15(struct lpfc_hba *VAR_4)
{
 int VAR_5 = 0;
 LPFC_MBOXQ_t *VAR_6;
 struct pci_dev *VAR_7 = VAR_4->pcidev;

 FUNC_10(VAR_4);
 if (VAR_4->pport)
  VAR_4->sli4_hba.intr_enable = 0;







 FUNC_13(&VAR_4->hbalock);
 VAR_4->sli.sli_flag |= VAR_1;
 FUNC_14(&VAR_4->hbalock);

 while (VAR_4->sli.sli_flag & VAR_2) {
  FUNC_11(10);
  if (++VAR_5 > VAR_0)
   break;
 }

 if (VAR_4->sli.sli_flag & VAR_2) {
  FUNC_13(&VAR_4->hbalock);
  VAR_6 = VAR_4->sli.mbox_active;
  VAR_6->u.mb.mbxStatus = VAR_3;
  FUNC_0(VAR_4, VAR_6);
  VAR_4->sli.sli_flag &= ~VAR_2;
  VAR_4->sli.mbox_active = ((void*)0);
  FUNC_14(&VAR_4->hbalock);
 }


 FUNC_9(VAR_4);


 FUNC_8(VAR_4);


 FUNC_4(VAR_4);


 if (VAR_4->cfg_sriov_nr_virtfn)
  FUNC_12(VAR_7);


 FUNC_1(VAR_4->worker_thread);


 FUNC_3(VAR_4);




 FUNC_6(VAR_4);
 FUNC_5(VAR_4);


 FUNC_2(VAR_4);


 if (VAR_4->ras_fwlog.ras_enabled)
  FUNC_7(VAR_4);


 if (VAR_4->pport)
  VAR_4->pport->work_port_events = 0;
}

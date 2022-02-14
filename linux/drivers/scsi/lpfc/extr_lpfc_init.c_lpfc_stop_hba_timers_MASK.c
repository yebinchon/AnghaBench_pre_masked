
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mbox_tmo; } ;
struct lpfc_hba {scalar_t__ sli_rev; int pci_dev_grp; int fcp_poll_timer; scalar_t__ hb_outstanding; int hba_flag; int rrq_tmr; int hb_tmofunc; int eratt_poll; int fabric_block_timer; TYPE_1__ sli; int eq_delay_work; scalar_t__ pport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,int) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (scalar_t__) ;

void
FUNC_5(struct lpfc_hba *VAR_4)
{
 if (VAR_4->pport)
  FUNC_4(VAR_4->pport);
 FUNC_0(&VAR_4->eq_delay_work);
 FUNC_1(&VAR_4->sli.mbox_tmo);
 FUNC_1(&VAR_4->fabric_block_timer);
 FUNC_1(&VAR_4->eratt_poll);
 FUNC_1(&VAR_4->hb_tmofunc);
 if (VAR_4->sli_rev == VAR_3) {
  FUNC_1(&VAR_4->rrq_tmr);
  VAR_4->hba_flag &= ~VAR_0;
 }
 VAR_4->hb_outstanding = 0;

 switch (VAR_4->pci_dev_grp) {
 case 129:

  FUNC_1(&VAR_4->fcp_poll_timer);
  break;
 case 128:

  FUNC_3(VAR_4);
  break;
 default:
  FUNC_2(VAR_4, VAR_1, VAR_2,
    "0297 Invalid device group (x%x)\n",
    VAR_4->pci_dev_grp);
  break;
 }
 return;
}

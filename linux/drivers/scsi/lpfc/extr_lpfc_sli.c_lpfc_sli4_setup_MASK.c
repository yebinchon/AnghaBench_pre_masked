
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lpfc_sli_ring {TYPE_3__* prt; int num_mask; } ;
struct TYPE_5__ {TYPE_1__* els_wq; } ;
struct lpfc_hba {TYPE_2__ sli4_hba; } ;
struct TYPE_6__ {void* lpfc_sli_rcv_unsol_event; void* type; int rctl; scalar_t__ profile; } ;
struct TYPE_4__ {struct lpfc_sli_ring* pring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;

int
FUNC_0(struct lpfc_hba *VAR_9)
{
 struct lpfc_sli_ring *VAR_10;

 VAR_10 = VAR_9->sli4_hba.els_wq->pring;
 VAR_10->num_mask = VAR_6;
 VAR_10->prt[0].profile = 0;
 VAR_10->prt[0].rctl = VAR_3;
 VAR_10->prt[0].type = VAR_5;
 VAR_10->prt[0].lpfc_sli_rcv_unsol_event =
     VAR_8;
 VAR_10->prt[1].profile = 0;
 VAR_10->prt[1].rctl = VAR_2;
 VAR_10->prt[1].type = VAR_5;
 VAR_10->prt[1].lpfc_sli_rcv_unsol_event =
     VAR_8;
 VAR_10->prt[2].profile = 0;

 VAR_10->prt[2].rctl = VAR_1;

 VAR_10->prt[2].type = VAR_4;
 VAR_10->prt[2].lpfc_sli_rcv_unsol_event =
     VAR_7;
 VAR_10->prt[3].profile = 0;

 VAR_10->prt[3].rctl = VAR_0;

 VAR_10->prt[3].type = VAR_4;
 VAR_10->prt[3].lpfc_sli_rcv_unsol_event =
     VAR_7;
 return 0;
}

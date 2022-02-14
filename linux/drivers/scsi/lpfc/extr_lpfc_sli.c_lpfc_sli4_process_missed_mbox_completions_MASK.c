
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct lpfc_sli4_hba {int (* sli4_write_eq_db ) (struct lpfc_hba*,struct lpfc_queue*,int ,int ) ;int (* sli4_eq_clr_intr ) (struct lpfc_queue*) ;TYPE_2__* mbx_cq; TYPE_1__* hba_eq_hdl; scalar_t__ hdwq; } ;
struct lpfc_queue {scalar_t__ queue_id; } ;
struct lpfc_hba {scalar_t__ sli_rev; size_t cfg_irq_chann; struct lpfc_sli4_hba sli4_hba; } ;
struct TYPE_4__ {scalar_t__ assoc_qid; } ;
struct TYPE_3__ {struct lpfc_queue* eq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_queue*) ;
 int FUNC_2 (struct lpfc_queue*) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_queue*,int ,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static bool
FUNC_5(struct lpfc_hba *VAR_2)
{
 struct lpfc_sli4_hba *VAR_3 = &VAR_2->sli4_hba;
 uint32_t VAR_4;
 struct lpfc_queue *VAR_5 = ((void*)0);
 struct lpfc_queue *VAR_6;
 bool VAR_7;

 if (FUNC_4(!VAR_2) || (VAR_2->sli_rev != VAR_1))
  return 0;


 if (VAR_3->hdwq) {
  for (VAR_4 = 0; VAR_4 < VAR_2->cfg_irq_chann; VAR_4++) {
   VAR_6 = VAR_2->sli4_hba.hba_eq_hdl[VAR_4].eq;
   if (VAR_6 && VAR_6->queue_id == VAR_3->mbx_cq->assoc_qid) {
    VAR_5 = VAR_6;
    break;
   }
  }
 }
 if (!VAR_5)
  return 0;



 VAR_3->sli4_eq_clr_intr(VAR_5);



 VAR_7 = FUNC_0(VAR_2);
 if (VAR_7)

  FUNC_1(VAR_2, VAR_5);
 else

  VAR_3->sli4_write_eq_db(VAR_2, VAR_5, 0, VAR_0);

 return VAR_7;

}

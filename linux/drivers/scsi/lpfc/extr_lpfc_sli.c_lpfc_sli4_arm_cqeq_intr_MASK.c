
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_sli4_hdw_queue {scalar_t__ io_cq; } ;
struct lpfc_sli4_hba {scalar_t__* nvmet_cqset; int (* sli4_write_cq_db ) (struct lpfc_hba*,scalar_t__,int ,int ) ;int (* sli4_write_eq_db ) (struct lpfc_hba*,struct lpfc_queue*,int ,int ) ;TYPE_1__* hba_eq_hdl; struct lpfc_sli4_hdw_queue* hdwq; scalar_t__ nvmels_cq; scalar_t__ els_cq; scalar_t__ mbx_cq; } ;
struct lpfc_queue {int dummy; } ;
struct lpfc_hba {int cfg_hdw_queue; int cfg_irq_chann; int cfg_nvmet_mrq; scalar_t__ nvmet_support; struct lpfc_sli4_hba sli4_hba; } ;
struct TYPE_2__ {struct lpfc_queue* eq; } ;


 int VAR_0 ;
 int FUNC_0 (struct lpfc_hba*,scalar_t__,int ,int ) ;
 int FUNC_1 (struct lpfc_hba*,scalar_t__,int ,int ) ;
 int FUNC_2 (struct lpfc_hba*,scalar_t__,int ,int ) ;
 int FUNC_3 (struct lpfc_hba*,scalar_t__,int ,int ) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_queue*,int ,int ) ;
 int FUNC_5 (struct lpfc_hba*,scalar_t__,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct lpfc_hba *VAR_1)
{
 int VAR_2;
 struct lpfc_sli4_hba *VAR_3 = &VAR_1->sli4_hba;
 struct lpfc_sli4_hdw_queue *VAR_4;
 struct lpfc_queue *VAR_5;

 VAR_3->sli4_write_cq_db(VAR_1, VAR_3->mbx_cq, 0, VAR_0);
 VAR_3->sli4_write_cq_db(VAR_1, VAR_3->els_cq, 0, VAR_0);
 if (VAR_3->nvmels_cq)
  VAR_3->sli4_write_cq_db(VAR_1, VAR_3->nvmels_cq, 0,
        VAR_0);

 if (VAR_3->hdwq) {

  for (VAR_2 = 0; VAR_2 < VAR_1->cfg_hdw_queue; VAR_2++) {
   VAR_4 = &VAR_3->hdwq[VAR_2];

   VAR_3->sli4_write_cq_db(VAR_1, VAR_4->io_cq, 0,
      VAR_0);
  }


  for (VAR_2 = 0; VAR_2 < VAR_1->cfg_irq_chann; VAR_2++) {
   VAR_5 = VAR_3->hba_eq_hdl[VAR_2].eq;

   VAR_3->sli4_write_eq_db(VAR_1, VAR_5,
         0, VAR_0);
  }
 }

 if (VAR_1->nvmet_support) {
  for (VAR_2 = 0; VAR_2 < VAR_1->cfg_nvmet_mrq; VAR_2++) {
   VAR_3->sli4_write_cq_db(VAR_1,
    VAR_3->nvmet_cqset[VAR_2], 0,
    VAR_0);
  }
 }
}

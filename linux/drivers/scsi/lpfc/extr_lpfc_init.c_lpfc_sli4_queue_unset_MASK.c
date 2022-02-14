
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_sli4_hdw_queue {scalar_t__ io_cq; scalar_t__ io_wq; } ;
struct lpfc_queue {int dummy; } ;
struct TYPE_4__ {scalar_t__ cq_max; int * cq_lookup; TYPE_1__* hba_eq_hdl; struct lpfc_sli4_hdw_queue* hdwq; scalar_t__* nvmet_cqset; int * nvmet_mrq_data; scalar_t__* nvmet_mrq_hdr; scalar_t__ nvmels_cq; scalar_t__ els_cq; scalar_t__ mbx_cq; int dat_rq; scalar_t__ hdr_rq; scalar_t__ els_wq; scalar_t__ nvmels_wq; scalar_t__ mbx_wq; } ;
struct lpfc_hba {int cfg_nvmet_mrq; int cfg_hdw_queue; int cfg_irq_chann; TYPE_2__ sli4_hba; scalar_t__ nvmet_support; } ;
struct TYPE_3__ {struct lpfc_queue* eq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpfc_hba*,scalar_t__) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_queue*) ;
 int FUNC_3 (struct lpfc_hba*,scalar_t__) ;
 int FUNC_4 (struct lpfc_hba*,scalar_t__,int ) ;
 int FUNC_5 (struct lpfc_hba*,scalar_t__) ;

void
FUNC_6(struct lpfc_hba *VAR_0)
{
 struct lpfc_sli4_hdw_queue *VAR_1;
 struct lpfc_queue *VAR_2;
 int VAR_3;


 if (VAR_0->sli4_hba.mbx_wq)
  FUNC_3(VAR_0, VAR_0->sli4_hba.mbx_wq);


 if (VAR_0->sli4_hba.nvmels_wq)
  FUNC_5(VAR_0, VAR_0->sli4_hba.nvmels_wq);


 if (VAR_0->sli4_hba.els_wq)
  FUNC_5(VAR_0, VAR_0->sli4_hba.els_wq);


 if (VAR_0->sli4_hba.hdr_rq)
  FUNC_4(VAR_0, VAR_0->sli4_hba.hdr_rq,
    VAR_0->sli4_hba.dat_rq);


 if (VAR_0->sli4_hba.mbx_cq)
  FUNC_1(VAR_0, VAR_0->sli4_hba.mbx_cq);


 if (VAR_0->sli4_hba.els_cq)
  FUNC_1(VAR_0, VAR_0->sli4_hba.els_cq);


 if (VAR_0->sli4_hba.nvmels_cq)
  FUNC_1(VAR_0, VAR_0->sli4_hba.nvmels_cq);

 if (VAR_0->nvmet_support) {

  if (VAR_0->sli4_hba.nvmet_mrq_hdr) {
   for (VAR_3 = 0; VAR_3 < VAR_0->cfg_nvmet_mrq; VAR_3++)
    FUNC_4(
     VAR_0,
     VAR_0->sli4_hba.nvmet_mrq_hdr[VAR_3],
     VAR_0->sli4_hba.nvmet_mrq_data[VAR_3]);
  }


  if (VAR_0->sli4_hba.nvmet_cqset) {
   for (VAR_3 = 0; VAR_3 < VAR_0->cfg_nvmet_mrq; VAR_3++)
    FUNC_1(
     VAR_0, VAR_0->sli4_hba.nvmet_cqset[VAR_3]);
  }
 }


 if (VAR_0->sli4_hba.hdwq) {

  for (VAR_3 = 0; VAR_3 < VAR_0->cfg_hdw_queue; VAR_3++) {

   VAR_1 = &VAR_0->sli4_hba.hdwq[VAR_3];
   FUNC_5(VAR_0, VAR_1->io_wq);
   FUNC_1(VAR_0, VAR_1->io_cq);
  }

  for (VAR_3 = 0; VAR_3 < VAR_0->cfg_irq_chann; VAR_3++) {

   VAR_2 = VAR_0->sli4_hba.hba_eq_hdl[VAR_3].eq;
   FUNC_2(VAR_0, VAR_2);
  }
 }

 FUNC_0(VAR_0->sli4_hba.cq_lookup);
 VAR_0->sli4_hba.cq_lookup = ((void*)0);
 VAR_0->sli4_hba.cq_max = 0;
}

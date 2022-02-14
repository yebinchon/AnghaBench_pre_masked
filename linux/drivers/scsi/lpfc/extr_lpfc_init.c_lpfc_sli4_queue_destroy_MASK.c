
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sli_flag; } ;
struct TYPE_3__ {int lpfc_wq_list; int mbx_cq; int nvmels_cq; int els_cq; int dat_rq; int hdr_rq; int nvmels_wq; int els_wq; int mbx_wq; int nvmet_mrq_data; int nvmet_mrq_hdr; int nvmet_cqset; scalar_t__ hdwq; } ;
struct lpfc_hba {int hbalock; TYPE_2__ sli; TYPE_1__ sli4_hba; int cfg_nvmet_mrq; scalar_t__ nvmet_support; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct lpfc_hba *VAR_2)
{





 FUNC_5(&VAR_2->hbalock);
 VAR_2->sli.sli_flag |= VAR_0;
 while (VAR_2->sli.sli_flag & VAR_1) {
  FUNC_6(&VAR_2->hbalock);
  FUNC_4(20);
  FUNC_5(&VAR_2->hbalock);
 }
 FUNC_6(&VAR_2->hbalock);


 if (VAR_2->sli4_hba.hdwq)
  FUNC_2(VAR_2);

 if (VAR_2->nvmet_support) {
  FUNC_3(&VAR_2->sli4_hba.nvmet_cqset,
      VAR_2->cfg_nvmet_mrq);

  FUNC_3(&VAR_2->sli4_hba.nvmet_mrq_hdr,
      VAR_2->cfg_nvmet_mrq);
  FUNC_3(&VAR_2->sli4_hba.nvmet_mrq_data,
      VAR_2->cfg_nvmet_mrq);
 }


 FUNC_1(&VAR_2->sli4_hba.mbx_wq);


 FUNC_1(&VAR_2->sli4_hba.els_wq);


 FUNC_1(&VAR_2->sli4_hba.nvmels_wq);


 FUNC_1(&VAR_2->sli4_hba.hdr_rq);
 FUNC_1(&VAR_2->sli4_hba.dat_rq);


 FUNC_1(&VAR_2->sli4_hba.els_cq);


 FUNC_1(&VAR_2->sli4_hba.nvmels_cq);


 FUNC_1(&VAR_2->sli4_hba.mbx_cq);


 FUNC_0(&VAR_2->sli4_hba.lpfc_wq_list);


 FUNC_5(&VAR_2->hbalock);
 VAR_2->sli.sli_flag &= ~VAR_0;
 FUNC_6(&VAR_2->hbalock);
}

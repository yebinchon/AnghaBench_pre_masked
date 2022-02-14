
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct lpfc_queue {int qe_valid; int hdwq; int chann; int wq_list; } ;
struct TYPE_4__ {int lpfc_wq_list; TYPE_1__* hdwq; int wq_ecount; int wq_esize; int cq_ecount; int cq_esize; } ;
struct lpfc_hba {TYPE_2__ sli4_hba; scalar_t__ fcp_embed_io; scalar_t__ enab_exp_wqcq_pages; } ;
struct TYPE_3__ {struct lpfc_queue* io_wq; struct lpfc_queue* io_cq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct lpfc_hba*,int,int ) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,int) ;
 struct lpfc_queue* FUNC_3 (struct lpfc_hba*,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct lpfc_hba *VAR_8, int VAR_9)
{
 struct lpfc_queue *VAR_10;
 u32 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_8, VAR_9, VAR_5);

 if (VAR_8->enab_exp_wqcq_pages)

  VAR_10 = FUNC_3(VAR_8, VAR_4,
           VAR_8->sli4_hba.cq_esize,
           VAR_2, VAR_12);

 else
  VAR_10 = FUNC_3(VAR_8, VAR_3,
           VAR_8->sli4_hba.cq_esize,
           VAR_8->sli4_hba.cq_ecount, VAR_12);
 if (!VAR_10) {
  FUNC_2(VAR_8, VAR_0, VAR_1,
   "0499 Failed allocate fast-path IO CQ (%d)\n", VAR_9);
  return 1;
 }
 VAR_10->qe_valid = 1;
 VAR_10->hdwq = VAR_9;
 VAR_10->chann = VAR_12;
 VAR_8->sli4_hba.hdwq[VAR_9].io_cq = VAR_10;


 if (VAR_8->enab_exp_wqcq_pages) {

  VAR_11 = (VAR_8->fcp_embed_io) ?
   VAR_6 : VAR_8->sli4_hba.wq_esize;
  VAR_10 = FUNC_3(VAR_8, VAR_4,
           VAR_11,
           VAR_7, VAR_12);
 } else
  VAR_10 = FUNC_3(VAR_8, VAR_3,
           VAR_8->sli4_hba.wq_esize,
           VAR_8->sli4_hba.wq_ecount, VAR_12);

 if (!VAR_10) {
  FUNC_2(VAR_8, VAR_0, VAR_1,
    "0503 Failed allocate fast-path IO WQ (%d)\n",
    VAR_9);
  return 1;
 }
 VAR_10->hdwq = VAR_9;
 VAR_10->chann = VAR_12;
 VAR_8->sli4_hba.hdwq[VAR_9].io_wq = VAR_10;
 FUNC_0(&VAR_10->wq_list, &VAR_8->sli4_hba.lpfc_wq_list);
 return 0;
}

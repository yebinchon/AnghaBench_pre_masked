
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct lpfc_nvmet_tgtport {int xmt_abort_rsp_error; } ;
struct lpfc_nvmet_rcv_ctx {scalar_t__ state; int entry_cnt; int oxid; int flag; TYPE_3__* ctxbuf; int ctxlock; int list; int * hdwq; struct lpfc_iocbq* wqeq; } ;
struct lpfc_iocbq {size_t hba_wqidx; int iocb_flag; int * iocb_cmpl; int wqe_cmpl; } ;
struct TYPE_5__ {int abts_nvmet_buf_list_lock; int * hdwq; } ;
struct lpfc_hba {TYPE_2__ sli4_hba; int hbalock; TYPE_1__* targetport; } ;
struct TYPE_6__ {struct lpfc_iocbq* iocbq; } ;
struct TYPE_4__ {scalar_t__ private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lpfc_hba*,TYPE_3__*) ;
 int VAR_10 ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_nvmet_rcv_ctx*,int ,int ) ;
 int FUNC_4 (struct lpfc_hba*,int ,int ,char*,int,int,int) ;
 int FUNC_5 (struct lpfc_hba*,int *,struct lpfc_iocbq*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_10(struct lpfc_hba *VAR_11,
     struct lpfc_nvmet_rcv_ctx *VAR_12,
     uint32_t VAR_13, uint16_t VAR_14)
{
 struct lpfc_nvmet_tgtport *VAR_15;
 struct lpfc_iocbq *VAR_16;
 unsigned long VAR_17;
 bool VAR_18 = 0;
 int VAR_19;

 VAR_15 = (struct lpfc_nvmet_tgtport *)VAR_11->targetport->private;
 if (!VAR_12->wqeq) {
  VAR_12->wqeq = VAR_12->ctxbuf->iocbq;
  VAR_12->wqeq->hba_wqidx = 0;
 }

 if (VAR_12->state == VAR_7) {
  FUNC_4(VAR_11, VAR_0, VAR_2,
    "6417 NVMET ABORT ctx freed %d %d oxid x%x\n",
    VAR_12->state, VAR_12->entry_cnt, VAR_12->oxid);
  VAR_19 = VAR_8;
  goto aerr;
 }
 VAR_12->state = VAR_6;
 VAR_12->entry_cnt++;
 VAR_19 = FUNC_3(VAR_11, VAR_12, VAR_13, VAR_14);
 if (VAR_19 == 0)
  goto aerr;

 FUNC_7(&VAR_11->hbalock, VAR_17);
 VAR_16 = VAR_12->wqeq;
 VAR_16->wqe_cmpl = VAR_10;
 VAR_16->iocb_cmpl = ((void*)0);
 VAR_16->iocb_flag |= VAR_3;
 if (!VAR_12->hdwq)
  VAR_12->hdwq = &VAR_11->sli4_hba.hdwq[VAR_16->hba_wqidx];

 VAR_19 = FUNC_5(VAR_11, VAR_12->hdwq, VAR_16);
 FUNC_9(&VAR_11->hbalock, VAR_17);
 if (VAR_19 == VAR_9) {
  return 0;
 }

aerr:
 FUNC_7(&VAR_12->ctxlock, VAR_17);
 if (VAR_12->flag & VAR_5) {
  FUNC_6(&VAR_11->sli4_hba.abts_nvmet_buf_list_lock);
  FUNC_1(&VAR_12->list);
  FUNC_8(&VAR_11->sli4_hba.abts_nvmet_buf_list_lock);
  VAR_18 = 1;
 }
 VAR_12->flag &= ~(VAR_4 | VAR_5);
 FUNC_9(&VAR_12->ctxlock, VAR_17);

 FUNC_0(&VAR_15->xmt_abort_rsp_error);
 FUNC_4(VAR_11, VAR_0, VAR_1,
   "6135 Failed to Issue ABTS for oxid x%x. Status x%x "
   "(%x)\n",
   VAR_12->oxid, VAR_19, VAR_18);
 if (VAR_18)
  FUNC_2(VAR_11, VAR_12->ctxbuf);
 return 1;
}

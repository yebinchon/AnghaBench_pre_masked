
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct lpfc_nvmet_tgtport {int xmt_abort_rsp_error; int xmt_abort_unsol; } ;
struct lpfc_nvmet_rcv_ctx {scalar_t__ state; int entry_cnt; int hdwq; struct lpfc_iocbq* wqeq; int oxid; } ;
struct lpfc_iocbq {int * context3; int * context2; int iocb_flag; scalar_t__ iocb_cmpl; int wqe_cmpl; } ;
struct lpfc_hba {int hbalock; TYPE_1__* targetport; } ;
struct TYPE_2__ {scalar_t__ private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpfc_nvmet_rcv_ctx*) ;
 scalar_t__ FUNC_2 (struct lpfc_hba*,struct lpfc_nvmet_rcv_ctx*,int ,int) ;
 int VAR_9 ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*,int,...) ;
 int FUNC_4 (struct lpfc_hba*,int ,struct lpfc_iocbq*) ;
 struct lpfc_iocbq* FUNC_5 (struct lpfc_hba*) ;
 int FUNC_6 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_9(struct lpfc_hba *VAR_10,
    struct lpfc_nvmet_rcv_ctx *VAR_11,
    uint32_t VAR_12, uint16_t VAR_13)
{
 struct lpfc_nvmet_tgtport *VAR_14;
 struct lpfc_iocbq *VAR_15;
 unsigned long VAR_16;
 int VAR_17;

 if ((VAR_11->state == VAR_5 && VAR_11->entry_cnt == 1) ||
     (VAR_11->state == VAR_6 && VAR_11->entry_cnt == 2)) {
  VAR_11->state = VAR_4;
  VAR_11->entry_cnt++;
 } else {
  FUNC_3(VAR_10, VAR_0, VAR_2,
    "6418 NVMET LS abort state mismatch "
    "IO x%x: %d %d\n",
    VAR_11->oxid, VAR_11->state, VAR_11->entry_cnt);
  VAR_11->state = VAR_4;
 }

 VAR_14 = (struct lpfc_nvmet_tgtport *)VAR_10->targetport->private;
 if (!VAR_11->wqeq) {

  VAR_11->wqeq = FUNC_5(VAR_10);
  if (!VAR_11->wqeq) {
   FUNC_3(VAR_10, VAR_0, VAR_1,
     "6068 Abort failed: No wqeqs: "
     "xri: x%x\n", VAR_13);

   FUNC_1(VAR_11);
   return 0;
  }
 }
 VAR_15 = VAR_11->wqeq;

 if (FUNC_2(VAR_10, VAR_11, VAR_12, VAR_13) == 0) {
  VAR_17 = VAR_7;
  goto out;
 }

 FUNC_7(&VAR_10->hbalock, VAR_16);
 VAR_15->wqe_cmpl = VAR_9;
 VAR_15->iocb_cmpl = 0;
 VAR_15->iocb_flag |= VAR_3;
 VAR_17 = FUNC_4(VAR_10, VAR_11->hdwq, VAR_15);
 FUNC_8(&VAR_10->hbalock, VAR_16);
 if (VAR_17 == VAR_8) {
  FUNC_0(&VAR_14->xmt_abort_unsol);
  return 0;
 }
out:
 FUNC_0(&VAR_14->xmt_abort_rsp_error);
 VAR_15->context2 = ((void*)0);
 VAR_15->context3 = ((void*)0);
 FUNC_6(VAR_10, VAR_15);
 FUNC_1(VAR_11);
 FUNC_3(VAR_10, VAR_0, VAR_1,
   "6056 Failed to Issue ABTS. Status x%x\n", VAR_17);
 return 0;
}

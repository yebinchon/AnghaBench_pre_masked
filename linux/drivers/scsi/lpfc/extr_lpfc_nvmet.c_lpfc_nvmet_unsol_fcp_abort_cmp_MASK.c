
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_wcqe_complete {int word3; int total_data_placed; int word0; int parameter; } ;
struct lpfc_nvmet_tgtport {int xmt_abort_rsp; int xmt_fcp_abort_cmpl; } ;
struct lpfc_nvmet_rcv_ctx {int flag; scalar_t__ state; int ctxbuf; int oxid; int ctxlock; int list; } ;
struct lpfc_iocbq {int * context3; struct lpfc_nvmet_rcv_ctx* context2; } ;
struct TYPE_4__ {int abts_nvmet_buf_list_lock; } ;
struct lpfc_hba {TYPE_2__ sli4_hba; TYPE_1__* targetport; } ;
struct TYPE_3__ {scalar_t__ private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lpfc_hba*,int ) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*,scalar_t__,int,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_8(struct lpfc_hba *VAR_8, struct lpfc_iocbq *VAR_9,
          struct lpfc_wcqe_complete *VAR_10)
{
 struct lpfc_nvmet_rcv_ctx *VAR_11;
 struct lpfc_nvmet_tgtport *VAR_12;
 unsigned long VAR_13;
 uint32_t VAR_14;
 bool VAR_15 = 0;

 VAR_11 = VAR_9->context2;
 VAR_14 = VAR_10->parameter;

 if (!VAR_11) {

  FUNC_3(VAR_8, VAR_1, VAR_2,
    "6070 ABTS cmpl: WCQE: %08x %08x %08x %08x\n",
    VAR_10->word0, VAR_10->total_data_placed,
    VAR_14, VAR_10->word3);
  return;
 }

 VAR_12 = (struct lpfc_nvmet_tgtport *)VAR_8->targetport->private;
 FUNC_5(&VAR_11->ctxlock, VAR_13);
 if (VAR_11->flag & VAR_3)
  FUNC_0(&VAR_12->xmt_fcp_abort_cmpl);


 if (VAR_11->state != VAR_5) {
  FUNC_3(VAR_8, VAR_0, VAR_2,
    "6112 ABTS Wrong state:%d oxid x%x\n",
    VAR_11->state, VAR_11->oxid);
 }




 VAR_11->state = VAR_6;
 if ((VAR_11->flag & VAR_4) &&
     !(VAR_11->flag & VAR_7)) {
  FUNC_4(&VAR_8->sli4_hba.abts_nvmet_buf_list_lock);
  FUNC_1(&VAR_11->list);
  FUNC_6(&VAR_8->sli4_hba.abts_nvmet_buf_list_lock);
  VAR_15 = 1;
 }
 VAR_11->flag &= ~VAR_3;
 FUNC_7(&VAR_11->ctxlock, VAR_13);
 FUNC_0(&VAR_12->xmt_abort_rsp);

 FUNC_3(VAR_8, VAR_1, VAR_2,
   "6316 ABTS cmpl oxid x%x flg x%x (%x) "
   "WCQE: %08x %08x %08x %08x\n",
   VAR_11->oxid, VAR_11->flag, VAR_15,
   VAR_10->word0, VAR_10->total_data_placed,
   VAR_14, VAR_10->word3);

 VAR_9->context2 = ((void*)0);
 VAR_9->context3 = ((void*)0);




 if (VAR_15)
  FUNC_2(VAR_8, VAR_11->ctxbuf);





}

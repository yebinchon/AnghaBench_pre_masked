
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_wcqe_complete {int word3; int total_data_placed; int word0; int parameter; } ;
struct lpfc_nvmet_tgtport {int xmt_abort_rsp; int xmt_fcp_abort_cmpl; } ;
struct lpfc_nvmet_rcv_ctx {int flag; int ctxbuf; int oxid; int ctxlock; int list; int state; } ;
struct lpfc_iocbq {int * context3; struct lpfc_nvmet_rcv_ctx* context2; } ;
struct TYPE_4__ {int abts_nvmet_buf_list_lock; } ;
struct lpfc_hba {TYPE_2__ sli4_hba; TYPE_1__* targetport; } ;
struct TYPE_3__ {scalar_t__ private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lpfc_hba*,int ) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*,int ,int,int,int ,int ,int ,int ) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_9(struct lpfc_hba *VAR_6, struct lpfc_iocbq *VAR_7,
        struct lpfc_wcqe_complete *VAR_8)
{
 struct lpfc_nvmet_rcv_ctx *VAR_9;
 struct lpfc_nvmet_tgtport *VAR_10;
 uint32_t VAR_11;
 unsigned long VAR_12;
 bool VAR_13 = 0;

 VAR_9 = VAR_7->context2;
 VAR_11 = VAR_8->parameter;

 VAR_10 = (struct lpfc_nvmet_tgtport *)VAR_6->targetport->private;
 if (VAR_9->flag & VAR_2)
  FUNC_0(&VAR_10->xmt_fcp_abort_cmpl);

 FUNC_6(&VAR_9->ctxlock, VAR_12);
 VAR_9->state = VAR_4;




 if ((VAR_9->flag & VAR_3) &&
     !(VAR_9->flag & VAR_5)) {
  FUNC_5(&VAR_6->sli4_hba.abts_nvmet_buf_list_lock);
  FUNC_1(&VAR_9->list);
  FUNC_7(&VAR_6->sli4_hba.abts_nvmet_buf_list_lock);
  VAR_13 = 1;
 }
 VAR_9->flag &= ~VAR_2;
 FUNC_8(&VAR_9->ctxlock, VAR_12);
 FUNC_0(&VAR_10->xmt_abort_rsp);

 FUNC_3(VAR_6, VAR_0, VAR_1,
   "6165 ABORT cmpl: oxid x%x flg x%x (%d) "
   "WCQE: %08x %08x %08x %08x\n",
   VAR_9->oxid, VAR_9->flag, VAR_13,
   VAR_8->word0, VAR_8->total_data_placed,
   VAR_11, VAR_8->word3);

 VAR_7->context2 = ((void*)0);
 VAR_7->context3 = ((void*)0);




 if (VAR_13)
  FUNC_2(VAR_6, VAR_9->ctxbuf);


 FUNC_4(VAR_6, VAR_7);





}

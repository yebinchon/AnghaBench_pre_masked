
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct nvmefc_tgt_ls_req {int (* done ) (struct nvmefc_tgt_ls_req*) ;} ;
struct lpfc_wcqe_complete {scalar_t__ parameter; } ;
struct lpfc_nvmet_tgtport {int xmt_ls_rsp_cmpl; int xmt_ls_rsp_xb_set; int xmt_ls_rsp_aborted; int xmt_ls_rsp_error; } ;
struct TYPE_4__ {struct nvmefc_tgt_ls_req ls_req; } ;
struct lpfc_nvmet_rcv_ctx {scalar_t__ state; int entry_cnt; scalar_t__ oxid; TYPE_2__ ctx; } ;
struct lpfc_iocbq {int * context3; struct lpfc_nvmet_rcv_ctx* context2; int context1; } ;
struct lpfc_hba {TYPE_1__* targetport; } ;
struct TYPE_3__ {scalar_t__ private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,struct lpfc_wcqe_complete*) ;
 int FUNC_2 (struct lpfc_nvmet_rcv_ctx*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct lpfc_hba*,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct lpfc_hba*,int ,int ,char*,scalar_t__,scalar_t__,int) ;
 int FUNC_6 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct nvmefc_tgt_ls_req*) ;

__attribute__((used)) static void
FUNC_8(struct lpfc_hba *VAR_8, struct lpfc_iocbq *VAR_9,
     struct lpfc_wcqe_complete *VAR_10)
{
 struct lpfc_nvmet_tgtport *VAR_11;
 struct nvmefc_tgt_ls_req *VAR_12;
 struct lpfc_nvmet_rcv_ctx *VAR_13;
 uint32_t VAR_14, VAR_15;

 VAR_14 = FUNC_1(VAR_6, VAR_10);
 VAR_15 = VAR_10->parameter;
 VAR_13 = VAR_9->context2;

 if (VAR_13->state != VAR_5 || VAR_13->entry_cnt != 2) {
  FUNC_5(VAR_8, VAR_1, VAR_4,
    "6410 NVMET LS cmpl state mismatch IO x%x: "
    "%d %d\n",
    VAR_13->oxid, VAR_13->state, VAR_13->entry_cnt);
 }

 if (!VAR_8->targetport)
  goto out;

 VAR_11 = (struct lpfc_nvmet_tgtport *)VAR_8->targetport->private;

 if (VAR_11) {
  if (VAR_14) {
   FUNC_0(&VAR_11->xmt_ls_rsp_error);
   if (VAR_15 == VAR_0)
    FUNC_0(&VAR_11->xmt_ls_rsp_aborted);
   if (FUNC_1(VAR_7, VAR_10))
    FUNC_0(&VAR_11->xmt_ls_rsp_xb_set);
  } else {
   FUNC_0(&VAR_11->xmt_ls_rsp_cmpl);
  }
 }

out:
 VAR_12 = &VAR_13->ctx.ls_req;

 FUNC_4(VAR_8, "NVMET LS  CMPL: xri x%x stat x%x result x%x\n",
    VAR_13->oxid, VAR_14, VAR_15);

 FUNC_5(VAR_8, VAR_2, VAR_3,
   "6038 NVMET LS rsp cmpl: %d %d oxid x%x\n",
   VAR_14, VAR_15, VAR_13->oxid);

 FUNC_3(VAR_9->context1);
 VAR_9->context2 = ((void*)0);
 VAR_9->context3 = ((void*)0);
 FUNC_6(VAR_8, VAR_9);
 VAR_12->done(VAR_12);
 FUNC_2(VAR_13);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_wcqe_complete {int word3; int total_data_placed; int word0; int parameter; } ;
struct lpfc_nvmet_tgtport {int xmt_ls_abort_cmpl; } ;
struct lpfc_nvmet_rcv_ctx {scalar_t__ state; int entry_cnt; int oxid; } ;
struct lpfc_iocbq {int * context3; struct lpfc_nvmet_rcv_ctx* context2; } ;
struct lpfc_hba {TYPE_1__* targetport; } ;
struct TYPE_2__ {scalar_t__ private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpfc_nvmet_rcv_ctx*) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,struct lpfc_nvmet_rcv_ctx*,scalar_t__,int ,...) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_iocbq*) ;

__attribute__((used)) static void
FUNC_4(struct lpfc_hba *VAR_5, struct lpfc_iocbq *VAR_6,
       struct lpfc_wcqe_complete *VAR_7)
{
 struct lpfc_nvmet_rcv_ctx *VAR_8;
 struct lpfc_nvmet_tgtport *VAR_9;
 uint32_t VAR_10;

 VAR_8 = VAR_6->context2;
 VAR_10 = VAR_7->parameter;

 VAR_9 = (struct lpfc_nvmet_tgtport *)VAR_5->targetport->private;
 FUNC_0(&VAR_9->xmt_ls_abort_cmpl);

 FUNC_2(VAR_5, VAR_1, VAR_2,
   "6083 Abort cmpl: ctx x%px WCQE:%08x %08x %08x %08x\n",
   VAR_8, VAR_7->word0, VAR_7->total_data_placed,
   VAR_10, VAR_7->word3);

 if (!VAR_8) {
  FUNC_2(VAR_5, VAR_0, VAR_2,
    "6415 NVMET LS Abort No ctx: WCQE: "
     "%08x %08x %08x %08x\n",
    VAR_7->word0, VAR_7->total_data_placed,
    VAR_10, VAR_7->word3);

  FUNC_3(VAR_5, VAR_6);
  return;
 }

 if (VAR_8->state != VAR_4) {
  FUNC_2(VAR_5, VAR_0, VAR_3,
    "6416 NVMET LS abort cmpl state mismatch: "
    "oxid x%x: %d %d\n",
    VAR_8->oxid, VAR_8->state, VAR_8->entry_cnt);
 }

 VAR_6->context2 = ((void*)0);
 VAR_6->context3 = ((void*)0);
 FUNC_3(VAR_5, VAR_6);
 FUNC_1(VAR_8);
}

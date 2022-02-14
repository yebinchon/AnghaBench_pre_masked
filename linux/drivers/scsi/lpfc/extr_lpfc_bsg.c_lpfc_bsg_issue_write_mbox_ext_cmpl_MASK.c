
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int state; } ;
struct lpfc_hba {int mbox_mem_pool; TYPE_3__ mbox_ext_buf_ctx; } ;
struct fc_bsg_reply {int reply_payload_rcv_len; int result; } ;
struct bsg_job {struct fc_bsg_reply* reply; } ;
struct TYPE_8__ {int mbxStatus; } ;
struct TYPE_9__ {TYPE_1__ mb; } ;
struct TYPE_11__ {TYPE_2__ u; } ;
typedef TYPE_4__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bsg_job*,int ,int ) ;
 struct bsg_job* FUNC_1 (struct lpfc_hba*,TYPE_4__*) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*,int ,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_5(struct lpfc_hba *VAR_3, LPFC_MBOXQ_t *VAR_4)
{
 struct bsg_job *VAR_5;
 struct fc_bsg_reply *VAR_6;

 VAR_5 = FUNC_1(VAR_3, VAR_4);


 if (!VAR_5)
  VAR_4->u.mb.mbxStatus = VAR_2;

 FUNC_3(VAR_3, VAR_0, VAR_1,
   "2940 SLI_CONFIG ext-buffer wr mailbox command "
   "complete, ctxState:x%x, mbxStatus:x%x\n",
   VAR_3->mbox_ext_buf_ctx.state, VAR_4->u.mb.mbxStatus);


 FUNC_4(VAR_4, VAR_3->mbox_mem_pool);
 FUNC_2(VAR_3);


 if (VAR_5) {
  VAR_6 = VAR_5->reply;
  FUNC_0(VAR_5, VAR_6->result,
          VAR_6->reply_payload_rcv_len);
 }

 return;
}

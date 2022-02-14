
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct lpfc_hba {int mbox_mem_pool; int ct_ev_lock; } ;
struct fc_bsg_reply {int reply_payload_rcv_len; scalar_t__ result; } ;
struct TYPE_9__ {int dmabuffers; int pmboxq; scalar_t__ mb; } ;
struct TYPE_10__ {TYPE_3__ mbox; } ;
struct bsg_job_data {TYPE_4__ context_un; struct bsg_job* set_job; } ;
struct TYPE_8__ {int sg_cnt; int sg_list; int payload_len; } ;
struct bsg_job {TYPE_2__ reply_payload; struct fc_bsg_reply* reply; int * dd_data; } ;
struct TYPE_7__ {int mb; } ;
struct TYPE_11__ {TYPE_1__ u; struct bsg_job_data* ctx_ndlp; } ;
typedef int MAILBOX_t ;
typedef TYPE_5__ LPFC_MBOXQ_t ;


 int FUNC_0 (struct bsg_job*,scalar_t__,int ) ;
 int FUNC_1 (struct bsg_job_data*) ;
 int FUNC_2 (struct lpfc_hba*,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int *,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_8(struct lpfc_hba *VAR_0, LPFC_MBOXQ_t *VAR_1)
{
 struct bsg_job_data *VAR_2;
 struct fc_bsg_reply *VAR_3;
 struct bsg_job *VAR_4;
 uint32_t VAR_5;
 unsigned long VAR_6;
 uint8_t *VAR_7, *VAR_8;

 VAR_2 = VAR_1->ctx_ndlp;





 VAR_7 = (uint8_t *)&VAR_1->u.mb;
 VAR_8 = (uint8_t *)VAR_2->context_un.mbox.mb;
 FUNC_3(VAR_8, VAR_7, sizeof(MAILBOX_t));



 FUNC_6(&VAR_0->ct_ev_lock, VAR_6);
 VAR_4 = VAR_2->set_job;
 if (VAR_4) {

  VAR_4->dd_data = ((void*)0);
 }
 FUNC_7(&VAR_0->ct_ev_lock, VAR_6);



 if (VAR_4) {
  VAR_3 = VAR_4->reply;
  VAR_5 = VAR_4->reply_payload.payload_len;
  VAR_3->reply_payload_rcv_len =
   FUNC_5(VAR_4->reply_payload.sg_list,
         VAR_4->reply_payload.sg_cnt,
         VAR_8, VAR_5);
 }

 VAR_2->set_job = ((void*)0);
 FUNC_4(VAR_2->context_un.mbox.pmboxq, VAR_0->mbox_mem_pool);
 FUNC_2(VAR_0, VAR_2->context_un.mbox.dmabuffers);
 FUNC_1(VAR_2);



 if (VAR_4) {
  VAR_3->result = 0;
  FUNC_0(VAR_4, VAR_3->result,
          VAR_3->reply_payload_rcv_len);
 }
 return;
}

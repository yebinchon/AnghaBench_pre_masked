
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_15__ {TYPE_4__* mse; int sli_config_hdr; } ;
struct TYPE_16__ {TYPE_5__ sli_config_emb0_subsys; } ;
struct lpfc_sli_config_mbox {TYPE_6__ un; } ;
struct TYPE_18__ {int state; int mboxType; int nembType; struct lpfc_dmabuf* mbx_dmabuf; } ;
struct lpfc_hba {TYPE_8__ mbox_ext_buf_ctx; int ct_ev_lock; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct fc_bsg_reply {scalar_t__ result; int reply_payload_rcv_len; } ;
struct TYPE_12__ {scalar_t__ mb; } ;
struct TYPE_13__ {TYPE_2__ mbox; } ;
struct bsg_job_data {TYPE_3__ context_un; struct bsg_job* set_job; } ;
struct TYPE_17__ {int payload_len; int sg_cnt; int sg_list; } ;
struct bsg_job {TYPE_7__ reply_payload; int * dd_data; struct fc_bsg_reply* reply; } ;
struct TYPE_11__ {int mb; } ;
struct TYPE_19__ {TYPE_1__ u; struct bsg_job_data* ctx_buf; } ;
struct TYPE_14__ {int buf_len; } ;
typedef int MAILBOX_t ;
typedef TYPE_9__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int VAR_4 ;
 int FUNC_1 (struct bsg_job_data*) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,int ,int ,struct lpfc_dmabuf*,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*,int ,int ,int) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int ,int ,int *,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int VAR_6 ;

__attribute__((used)) static struct bsg_job *
FUNC_9(struct lpfc_hba *VAR_7, LPFC_MBOXQ_t *VAR_8)
{
 struct bsg_job_data *VAR_9;
 struct bsg_job *VAR_10;
 struct fc_bsg_reply *VAR_11;
 uint8_t *VAR_12, *VAR_13;
 unsigned long VAR_14;
 uint32_t VAR_15;
 int VAR_16 = 0;
 struct lpfc_dmabuf *VAR_17;
 struct lpfc_sli_config_mbox *VAR_18;
 uint8_t *VAR_19;

 VAR_9 = VAR_8->ctx_buf;


 FUNC_7(&VAR_7->ct_ev_lock, VAR_14);
 VAR_10 = VAR_9->set_job;
 if (VAR_10) {
  VAR_11 = VAR_10->reply;

  VAR_10->dd_data = ((void*)0);
 }
 FUNC_8(&VAR_7->ct_ev_lock, VAR_14);






 VAR_12 = (uint8_t *)&VAR_8->u.mb;
 VAR_13 = (uint8_t *)VAR_9->context_un.mbox.mb;

 FUNC_5(VAR_13, VAR_12, sizeof(MAILBOX_t));

 VAR_17 = VAR_7->mbox_ext_buf_ctx.mbx_dmabuf;
 VAR_18 = (struct lpfc_sli_config_mbox *)VAR_17->virt;
 if (!FUNC_0(VAR_5,
     &VAR_18->un.sli_config_emb0_subsys.sli_config_hdr)) {
  VAR_19 = (uint8_t *)VAR_17->virt;

  FUNC_4(&VAR_19[sizeof(MAILBOX_t)],
   &VAR_19[sizeof(MAILBOX_t)],
   VAR_18->un.sli_config_emb0_subsys.mse[0].buf_len);
 }



 if (VAR_10) {
  VAR_15 = VAR_10->reply_payload.payload_len;
  VAR_11->reply_payload_rcv_len =
   FUNC_6(VAR_10->reply_payload.sg_list,
         VAR_10->reply_payload.sg_cnt,
         VAR_13, VAR_15);


  VAR_11->result = 0;

  FUNC_3(VAR_7, VAR_1, VAR_2,
    "2937 SLI_CONFIG ext-buffer mailbox command "
    "(x%x/x%x) complete bsg job done, bsize:%d\n",
    VAR_7->mbox_ext_buf_ctx.nembType,
    VAR_7->mbox_ext_buf_ctx.mboxType, VAR_15);
  FUNC_2(VAR_7,
     VAR_7->mbox_ext_buf_ctx.nembType,
     VAR_7->mbox_ext_buf_ctx.mboxType,
     VAR_4, VAR_6,
     VAR_7->mbox_ext_buf_ctx.mbx_dmabuf, 0);
 } else {
  FUNC_3(VAR_7, VAR_0, VAR_2,
    "2938 SLI_CONFIG ext-buffer mailbox "
    "command (x%x/x%x) failure, rc:x%x\n",
    VAR_7->mbox_ext_buf_ctx.nembType,
    VAR_7->mbox_ext_buf_ctx.mboxType, VAR_16);
 }



 VAR_7->mbox_ext_buf_ctx.state = VAR_3;
 FUNC_1(VAR_9);
 return VAR_10;
}

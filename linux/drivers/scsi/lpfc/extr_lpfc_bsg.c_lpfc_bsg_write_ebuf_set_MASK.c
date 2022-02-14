
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_18__ {scalar_t__ seqNum; int nembType; scalar_t__ numBuf; int state; TYPE_12__* mbx_dmabuf; int ext_dmabuf_list; } ;
struct lpfc_hba {TYPE_5__ mbox_ext_buf_ctx; int pport; int mbox_mem_pool; } ;
struct lpfc_dmabuf {int list; scalar_t__ virt; } ;
struct fc_bsg_reply {int reply_payload_rcv_len; scalar_t__ result; } ;
struct TYPE_16__ {TYPE_6__* mb; TYPE_7__* pmboxq; } ;
struct TYPE_17__ {TYPE_3__ mbox; } ;
struct bsg_job_data {TYPE_4__ context_un; struct bsg_job* set_job; int type; } ;
struct TYPE_14__ {scalar_t__ payload_len; int sg_cnt; int sg_list; } ;
struct bsg_job {struct bsg_job_data* dd_data; TYPE_1__ request_payload; struct fc_bsg_reply* reply; } ;
typedef enum nemb_type { ____Placeholder_nemb_type } nemb_type ;
struct TYPE_19__ {int mbxOwner; } ;
struct TYPE_15__ {TYPE_6__ mb; } ;
struct TYPE_20__ {struct bsg_job_data* ctx_buf; int mbox_cmpl; int vport; TYPE_2__ u; } ;
struct TYPE_13__ {scalar_t__ virt; } ;
typedef TYPE_6__ MAILBOX_t ;
typedef TYPE_7__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct bsg_job*,scalar_t__,int ) ;
 int VAR_13 ;
 int FUNC_1 (struct bsg_job_data*) ;
 struct bsg_job_data* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_dmabuf*) ;
 int VAR_14 ;
 int FUNC_5 (struct lpfc_hba*,int,scalar_t__,TYPE_12__*,struct lpfc_dmabuf*) ;
 int FUNC_6 (struct lpfc_hba*,scalar_t__,int ,int ,int ,struct lpfc_dmabuf*,scalar_t__) ;
 int FUNC_7 (struct lpfc_hba*,int ,int ,char*,int,...) ;
 int FUNC_8 (struct lpfc_hba*,TYPE_7__*,int ) ;
 int VAR_15 ;
 int FUNC_9 (TYPE_6__*,int *,int) ;
 TYPE_7__* FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_7__*,int ,int) ;
 scalar_t__ VAR_16 ;
 int FUNC_12 (int ,int ,int *,scalar_t__) ;
 int VAR_17 ;

__attribute__((used)) static int
FUNC_13(struct lpfc_hba *VAR_18, struct bsg_job *VAR_19,
   struct lpfc_dmabuf *VAR_20)
{
 struct fc_bsg_reply *VAR_21 = VAR_19->reply;
 struct bsg_job_data *VAR_22 = ((void*)0);
 LPFC_MBOXQ_t *VAR_23 = ((void*)0);
 MAILBOX_t *VAR_24;
 enum nemb_type VAR_25;
 uint8_t *VAR_26;
 uint32_t VAR_27;
 uint32_t VAR_28;
 int VAR_29;

 VAR_28 = VAR_18->mbox_ext_buf_ctx.seqNum;
 VAR_18->mbox_ext_buf_ctx.seqNum++;
 VAR_25 = VAR_18->mbox_ext_buf_ctx.nembType;

 VAR_22 = FUNC_2(sizeof(struct bsg_job_data), VAR_2);
 if (!VAR_22) {
  VAR_29 = -VAR_0;
  goto job_error;
 }

 VAR_26 = (uint8_t *)VAR_20->virt;
 VAR_27 = VAR_19->request_payload.payload_len;
 FUNC_12(VAR_19->request_payload.sg_list,
     VAR_19->request_payload.sg_cnt,
     VAR_26, VAR_27);

 if (VAR_18->mbox_ext_buf_ctx.nembType == VAR_16) {
  FUNC_7(VAR_18, VAR_4, VAR_5,
    "2966 SLI_CONFIG (mse) ext-buffer wr set "
    "buffer[%d], size:%d\n",
    VAR_18->mbox_ext_buf_ctx.seqNum, VAR_27);

 } else {
  FUNC_7(VAR_18, VAR_4, VAR_5,
    "2967 SLI_CONFIG (hbd) ext-buffer wr set "
    "buffer[%d], size:%d\n",
    VAR_18->mbox_ext_buf_ctx.seqNum, VAR_27);

 }


 FUNC_5(VAR_18, VAR_25, VAR_28,
     VAR_18->mbox_ext_buf_ctx.mbx_dmabuf,
     VAR_20);
 FUNC_3(&VAR_20->list, &VAR_18->mbox_ext_buf_ctx.ext_dmabuf_list);


 FUNC_6(VAR_18, VAR_18->mbox_ext_buf_ctx.nembType,
     VAR_15, VAR_13, VAR_17,
     VAR_20, VAR_28);

 if (VAR_18->mbox_ext_buf_ctx.seqNum == VAR_18->mbox_ext_buf_ctx.numBuf) {
  FUNC_7(VAR_18, VAR_4, VAR_5,
    "2968 SLI_CONFIG ext-buffer wr all %d "
    "ebuffers received\n",
    VAR_18->mbox_ext_buf_ctx.numBuf);

  VAR_23 = FUNC_10(VAR_18->mbox_mem_pool, VAR_2);
  if (!VAR_23) {
   VAR_29 = -VAR_0;
   goto job_error;
  }
  FUNC_11(VAR_23, 0, sizeof(LPFC_MBOXQ_t));
  VAR_26 = (uint8_t *)VAR_18->mbox_ext_buf_ctx.mbx_dmabuf->virt;
  VAR_24 = &VAR_23->u.mb;
  FUNC_9(VAR_24, VAR_26, sizeof(*VAR_24));
  VAR_24->mbxOwner = VAR_10;
  VAR_23->vport = VAR_18->pport;


  VAR_23->mbox_cmpl = VAR_14;


  VAR_23->ctx_buf = VAR_22;
  VAR_22->type = VAR_12;
  VAR_22->set_job = VAR_19;
  VAR_22->context_un.mbox.pmboxq = VAR_23;
  VAR_22->context_un.mbox.mb = (MAILBOX_t *)VAR_26;
  VAR_19->dd_data = VAR_22;


  VAR_18->mbox_ext_buf_ctx.state = VAR_6;

  VAR_29 = FUNC_8(VAR_18, VAR_23, VAR_8);
  if ((VAR_29 == VAR_9) || (VAR_29 == VAR_7)) {
   FUNC_7(VAR_18, VAR_4, VAR_5,
     "2969 Issued SLI_CONFIG ext-buffer "
     "mailbox command, rc:x%x\n", VAR_29);
   return VAR_11;
  }
  FUNC_7(VAR_18, VAR_3, VAR_5,
    "2970 Failed to issue SLI_CONFIG ext-buffer "
    "mailbox command, rc:x%x\n", VAR_29);
  VAR_29 = -VAR_1;
  goto job_error;
 }


 VAR_21->result = 0;
 FUNC_0(VAR_19, VAR_21->result,
         VAR_21->reply_payload_rcv_len);
 return VAR_11;

job_error:
 FUNC_4(VAR_18, VAR_20);
 FUNC_1(VAR_22);

 return VAR_29;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_13__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_28__ {int hbd_count; int * hbd; } ;
struct TYPE_27__ {TYPE_4__* mse; int sli_config_hdr; } ;
struct TYPE_29__ {TYPE_6__ sli_config_emb1_subsys; TYPE_5__ sli_config_emb0_subsys; } ;
struct lpfc_sli_config_mbox {TYPE_7__ un; } ;
struct TYPE_20__ {int nembType; int numBuf; int state; struct lpfc_dmabuf* mbx_dmabuf; int seqNum; int mbxTag; int mboxType; } ;
struct TYPE_25__ {int sli_intf; } ;
struct lpfc_hba {int mbox_mem_pool; TYPE_11__ mbox_ext_buf_ctx; int pport; TYPE_3__ sli4_hba; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct TYPE_23__ {scalar_t__ vendor_cmd; } ;
struct TYPE_24__ {TYPE_1__ h_vendor; } ;
struct fc_bsg_request {TYPE_2__ rqst_data; } ;
struct fc_bsg_reply {int reply_payload_rcv_len; scalar_t__ result; } ;
struct dfc_mbox_req {int extSeqNum; int extMboxTag; } ;
struct TYPE_31__ {TYPE_12__* mb; TYPE_13__* pmboxq; } ;
struct TYPE_19__ {TYPE_9__ mbox; } ;
struct bsg_job_data {TYPE_10__ context_un; struct bsg_job* set_job; int type; } ;
struct bsg_job {struct bsg_job_data* dd_data; struct fc_bsg_reply* reply; struct fc_bsg_request* request; } ;
typedef enum nemb_type { ____Placeholder_nemb_type } nemb_type ;
struct TYPE_21__ {int mbxOwner; } ;
struct TYPE_30__ {TYPE_12__ mb; } ;
struct TYPE_26__ {int buf_len; } ;
struct TYPE_22__ {struct bsg_job_data* ctx_buf; int mbox_cmpl; int vport; TYPE_8__ u; } ;
typedef TYPE_12__ MAILBOX_t ;
typedef TYPE_13__ LPFC_MBOXQ_t ;


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
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct bsg_job*,scalar_t__,int ) ;
 int VAR_20 ;
 int FUNC_3 (struct bsg_job_data*) ;
 struct bsg_job_data* FUNC_4 (int,int ) ;
 int VAR_21 ;
 int FUNC_5 (struct lpfc_hba*,int,int ,struct lpfc_dmabuf*,struct lpfc_dmabuf*) ;
 int FUNC_6 (struct lpfc_hba*,int,int ,int ,int ,struct lpfc_dmabuf*,int) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_7 (struct lpfc_hba*,int ,int ,char*,int,...) ;
 int VAR_24 ;
 int FUNC_8 (struct lpfc_hba*,TYPE_13__*,int ) ;
 int VAR_25 ;
 int FUNC_9 (TYPE_12__*,int *,int) ;
 TYPE_13__* FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_13__*,int ) ;
 int FUNC_12 (TYPE_13__*,int ,int) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

__attribute__((used)) static int
FUNC_13(struct lpfc_hba *VAR_29, struct bsg_job *VAR_30,
          enum nemb_type VAR_31,
          struct lpfc_dmabuf *VAR_32)
{
 struct fc_bsg_request *VAR_33 = VAR_30->request;
 struct fc_bsg_reply *VAR_34 = VAR_30->reply;
 struct dfc_mbox_req *VAR_35;
 struct lpfc_sli_config_mbox *VAR_36;
 uint32_t VAR_37;
 struct bsg_job_data *VAR_38 = ((void*)0);
 LPFC_MBOXQ_t *VAR_39 = ((void*)0);
 MAILBOX_t *VAR_40;
 uint8_t *VAR_41;
 int VAR_42 = VAR_18, VAR_43;

 VAR_35 =
    (struct dfc_mbox_req *)VAR_33->rqst_data.h_vendor.vendor_cmd;


 VAR_36 = (struct lpfc_sli_config_mbox *)VAR_32->virt;

 if (VAR_31 == VAR_26) {
  VAR_37 = FUNC_1(VAR_22,
   &VAR_36->un.sli_config_emb0_subsys.sli_config_hdr);
  if (VAR_37 > VAR_11) {
   FUNC_7(VAR_29, VAR_6, VAR_8,
     "2953 Failed SLI_CONFIG(mse) wr, "
     "ext_buf_cnt(%d) out of range(%d)\n",
     VAR_37,
     VAR_11);
   return -VAR_4;
  }
  FUNC_7(VAR_29, VAR_7, VAR_8,
    "2949 Handled SLI_CONFIG(mse) wr, "
    "ext_buf_cnt:%d\n", VAR_37);
 } else {

  if (FUNC_0(VAR_24, &VAR_29->sli4_hba.sli_intf) <
      VAR_12)
   return -VAR_0;

  VAR_37 = VAR_36->un.sli_config_emb1_subsys.hbd_count;
  if (VAR_37 > VAR_10) {
   FUNC_7(VAR_29, VAR_6, VAR_8,
     "2954 Failed SLI_CONFIG(hbd) wr, "
     "ext_buf_cnt(%d) out of range(%d)\n",
     VAR_37,
     VAR_10);
   return -VAR_4;
  }
  FUNC_7(VAR_29, VAR_7, VAR_8,
    "2950 Handled SLI_CONFIG(hbd) wr, "
    "ext_buf_cnt:%d\n", VAR_37);
 }


 FUNC_6(VAR_29, VAR_31, VAR_25, VAR_20,
     VAR_28, VAR_32, VAR_37);

 if (VAR_37 == 0)
  return -VAR_2;


 FUNC_5(VAR_29, VAR_31, 0, VAR_32, VAR_32);


 FUNC_6(VAR_29, VAR_31, VAR_25, VAR_20,
     VAR_27, VAR_32, VAR_37);


 for (VAR_43 = 1; VAR_43 < VAR_37; VAR_43++) {
  if (VAR_31 == VAR_26)
   FUNC_7(VAR_29, VAR_7, VAR_8,
    "2951 SLI_CONFIG(mse), buf[%d]-length:%d\n",
    VAR_43, VAR_36->un.sli_config_emb0_subsys.
    mse[VAR_43].buf_len);
  else
   FUNC_7(VAR_29, VAR_7, VAR_8,
    "2952 SLI_CONFIG(hbd), buf[%d]-length:%d\n",
    VAR_43, FUNC_1(VAR_23,
    &VAR_36->un.sli_config_emb1_subsys.
    hbd[VAR_43]));
 }


 VAR_29->mbox_ext_buf_ctx.nembType = VAR_31;
 VAR_29->mbox_ext_buf_ctx.mboxType = VAR_25;
 VAR_29->mbox_ext_buf_ctx.numBuf = VAR_37;
 VAR_29->mbox_ext_buf_ctx.mbxTag = VAR_35->extMboxTag;
 VAR_29->mbox_ext_buf_ctx.seqNum = VAR_35->extSeqNum;
 VAR_29->mbox_ext_buf_ctx.mbx_dmabuf = VAR_32;

 if (VAR_37 == 1) {

  VAR_38 = FUNC_4(sizeof(struct bsg_job_data), VAR_5);
  if (!VAR_38) {
   VAR_42 = -VAR_1;
   goto job_error;
  }


  VAR_39 = FUNC_10(VAR_29->mbox_mem_pool, VAR_5);
  if (!VAR_39) {
   VAR_42 = -VAR_1;
   goto job_error;
  }
  FUNC_12(VAR_39, 0, sizeof(LPFC_MBOXQ_t));
  VAR_40 = &VAR_39->u.mb;
  VAR_41 = (uint8_t *)VAR_32->virt;
  FUNC_9(VAR_40, VAR_41, sizeof(*VAR_40));
  VAR_40->mbxOwner = VAR_16;
  VAR_39->vport = VAR_29->pport;


  VAR_39->mbox_cmpl = VAR_21;


  VAR_39->ctx_buf = VAR_38;
  VAR_38->type = VAR_19;
  VAR_38->set_job = VAR_30;
  VAR_38->context_un.mbox.pmboxq = VAR_39;
  VAR_38->context_un.mbox.mb = (MAILBOX_t *)VAR_41;
  VAR_30->dd_data = VAR_38;



  VAR_29->mbox_ext_buf_ctx.state = VAR_9;
  VAR_42 = FUNC_8(VAR_29, VAR_39, VAR_14);
  if ((VAR_42 == VAR_15) || (VAR_42 == VAR_13)) {
   FUNC_7(VAR_29, VAR_7, VAR_8,
     "2955 Issued SLI_CONFIG ext-buffer "
     "mailbox command, rc:x%x\n", VAR_42);
   return VAR_17;
  }
  FUNC_7(VAR_29, VAR_6, VAR_8,
    "2956 Failed to issue SLI_CONFIG ext-buffer "
    "mailbox command, rc:x%x\n", VAR_42);
  VAR_42 = -VAR_3;
  goto job_error;
 }



 VAR_34->result = 0;
 FUNC_2(VAR_30, VAR_34->result,
         VAR_34->reply_payload_rcv_len);
 return VAR_17;

job_error:
 if (VAR_39)
  FUNC_11(VAR_39, VAR_29->mbox_mem_pool);
 FUNC_3(VAR_38);

 return VAR_42;
}

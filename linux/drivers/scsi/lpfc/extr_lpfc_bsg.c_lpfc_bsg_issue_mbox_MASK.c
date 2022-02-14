
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_70__ TYPE_9__ ;
typedef struct TYPE_69__ TYPE_8__ ;
typedef struct TYPE_68__ TYPE_7__ ;
typedef struct TYPE_67__ TYPE_6__ ;
typedef struct TYPE_66__ TYPE_5__ ;
typedef struct TYPE_65__ TYPE_4__ ;
typedef struct TYPE_64__ TYPE_3__ ;
typedef struct TYPE_63__ TYPE_31__ ;
typedef struct TYPE_62__ TYPE_2__ ;
typedef struct TYPE_61__ TYPE_29__ ;
typedef struct TYPE_60__ TYPE_28__ ;
typedef struct TYPE_59__ TYPE_27__ ;
typedef struct TYPE_58__ TYPE_26__ ;
typedef struct TYPE_57__ TYPE_25__ ;
typedef struct TYPE_56__ TYPE_24__ ;
typedef struct TYPE_55__ TYPE_23__ ;
typedef struct TYPE_54__ TYPE_22__ ;
typedef struct TYPE_53__ TYPE_21__ ;
typedef struct TYPE_52__ TYPE_20__ ;
typedef struct TYPE_51__ TYPE_1__ ;
typedef struct TYPE_50__ TYPE_19__ ;
typedef struct TYPE_49__ TYPE_18__ ;
typedef struct TYPE_48__ TYPE_17__ ;
typedef struct TYPE_47__ TYPE_16__ ;
typedef struct TYPE_46__ TYPE_15__ ;
typedef struct TYPE_45__ TYPE_14__ ;
typedef struct TYPE_44__ TYPE_13__ ;
typedef struct TYPE_43__ TYPE_12__ ;
typedef struct TYPE_42__ TYPE_11__ ;
typedef struct TYPE_41__ TYPE_10__ ;


struct TYPE_47__ {scalar_t__ co; } ;
struct TYPE_46__ {scalar_t__ type; } ;
struct TYPE_43__ {scalar_t__ bdeSize; } ;
struct TYPE_44__ {TYPE_12__ f; } ;
struct TYPE_45__ {TYPE_13__ tus; } ;
struct READ_EVENT_LOG_VAR {TYPE_14__ rcv_bde64; } ;
struct TYPE_67__ {scalar_t__ bdeSize; } ;
struct TYPE_68__ {TYPE_6__ f; } ;
struct TYPE_69__ {TYPE_7__ tus; void* addrLow; void* addrHigh; } ;
struct TYPE_66__ {void* addrLow; void* addrHigh; } ;
struct TYPE_70__ {TYPE_8__ xmit_bde64; TYPE_5__ rcv_bde64; } ;
struct TYPE_41__ {TYPE_9__ s2; } ;
struct TYPE_42__ {TYPE_10__ un; } ;
struct TYPE_55__ {scalar_t__* varWords; TYPE_16__ varUpdateCfg; TYPE_15__ varDmp; struct READ_EVENT_LOG_VAR varRdEventLog; TYPE_11__ varBIUdiag; } ;
struct TYPE_61__ {scalar_t__ mbxCommand; TYPE_23__ un; int mbxOwner; } ;
typedef TYPE_29__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_48__ {int bdeSize; } ;
struct TYPE_49__ {TYPE_17__ f; } ;
struct ulp_bde64 {void* addrLow; void* addrHigh; TYPE_18__ tus; } ;
struct lpfc_vport {int fc_flag; } ;
struct TYPE_54__ {struct READ_EVENT_LOG_VAR cfg_mhdr; } ;
struct lpfc_mbx_sli4_config {TYPE_22__ header; } ;
struct lpfc_mbx_nembed_cmd {TYPE_24__* sge; } ;
struct TYPE_59__ {int sli_flag; } ;
struct lpfc_hba {scalar_t__ sli_rev; int mbox_mem_pool; TYPE_27__ sli; TYPE_4__* pport; } ;
struct lpfc_dmabuf {scalar_t__ phys; scalar_t__ virt; } ;
struct TYPE_51__ {scalar_t__ vendor_cmd; } ;
struct TYPE_62__ {TYPE_1__ h_vendor; } ;
struct fc_bsg_request {TYPE_2__ rqst_data; } ;
struct fc_bsg_reply {scalar_t__ reply_payload_rcv_len; } ;
struct dfc_mbox_req {int inExtWLen; int outExtWLen; int mbOffset; } ;
struct TYPE_57__ {int inExtWLen; int outExtWLen; int mbOffset; TYPE_29__* ext; TYPE_29__* mb; TYPE_31__* pmboxq; struct lpfc_dmabuf* dmabuffers; } ;
struct TYPE_58__ {TYPE_25__ mbox; } ;
struct bsg_job_data {TYPE_26__ context_un; struct bsg_job* set_job; int type; } ;
struct TYPE_60__ {int payload_len; int sg_cnt; int sg_list; } ;
struct TYPE_64__ {int payload_len; int sg_cnt; int sg_list; } ;
struct bsg_job {TYPE_28__ reply_payload; struct bsg_job_data* dd_data; TYPE_3__ request_payload; struct fc_bsg_reply* reply; struct fc_bsg_request* request; } ;
struct TYPE_65__ {scalar_t__ stopped; } ;
struct TYPE_50__ {struct lpfc_mbx_sli4_config sli4_config; } ;
struct TYPE_52__ {TYPE_19__ un; } ;
struct TYPE_53__ {TYPE_20__ mqe; TYPE_29__ mb; } ;
struct TYPE_63__ {int in_ext_byte_len; int out_ext_byte_len; struct bsg_job_data* ctx_ndlp; int mbox_cmpl; TYPE_21__ u; int mbox_offset_word; TYPE_29__* ctx_buf; struct lpfc_vport* vport; } ;
struct TYPE_56__ {scalar_t__ length; void* pa_lo; void* pa_hi; } ;
typedef TYPE_29__ MAILBOX_t ;
typedef TYPE_31__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ FUNC_0 (int ,struct READ_EVENT_LOG_VAR*) ;
 int FUNC_1 (struct bsg_job_data*) ;
 struct bsg_job_data* FUNC_2 (int,int ) ;
 int FUNC_3 (struct lpfc_hba*,TYPE_29__*,struct lpfc_vport*) ;
 struct lpfc_dmabuf* FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*,struct lpfc_dmabuf*) ;
 int FUNC_6 (struct lpfc_hba*,struct bsg_job*,struct lpfc_dmabuf*) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_7 (struct lpfc_hba*,int ,int ,char*,...) ;
 int FUNC_8 (struct lpfc_hba*,TYPE_31__*,int ) ;
 int FUNC_9 (TYPE_29__*,TYPE_29__*,int) ;
 TYPE_31__* FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_31__*,int ) ;
 int FUNC_12 (TYPE_31__*,int ,int) ;
 void* FUNC_13 (scalar_t__) ;
 void* FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (int ,int ,TYPE_29__*,scalar_t__) ;
 int FUNC_16 (int ,int ,TYPE_29__*,scalar_t__) ;

__attribute__((used)) static int
FUNC_17(struct lpfc_hba *VAR_34, struct bsg_job *VAR_35,
 struct lpfc_vport *VAR_36)
{
 struct fc_bsg_request *VAR_37 = VAR_35->request;
 struct fc_bsg_reply *VAR_38 = VAR_35->reply;
 LPFC_MBOXQ_t *VAR_39 = ((void*)0);
 MAILBOX_t *VAR_40;

 uint8_t *VAR_41 = ((void*)0);
 struct bsg_job_data *VAR_42 = ((void*)0);
 struct lpfc_dmabuf *VAR_43 = ((void*)0);
 struct dfc_mbox_req *VAR_44;
 struct READ_EVENT_LOG_VAR *VAR_45;
 uint32_t VAR_46, VAR_47, VAR_48;
 struct lpfc_mbx_sli4_config *VAR_49;
 struct lpfc_mbx_nembed_cmd *VAR_50;
 struct ulp_bde64 *VAR_51;
 uint8_t *VAR_52 = ((void*)0);
 int VAR_53 = 0;
 uint8_t *VAR_54;
 uint32_t VAR_55;


 VAR_38->reply_payload_rcv_len = 0;


 if (VAR_35->reply_payload.payload_len > VAR_0 ||
     VAR_35->request_payload.payload_len > VAR_0) {
  VAR_53 = -VAR_5;
  goto job_done;
 }





 if (VAR_34->sli.sli_flag & VAR_12) {
  VAR_53 = -VAR_2;
  goto job_done;
 }

 VAR_44 =
     (struct dfc_mbox_req *)VAR_37->rqst_data.h_vendor.vendor_cmd;


 if ((VAR_44->inExtWLen > VAR_0/sizeof(uint32_t)) ||
     (VAR_44->outExtWLen > VAR_0/sizeof(uint32_t))) {
  VAR_53 = -VAR_5;
  goto job_done;
 }

 VAR_43 = FUNC_4(VAR_34);
 if (!VAR_43 || !VAR_43->virt) {
  VAR_53 = -VAR_4;
  goto job_done;
 }


 VAR_41 = (uint8_t *)VAR_43->virt;
 VAR_55 = VAR_35->request_payload.payload_len;
 FUNC_16(VAR_35->request_payload.sg_list,
     VAR_35->request_payload.sg_cnt, VAR_41, VAR_55);


 if (VAR_34->sli_rev == VAR_14) {
  VAR_53 = FUNC_6(VAR_34, VAR_35, VAR_43);
  if (VAR_53 == VAR_29)
   goto job_cont;
  if (VAR_53)
   goto job_done;

 }

 VAR_53 = FUNC_3(VAR_34, (MAILBOX_t *)VAR_41, VAR_36);
 if (VAR_53 != 0)
  goto job_done;


 VAR_42 = FUNC_2(sizeof(struct bsg_job_data), VAR_8);
 if (!VAR_42) {
  FUNC_7(VAR_34, VAR_9, VAR_10,
    "2727 Failed allocation of dd_data\n");
  VAR_53 = -VAR_4;
  goto job_done;
 }

 VAR_39 = FUNC_10(VAR_34->mbox_mem_pool, VAR_8);
 if (!VAR_39) {
  VAR_53 = -VAR_4;
  goto job_done;
 }
 FUNC_12(VAR_39, 0, sizeof(LPFC_MBOXQ_t));

 VAR_40 = &VAR_39->u.mb;
 FUNC_9(VAR_40, VAR_41, sizeof(*VAR_40));
 VAR_40->mbxOwner = VAR_28;
 VAR_39->vport = VAR_36;




 if (VAR_34->pport->stopped &&
     VAR_40->mbxCommand != VAR_16 &&
     VAR_40->mbxCommand != VAR_20 &&
     VAR_40->mbxCommand != VAR_26 &&
     VAR_40->mbxCommand != VAR_27)
  FUNC_7(VAR_34, VAR_9, VAR_11,
    "2797 mbox: Issued mailbox cmd "
    "0x%x while in stopped state.\n",
    VAR_40->mbxCommand);


 if (VAR_44->inExtWLen || VAR_44->outExtWLen) {
  VAR_54 = VAR_41;
  VAR_52 = VAR_54 + sizeof(MAILBOX_t);
  VAR_39->ctx_buf = VAR_52;
  VAR_39->in_ext_byte_len =
   VAR_44->inExtWLen * sizeof(uint32_t);
  VAR_39->out_ext_byte_len =
   VAR_44->outExtWLen * sizeof(uint32_t);
  VAR_39->mbox_offset_word = VAR_44->mbOffset;
 }





 if (VAR_40->mbxCommand == VAR_21) {
  VAR_46 = VAR_40->un.varWords[1];
  VAR_47 = VAR_40->un.varWords[4];



  if ((VAR_46 > VAR_47) ||
   (VAR_46 > VAR_0 - sizeof(MAILBOX_t))) {
   VAR_53 = -VAR_5;
   goto job_done;
  }
  VAR_40->un.varBIUdiag.un.s2.xmit_bde64.addrHigh =
   FUNC_13(VAR_43->phys + sizeof(MAILBOX_t));
  VAR_40->un.varBIUdiag.un.s2.xmit_bde64.addrLow =
   FUNC_14(VAR_43->phys + sizeof(MAILBOX_t));

  VAR_40->un.varBIUdiag.un.s2.rcv_bde64.addrHigh =
   FUNC_13(VAR_43->phys + sizeof(MAILBOX_t)
     + VAR_40->un.varBIUdiag.un.s2.xmit_bde64.tus.f.bdeSize);
  VAR_40->un.varBIUdiag.un.s2.rcv_bde64.addrLow =
   FUNC_14(VAR_43->phys + sizeof(MAILBOX_t)
     + VAR_40->un.varBIUdiag.un.s2.xmit_bde64.tus.f.bdeSize);
 } else if (VAR_40->mbxCommand == VAR_19) {
  VAR_45 = &VAR_40->un.varRdEventLog;
  VAR_47 = VAR_45->rcv_bde64.tus.f.bdeSize;
  VAR_48 = FUNC_0(VAR_32, VAR_45);




  if (VAR_47 > VAR_0 - sizeof(MAILBOX_t)) {
   VAR_53 = -VAR_5;
   goto job_done;
  }


  if (VAR_48 == 0) {
   VAR_40->un.varWords[3] = FUNC_14(VAR_43->phys
       + sizeof(MAILBOX_t));
   VAR_40->un.varWords[4] = FUNC_13(VAR_43->phys
       + sizeof(MAILBOX_t));
  }
 } else if (VAR_34->sli_rev == VAR_14) {




  if ((VAR_40->mbxCommand == VAR_16) &&
   (VAR_40->un.varDmp.type != VAR_1)) {



   VAR_47 = VAR_40->un.varWords[2];



   if (VAR_47 == 0) {
    VAR_53 = -VAR_5;
    goto job_done;
   }
   VAR_40->un.varWords[3] = FUNC_14(VAR_43->phys
      + sizeof(MAILBOX_t));
   VAR_40->un.varWords[4] = FUNC_13(VAR_43->phys
      + sizeof(MAILBOX_t));
  } else if ((VAR_40->mbxCommand == VAR_25) &&
   VAR_40->un.varUpdateCfg.co) {
   VAR_51 = (struct ulp_bde64 *)&VAR_40->un.varWords[4];


   if (VAR_51->tus.f.bdeSize >
       VAR_0 - sizeof(MAILBOX_t)) {
    VAR_53 = -VAR_5;
    goto job_done;
   }
   VAR_51->addrHigh = FUNC_13(VAR_43->phys
      + sizeof(MAILBOX_t));
   VAR_51->addrLow = FUNC_14(VAR_43->phys
      + sizeof(MAILBOX_t));
  } else if (VAR_40->mbxCommand == VAR_22) {

   VAR_49 = &VAR_39->u.mqe.un.sli4_config;
   if (!FUNC_0(VAR_33,
       &VAR_49->header.cfg_mhdr)) {



    VAR_50 = (struct lpfc_mbx_nembed_cmd *)
      &VAR_40->un.varWords[0];
    VAR_47 = VAR_50->sge[0].length;




    if ((VAR_47 == 0) ||
        (VAR_47 >
         VAR_0 - sizeof(MAILBOX_t))) {
     VAR_53 = -VAR_5;
     goto job_done;
    }

    VAR_50->sge[0].pa_hi =
      FUNC_13(VAR_43->phys
         + sizeof(MAILBOX_t));
    VAR_50->sge[0].pa_lo =
      FUNC_14(VAR_43->phys
         + sizeof(MAILBOX_t));
   }
  }
 }

 VAR_42->context_un.mbox.dmabuffers = VAR_43;


 VAR_39->mbox_cmpl = VAR_31;


 VAR_39->ctx_ndlp = VAR_42;
 VAR_42->type = VAR_30;
 VAR_42->set_job = VAR_35;
 VAR_42->context_un.mbox.pmboxq = VAR_39;
 VAR_42->context_un.mbox.mb = (MAILBOX_t *)VAR_41;
 VAR_42->context_un.mbox.ext = VAR_52;
 VAR_42->context_un.mbox.mbOffset = VAR_44->mbOffset;
 VAR_42->context_un.mbox.inExtWLen = VAR_44->inExtWLen;
 VAR_42->context_un.mbox.outExtWLen = VAR_44->outExtWLen;
 VAR_35->dd_data = VAR_42;

 if ((VAR_36->fc_flag & VAR_7) ||
     (!(VAR_34->sli.sli_flag & VAR_13))) {
  VAR_53 = FUNC_8(VAR_34, VAR_39, VAR_18);
  if (VAR_53 != VAR_23) {
   VAR_53 = (VAR_53 == VAR_24) ? -VAR_6 : -VAR_3;
   goto job_done;
  }


  FUNC_9(VAR_41, VAR_40, sizeof(*VAR_40));
  VAR_38->reply_payload_rcv_len =
   FUNC_15(VAR_35->reply_payload.sg_list,
         VAR_35->reply_payload.sg_cnt,
         VAR_41, VAR_55);

  VAR_53 = 0;
  goto job_done;
 }

 VAR_53 = FUNC_8(VAR_34, VAR_39, VAR_17);
 if ((VAR_53 == VAR_23) || (VAR_53 == VAR_15))
  return 1;

job_done:

 if (VAR_39)
  FUNC_11(VAR_39, VAR_34->mbox_mem_pool);
 FUNC_5(VAR_34, VAR_43);
 FUNC_1(VAR_42);

job_cont:
 return VAR_53;
}

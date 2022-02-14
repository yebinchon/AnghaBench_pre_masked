
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


union lpfc_sli4_cfg_shdr {int response; } ;
typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_27__ {int lsRjtRsnCodeExp; int lsRjtRsnCode; } ;
struct TYPE_28__ {TYPE_8__ b; } ;
struct ls_rjt {TYPE_9__ un; } ;
struct lpfc_nodelist {int nlp_DID; } ;
struct lpfc_lcb_context {int ox_id; int rx_id; int duration; int frequency; int capability; int type; int sub_command; struct lpfc_nodelist* ndlp; } ;
struct TYPE_25__ {int ox_id; } ;
struct TYPE_26__ {TYPE_6__ rcvsli3; } ;
struct TYPE_19__ {TYPE_7__ unsli3; int ulpContext; } ;
struct lpfc_iocbq {void* iocb_cmpl; scalar_t__ context2; TYPE_13__ iocb; } ;
struct TYPE_16__ {int elsXmitLSRJT; int elsXmitACC; } ;
struct lpfc_hba {TYPE_10__ fc_stat; int pport; int mbox_mem_pool; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct fc_lcb_res_frame {int lcb_duration; int lcb_frequency; int capability; int lcb_type; int lcb_sub_command; } ;
struct TYPE_20__ {int cfg_shdr; } ;
struct TYPE_21__ {TYPE_1__ header; } ;
struct TYPE_22__ {TYPE_2__ beacon_config; } ;
struct TYPE_23__ {TYPE_3__ un; } ;
struct TYPE_17__ {scalar_t__ mbxStatus; } ;
struct TYPE_24__ {TYPE_4__ mqe; TYPE_11__ mb; } ;
struct TYPE_18__ {TYPE_5__ u; int * ctx_buf; int * ctx_ndlp; } ;
typedef TYPE_11__ MAILBOX_t ;
typedef TYPE_12__ LPFC_MBOXQ_t ;
typedef TYPE_13__ IOCB_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (struct lpfc_lcb_context*) ;
 void* VAR_11 ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct lpfc_nodelist*) ;
 struct lpfc_iocbq* FUNC_4 (int ,int ,scalar_t__,int ,struct lpfc_nodelist*,int ,scalar_t__) ;
 int FUNC_5 (struct lpfc_hba*,int ,int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_7 (TYPE_12__*,int ) ;
 int FUNC_8 (struct fc_lcb_res_frame*,int ,int) ;

__attribute__((used)) static void
FUNC_9(struct lpfc_hba *VAR_15, LPFC_MBOXQ_t *VAR_16)
{
 MAILBOX_t *VAR_17;
 IOCB_t *VAR_18;
 uint8_t *VAR_19;
 struct lpfc_iocbq *VAR_20;
 struct lpfc_nodelist *VAR_21;
 struct ls_rjt *VAR_22;
 union lpfc_sli4_cfg_shdr *VAR_23;
 struct lpfc_lcb_context *VAR_24;
 struct fc_lcb_res_frame *VAR_25;
 uint32_t VAR_26, VAR_27, VAR_28;
 int VAR_29;

 VAR_17 = &VAR_16->u.mb;
 VAR_24 = (struct lpfc_lcb_context *)VAR_16->ctx_ndlp;
 VAR_21 = VAR_24->ndlp;
 VAR_16->ctx_ndlp = ((void*)0);
 VAR_16->ctx_buf = ((void*)0);

 VAR_23 = (union lpfc_sli4_cfg_shdr *)
   &VAR_16->u.mqe.un.beacon_config.header.cfg_shdr;
 VAR_27 = FUNC_0(VAR_14, &VAR_23->response);
 VAR_28 = FUNC_0(VAR_13, &VAR_23->response);

 FUNC_5(VAR_15, VAR_5, VAR_6,
    "0194 SET_BEACON_CONFIG mailbox "
    "completed with status x%x add_status x%x,"
    " mbx status x%x\n",
    VAR_27, VAR_28, VAR_17->mbxStatus);

 if ((VAR_17->mbxStatus != VAR_10) || VAR_27 ||
     (VAR_28 == VAR_1) ||
     (VAR_28 == VAR_0)) {
  FUNC_7(VAR_16, VAR_15->mbox_mem_pool);
  goto error;
 }

 FUNC_7(VAR_16, VAR_15->mbox_mem_pool);
 VAR_26 = sizeof(struct fc_lcb_res_frame);
 VAR_20 = FUNC_4(VAR_15->pport, 0, VAR_26,
   VAR_12, VAR_21,
   VAR_21->nlp_DID, VAR_2);


 FUNC_3(VAR_21);

 if (!VAR_20)
  goto free_lcb_context;

 VAR_25 = (struct fc_lcb_res_frame *)
  (((struct lpfc_dmabuf *)VAR_20->context2)->virt);

 FUNC_8(VAR_25, 0, sizeof(struct fc_lcb_res_frame));
 VAR_18 = &VAR_20->iocb;
 VAR_18->ulpContext = VAR_24->rx_id;
 VAR_18->unsli3.rcvsli3.ox_id = VAR_24->ox_id;

 VAR_19 = (uint8_t *)(((struct lpfc_dmabuf *)VAR_20->context2)->virt);
 *((uint32_t *)(VAR_19)) = VAR_2;
 VAR_25->lcb_sub_command = VAR_24->sub_command;
 VAR_25->lcb_type = VAR_24->type;
 VAR_25->capability = VAR_24->capability;
 VAR_25->lcb_frequency = VAR_24->frequency;
 VAR_25->lcb_duration = VAR_24->duration;
 VAR_20->iocb_cmpl = VAR_11;
 VAR_15->fc_stat.elsXmitACC++;
 VAR_29 = FUNC_6(VAR_15, VAR_7, VAR_20, 0);
 if (VAR_29 == VAR_4)
  FUNC_2(VAR_15, VAR_20);

 FUNC_1(VAR_24);
 return;

error:
 VAR_26 = sizeof(struct fc_lcb_res_frame);
 VAR_20 = FUNC_4(VAR_15->pport, 0, VAR_26,
   VAR_12, VAR_21,
   VAR_21->nlp_DID, VAR_3);
 FUNC_3(VAR_21);
 if (!VAR_20)
  goto free_lcb_context;

 VAR_18 = &VAR_20->iocb;
 VAR_18->ulpContext = VAR_24->rx_id;
 VAR_18->unsli3.rcvsli3.ox_id = VAR_24->ox_id;
 VAR_19 = (uint8_t *)(((struct lpfc_dmabuf *)VAR_20->context2)->virt);

 *((uint32_t *)(VAR_19)) = VAR_3;
 VAR_22 = (struct ls_rjt *)(VAR_19 + sizeof(uint32_t));
 VAR_22->un.b.lsRjtRsnCode = VAR_9;

 if (VAR_28 == VAR_1)
  VAR_22->un.b.lsRjtRsnCodeExp = VAR_8;

 VAR_20->iocb_cmpl = VAR_11;
 VAR_15->fc_stat.elsXmitLSRJT++;
 VAR_29 = FUNC_6(VAR_15, VAR_7, VAR_20, 0);
 if (VAR_29 == VAR_4)
  FUNC_2(VAR_15, VAR_20);
free_lcb_context:
 FUNC_1(VAR_24);
}

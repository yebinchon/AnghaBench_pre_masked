
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


union lpfc_sli4_cfg_shdr {int response; } ;
typedef void* uint32_t ;
struct sli4_link_diag {int error_action; int test_version; int loops; int test_id; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_sli4_cfg_mhdr {int dummy; } ;
struct lpfc_mbx_set_link_diag_state {int dummy; } ;
struct TYPE_26__ {int req; } ;
struct lpfc_mbx_run_link_diag_test {TYPE_5__ u; } ;
struct TYPE_24__ {int lnk_tp; int lnk_no; } ;
struct TYPE_25__ {TYPE_3__ lnk_info; int sli_intf; } ;
struct lpfc_hba {scalar_t__ sli_rev; int mbox_mem_pool; TYPE_4__ sli4_hba; } ;
struct TYPE_22__ {scalar_t__ vendor_cmd; } ;
struct TYPE_23__ {TYPE_1__ h_vendor; } ;
struct fc_bsg_request {TYPE_2__ rqst_data; } ;
struct TYPE_19__ {scalar_t__ vendor_rsp; } ;
struct TYPE_20__ {TYPE_11__ vendor_reply; } ;
struct fc_bsg_reply {int result; int reply_payload_rcv_len; TYPE_12__ reply_data; } ;
struct diag_status {int mbox_status; void* shdr_add_status; void* shdr_status; } ;
struct bsg_job {int request_len; int reply_len; struct fc_bsg_reply* reply; struct fc_bsg_request* request; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_27__ {int cfg_shdr; } ;
struct TYPE_28__ {TYPE_6__ header; } ;
struct TYPE_29__ {TYPE_7__ sli4_config; struct lpfc_mbx_run_link_diag_test link_diag_test; } ;
struct TYPE_30__ {TYPE_8__ un; } ;
struct TYPE_18__ {TYPE_9__ mqe; } ;
struct TYPE_21__ {TYPE_10__ u; } ;
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
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (struct bsg_job*,int,int ) ;
 struct Scsi_Host* FUNC_3 (struct bsg_job*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (struct lpfc_hba*,int ,int ,char*,int,int,...) ;
 int FUNC_7 (struct lpfc_hba*,int) ;
 void* FUNC_8 (struct lpfc_hba*,TYPE_13__*,int ,int ,void*,int ) ;
 int VAR_20 ;
 int FUNC_9 (struct lpfc_hba*,TYPE_13__*,int ) ;
 TYPE_13__* FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_13__*,int ) ;
 struct lpfc_vport* FUNC_12 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_13(struct bsg_job *VAR_21)
{
 struct fc_bsg_request *VAR_22 = VAR_21->request;
 struct fc_bsg_reply *VAR_23 = VAR_21->reply;
 struct Scsi_Host *VAR_24;
 struct lpfc_vport *VAR_25;
 struct lpfc_hba *VAR_26;
 LPFC_MBOXQ_t *VAR_27;
 struct sli4_link_diag *VAR_28;
 uint32_t VAR_29, VAR_30;
 struct lpfc_mbx_run_link_diag_test *VAR_31;
 union lpfc_sli4_cfg_shdr *VAR_32;
 uint32_t VAR_33, VAR_34;
 struct diag_status *VAR_35;
 int VAR_36, VAR_37 = 0;

 VAR_24 = FUNC_3(VAR_21);
 if (!VAR_24) {
  VAR_37 = -VAR_1;
  goto job_error;
 }
 VAR_25 = FUNC_12(VAR_24);
 if (!VAR_25) {
  VAR_37 = -VAR_1;
  goto job_error;
 }
 VAR_26 = VAR_25->phba;
 if (!VAR_26) {
  VAR_37 = -VAR_1;
  goto job_error;
 }

 if (VAR_26->sli_rev < VAR_10) {
  VAR_37 = -VAR_1;
  goto job_error;
 }
 if (FUNC_0(VAR_20, &VAR_26->sli4_hba.sli_intf) <
     VAR_9) {
  VAR_37 = -VAR_1;
  goto job_error;
 }

 if (VAR_21->request_len < sizeof(struct fc_bsg_request) +
     sizeof(struct sli4_link_diag)) {
  FUNC_6(VAR_26, VAR_4, VAR_5,
    "3013 Received LINK DIAG TEST request "
    " size:%d below the minimum size:%d\n",
    VAR_21->request_len,
    (int)(sizeof(struct fc_bsg_request) +
    sizeof(struct sli4_link_diag)));
  VAR_37 = -VAR_0;
  goto job_error;
 }

 VAR_37 = FUNC_4(VAR_26);
 if (VAR_37)
  goto job_error;

 VAR_28 = (struct sli4_link_diag *)
    VAR_22->rqst_data.h_vendor.vendor_cmd;

 VAR_37 = FUNC_7(VAR_26, 1);

 if (VAR_37)
  goto job_error;

 VAR_27 = FUNC_10(VAR_26->mbox_mem_pool, VAR_2);
 if (!VAR_27)
  goto link_diag_test_exit;

 VAR_29 = (sizeof(struct lpfc_mbx_set_link_diag_state) -
     sizeof(struct lpfc_sli4_cfg_mhdr));
 VAR_30 = FUNC_8(VAR_26, VAR_27, VAR_7,
         VAR_6,
         VAR_29, VAR_8);
 if (VAR_30 != VAR_29)
  goto link_diag_test_exit;

 VAR_31 = &VAR_27->u.mqe.un.link_diag_test;
 FUNC_1(VAR_15, &VAR_31->u.req,
        VAR_26->sli4_hba.lnk_info.lnk_no);
 FUNC_1(VAR_16, &VAR_31->u.req,
        VAR_26->sli4_hba.lnk_info.lnk_tp);
 FUNC_1(VAR_18, &VAR_31->u.req,
        VAR_28->test_id);
 FUNC_1(VAR_17, &VAR_31->u.req,
        VAR_28->loops);
 FUNC_1(VAR_19, &VAR_31->u.req,
        VAR_28->test_version);
 FUNC_1(VAR_14, &VAR_31->u.req,
        VAR_28->error_action);

 VAR_36 = FUNC_9(VAR_26, VAR_27, VAR_11);

 VAR_32 = (union lpfc_sli4_cfg_shdr *)
  &VAR_27->u.mqe.un.sli4_config.header.cfg_shdr;
 VAR_33 = FUNC_0(VAR_13, &VAR_32->response);
 VAR_34 = FUNC_0(VAR_12, &VAR_32->response);
 if (VAR_33 || VAR_34 || VAR_36) {
  FUNC_6(VAR_26, VAR_3, VAR_5,
    "3010 Run link diag test mailbox failed with "
    "mbx_status x%x status x%x, add_status x%x\n",
    VAR_36, VAR_33, VAR_34);
 }

 VAR_35 = (struct diag_status *)
       VAR_23->reply_data.vendor_reply.vendor_rsp;

 if (VAR_21->reply_len <
     sizeof(struct fc_bsg_request) + sizeof(struct diag_status)) {
  FUNC_6(VAR_26, VAR_4, VAR_5,
    "3012 Received Run link diag test reply "
    "below minimum size (%d): reply_len:%d\n",
    (int)(sizeof(struct fc_bsg_request) +
    sizeof(struct diag_status)),
    VAR_21->reply_len);
  VAR_37 = -VAR_0;
  goto job_error;
 }

 VAR_35->mbox_status = VAR_36;
 VAR_35->shdr_status = VAR_33;
 VAR_35->shdr_add_status = VAR_34;

link_diag_test_exit:
 VAR_37 = FUNC_7(VAR_26, 0);

 if (VAR_27)
  FUNC_11(VAR_27, VAR_26->mbox_mem_pool);

 FUNC_5(VAR_26);

job_error:

 VAR_23->result = VAR_37;

 if (VAR_37 == 0)
  FUNC_2(VAR_21, VAR_23->result,
          VAR_23->reply_payload_rcv_len);
 return VAR_37;
}

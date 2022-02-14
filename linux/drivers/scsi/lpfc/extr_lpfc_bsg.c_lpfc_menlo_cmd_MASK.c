
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct ulp_bde64 {int dummy; } ;
struct menlo_response {int dummy; } ;
struct menlo_command {scalar_t__ cmd; int xri; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_22__ {int Fctl; int Type; int Rctl; scalar_t__ Dfctl; } ;
struct TYPE_23__ {TYPE_7__ hcsw; } ;
struct TYPE_21__ {int bdeSize; int bdeFlags; int addrLow; int addrHigh; scalar_t__ ulpIoTag32; } ;
struct TYPE_24__ {TYPE_8__ w5; TYPE_6__ bdl; } ;
struct TYPE_13__ {scalar_t__* ulpWord; TYPE_9__ genreq64; } ;
struct TYPE_14__ {int ulpBdeCount; int ulpLe; int ulpPU; int ulpContext; TYPE_10__ un; int ulpCommand; scalar_t__ ulpTimeout; int ulpOwner; int ulpClass; } ;
struct lpfc_iocbq {struct lpfc_dmabuf* context3; struct lpfc_dmabuf* context2; struct lpfc_dmabuf* context1; int iocb_cmpl; int vport; int iocb_flag; TYPE_11__ iocb; } ;
struct lpfc_hba {int menlo_flag; int pport; } ;
struct TYPE_16__ {struct lpfc_dmabuf* rmp; struct lpfc_iocbq* cmdiocbq; } ;
struct TYPE_17__ {TYPE_1__ menlo; } ;
struct lpfc_dmabuf {int phys; scalar_t__ virt; TYPE_2__ context_un; struct bsg_job* set_job; int type; int list; } ;
struct TYPE_18__ {scalar_t__ vendor_cmd; } ;
struct TYPE_19__ {TYPE_3__ h_vendor; } ;
struct fc_bsg_request {TYPE_4__ rqst_data; } ;
struct fc_bsg_reply {int result; scalar_t__ reply_payload_rcv_len; } ;
struct bsg_job_data {int phys; scalar_t__ virt; TYPE_2__ context_un; struct bsg_job* set_job; int type; int list; } ;
struct TYPE_20__ {int payload_len; } ;
struct TYPE_15__ {int payload_len; } ;
struct bsg_job {int request_len; int reply_len; struct lpfc_dmabuf* dd_data; TYPE_5__ reply_payload; TYPE_12__ request_payload; struct fc_bsg_reply* reply; struct fc_bsg_request* request; } ;
typedef TYPE_11__ IOCB_t ;


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
 int FUNC_0 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (struct bsg_job*) ;
 int FUNC_2 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_3 (int,int ) ;
 struct lpfc_dmabuf* FUNC_4 (struct lpfc_hba*,int ,int,struct ulp_bde64*,int*) ;
 int FUNC_5 (struct lpfc_dmabuf*,TYPE_12__*,int ,int) ;
 int VAR_26 ;
 int FUNC_6 (struct lpfc_hba*,struct lpfc_dmabuf*) ;
 scalar_t__ FUNC_7 (struct lpfc_hba*,int ,int *) ;
 int FUNC_8 (struct lpfc_hba*,scalar_t__,int ) ;
 int FUNC_9 (struct lpfc_hba*,int ,int ,char*) ;
 struct lpfc_iocbq* FUNC_10 (struct lpfc_hba*) ;
 int FUNC_11 (struct lpfc_hba*,int ,struct lpfc_iocbq*,scalar_t__) ;
 int FUNC_12 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 struct lpfc_vport* FUNC_15 (int ) ;

__attribute__((used)) static int
FUNC_16(struct bsg_job *VAR_27)
{
 struct lpfc_vport *VAR_28 = FUNC_15(FUNC_1(VAR_27));
 struct fc_bsg_request *VAR_29 = VAR_27->request;
 struct fc_bsg_reply *VAR_30 = VAR_27->reply;
 struct lpfc_hba *VAR_31 = VAR_28->phba;
 struct lpfc_iocbq *VAR_32;
 IOCB_t *VAR_33;
 int VAR_34 = 0;
 struct menlo_command *VAR_35;
 struct lpfc_dmabuf *VAR_36 = ((void*)0), *VAR_37 = ((void*)0), *VAR_38 = ((void*)0);
 int VAR_39;
 int VAR_40;
 struct bsg_job_data *VAR_41;
 struct ulp_bde64 *VAR_42 = ((void*)0);


 VAR_30->reply_payload_rcv_len = 0;

 if (VAR_27->request_len <
     sizeof(struct fc_bsg_request) +
  sizeof(struct menlo_command)) {
  FUNC_9(VAR_31, VAR_11, VAR_13,
    "2784 Received MENLO_CMD request below "
    "minimum size\n");
  VAR_34 = -VAR_6;
  goto no_dd_data;
 }

 if (VAR_27->reply_len <
     sizeof(struct fc_bsg_request) + sizeof(struct menlo_response)) {
  FUNC_9(VAR_31, VAR_11, VAR_13,
    "2785 Received MENLO_CMD reply below "
    "minimum size\n");
  VAR_34 = -VAR_6;
  goto no_dd_data;
 }

 if (!(VAR_31->menlo_flag & VAR_9)) {
  FUNC_9(VAR_31, VAR_11, VAR_13,
    "2786 Adapter does not support menlo "
    "commands\n");
  VAR_34 = -VAR_5;
  goto no_dd_data;
 }

 VAR_35 = (struct menlo_command *)
  VAR_29->rqst_data.h_vendor.vendor_cmd;


 VAR_41 = FUNC_3(sizeof(struct bsg_job_data), VAR_8);
 if (!VAR_41) {
  FUNC_9(VAR_31, VAR_11, VAR_13,
    "2787 Failed allocation of dd_data\n");
  VAR_34 = -VAR_4;
  goto no_dd_data;
 }

 VAR_36 = FUNC_3(sizeof(struct lpfc_dmabuf), VAR_8);
 if (!VAR_36) {
  VAR_34 = -VAR_4;
  goto free_dd;
 }

 VAR_36->virt = FUNC_7(VAR_31, 0, &VAR_36->phys);
 if (!VAR_36->virt) {
  VAR_34 = -VAR_4;
  goto free_bmp;
 }

 FUNC_0(&VAR_36->list);

 VAR_42 = (struct ulp_bde64 *)VAR_36->virt;
 VAR_39 = VAR_14/sizeof(struct ulp_bde64);
 VAR_37 = FUNC_4(VAR_31, VAR_27->request_payload.payload_len,
         1, VAR_42, &VAR_39);
 if (!VAR_37) {
  VAR_34 = -VAR_4;
  goto free_bmp;
 }
 FUNC_5(VAR_37, &VAR_27->request_payload,
      VAR_27->request_payload.payload_len, 1);

 VAR_42 += VAR_39;
 VAR_40 = VAR_14/sizeof(struct ulp_bde64) - VAR_39;
 VAR_38 = FUNC_4(VAR_31, VAR_27->reply_payload.payload_len, 0,
         VAR_42, &VAR_40);
 if (!VAR_38) {
  VAR_34 = -VAR_4;
  goto free_cmp;
 }

 VAR_32 = FUNC_10(VAR_31);
 if (!VAR_32) {
  VAR_34 = -VAR_4;
  goto free_rmp;
 }

 VAR_33 = &VAR_32->iocb;
 VAR_33->un.genreq64.bdl.ulpIoTag32 = 0;
 VAR_33->un.genreq64.bdl.addrHigh = FUNC_13(VAR_36->phys);
 VAR_33->un.genreq64.bdl.addrLow = FUNC_14(VAR_36->phys);
 VAR_33->un.genreq64.bdl.bdeFlags = VAR_0;
 VAR_33->un.genreq64.bdl.bdeSize =
     (VAR_39 + VAR_40) * sizeof(struct ulp_bde64);
 VAR_33->un.genreq64.w5.hcsw.Fctl = (VAR_24 | VAR_12);
 VAR_33->un.genreq64.w5.hcsw.Dfctl = 0;
 VAR_33->un.genreq64.w5.hcsw.Rctl = VAR_7;
 VAR_33->un.genreq64.w5.hcsw.Type = VAR_22;
 VAR_33->ulpBdeCount = 1;
 VAR_33->ulpClass = VAR_1;
 VAR_33->ulpOwner = VAR_23;
 VAR_33->ulpLe = 1;
 VAR_32->iocb_flag |= VAR_17;
 VAR_32->vport = VAR_31->pport;

 VAR_33->ulpTimeout = VAR_21 - 5;
 VAR_32->iocb_cmpl = VAR_26;
 VAR_32->context1 = VAR_41;
 VAR_32->context2 = VAR_37;
 VAR_32->context3 = VAR_36;
 if (VAR_35->cmd == VAR_15) {
  VAR_33->ulpCommand = VAR_2;
  VAR_33->ulpPU = VAR_20;
  VAR_33->un.ulpWord[4] = VAR_19;
  VAR_33->ulpContext = VAR_18;
 } else {
  VAR_33->ulpCommand = VAR_3;
  VAR_33->ulpPU = 1;
  VAR_33->un.ulpWord[4] = 0;
  VAR_33->ulpContext = VAR_35->xri;
 }

 VAR_41->type = VAR_25;
 VAR_41->set_job = VAR_27;
 VAR_41->context_un.menlo.cmdiocbq = VAR_32;
 VAR_41->context_un.menlo.rmp = VAR_38;
 VAR_27->dd_data = VAR_41;

 VAR_34 = FUNC_11(VAR_31, VAR_16, VAR_32,
  VAR_21 - 5);
 if (VAR_34 == VAR_10)
  return 0;

 FUNC_12(VAR_31, VAR_32);

free_rmp:
 FUNC_6(VAR_31, VAR_38);
free_cmp:
 FUNC_6(VAR_31, VAR_37);
free_bmp:
 if (VAR_36->virt)
  FUNC_8(VAR_31, VAR_36->virt, VAR_36->phys);
 FUNC_2(VAR_36);
free_dd:
 FUNC_2(VAR_41);
no_dd_data:

 VAR_30->result = VAR_34;
 VAR_27->dd_data = ((void*)0);
 return VAR_34;
}

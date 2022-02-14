
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int uint32_t ;
struct ulp_bde64 {int dummy; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_rport_data {struct lpfc_nodelist* pnode; } ;
struct lpfc_nodelist {int nlp_flag; size_t nlp_rpi; } ;
struct TYPE_20__ {struct lpfc_nodelist* ndlp; } ;
struct TYPE_14__ {int Fctl; int Type; int Rctl; scalar_t__ Dfctl; } ;
struct TYPE_18__ {TYPE_10__ hcsw; } ;
struct TYPE_24__ {int bdeSize; int bdeFlags; int addrLow; int addrHigh; scalar_t__ ulpIoTag32; } ;
struct TYPE_25__ {TYPE_1__ w5; TYPE_7__ bdl; } ;
struct TYPE_26__ {TYPE_8__ genreq64; } ;
struct TYPE_15__ {int ulpBdeCount; int ulpLe; size_t ulpContext; int ulpTimeout; int ulpOwner; int ulpClass; TYPE_9__ un; int ulpCommand; } ;
struct lpfc_iocbq {int iocb_flag; TYPE_3__ context_un; struct lpfc_dmabuf* context3; struct lpfc_dmabuf* context2; struct lpfc_dmabuf* context1; int iocb_cmpl; int vport; TYPE_11__ iocb; } ;
struct TYPE_19__ {size_t* rpi_ids; } ;
struct lpfc_hba {scalar_t__ sli_rev; int fc_ratov; int cfg_poll; int hbalock; int HCregaddr; int pport; TYPE_2__ sli4_hba; } ;
struct TYPE_21__ {struct lpfc_dmabuf* rmp; struct lpfc_nodelist* ndlp; struct lpfc_iocbq* cmdiocbq; } ;
struct TYPE_22__ {TYPE_4__ iocb; } ;
struct lpfc_dmabuf {int phys; scalar_t__ virt; TYPE_5__ context_un; struct bsg_job* set_job; int type; int list; } ;
struct fc_bsg_reply {int result; scalar_t__ reply_payload_rcv_len; } ;
struct bsg_job_data {int phys; scalar_t__ virt; TYPE_5__ context_un; struct bsg_job* set_job; int type; int list; } ;
struct TYPE_23__ {int payload_len; } ;
struct TYPE_16__ {int payload_len; } ;
struct bsg_job {struct lpfc_dmabuf* dd_data; TYPE_6__ reply_payload; TYPE_12__ request_payload; struct fc_bsg_reply* reply; } ;
struct TYPE_17__ {struct lpfc_rport_data* dd_data; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 TYPE_13__* FUNC_1 (struct bsg_job*) ;
 int FUNC_2 (struct bsg_job*) ;
 int FUNC_3 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_4 (int,int ) ;
 struct lpfc_dmabuf* FUNC_5 (struct lpfc_hba*,int ,int,struct ulp_bde64*,int*) ;
 int FUNC_6 (struct lpfc_dmabuf*,TYPE_12__*,int ,int) ;
 int VAR_27 ;
 int FUNC_7 (struct lpfc_hba*,struct lpfc_dmabuf*) ;
 scalar_t__ FUNC_8 (struct lpfc_hba*,int ,int *) ;
 int FUNC_9 (struct lpfc_hba*,scalar_t__,int ) ;
 int FUNC_10 (struct lpfc_nodelist*) ;
 int FUNC_11 (struct lpfc_nodelist*) ;
 int FUNC_12 (struct lpfc_hba*,int ,int ,char*) ;
 scalar_t__ FUNC_13 (int ,int*) ;
 struct lpfc_iocbq* FUNC_14 (struct lpfc_hba*) ;
 int FUNC_15 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_16 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 struct lpfc_vport* FUNC_20 (int ) ;
 int FUNC_21 (int *,unsigned long) ;
 int FUNC_22 (int *,unsigned long) ;
 int FUNC_23 (int,int ) ;

__attribute__((used)) static int
FUNC_24(struct bsg_job *VAR_28)
{
 struct lpfc_vport *VAR_29 = FUNC_20(FUNC_2(VAR_28));
 struct lpfc_hba *VAR_30 = VAR_29->phba;
 struct lpfc_rport_data *VAR_31 = FUNC_1(VAR_28)->dd_data;
 struct lpfc_nodelist *VAR_32 = VAR_31->pnode;
 struct fc_bsg_reply *VAR_33 = VAR_28->reply;
 struct ulp_bde64 *VAR_34 = ((void*)0);
 uint32_t VAR_35;
 struct lpfc_iocbq *VAR_36 = ((void*)0);
 IOCB_t *VAR_37;
 struct lpfc_dmabuf *VAR_38 = ((void*)0), *VAR_39 = ((void*)0), *VAR_40 = ((void*)0);
 int VAR_41;
 int VAR_42;
 struct bsg_job_data *VAR_43;
 unsigned long VAR_44;
 uint32_t VAR_45;
 int VAR_46 = 0;
 int VAR_47;


 VAR_33->reply_payload_rcv_len = 0;


 VAR_43 = FUNC_4(sizeof(struct bsg_job_data), VAR_10);
 if (!VAR_43) {
  FUNC_12(VAR_30, VAR_14, VAR_16,
    "2733 Failed allocation of dd_data\n");
  VAR_46 = -VAR_7;
  goto no_dd_data;
 }

 if (!FUNC_10(VAR_32)) {
  VAR_46 = -VAR_6;
  goto no_ndlp;
 }

 if (VAR_32->nlp_flag & VAR_23) {
  VAR_46 = -VAR_6;
  goto free_ndlp;
 }

 VAR_36 = FUNC_14(VAR_30);
 if (!VAR_36) {
  VAR_46 = -VAR_7;
  goto free_ndlp;
 }

 VAR_37 = &VAR_36->iocb;

 VAR_38 = FUNC_4(sizeof(struct lpfc_dmabuf), VAR_10);
 if (!VAR_38) {
  VAR_46 = -VAR_7;
  goto free_cmdiocbq;
 }
 VAR_38->virt = FUNC_8(VAR_30, 0, &VAR_38->phys);
 if (!VAR_38->virt) {
  VAR_46 = -VAR_7;
  goto free_bmp;
 }

 FUNC_0(&VAR_38->list);

 VAR_34 = (struct ulp_bde64 *) VAR_38->virt;
 VAR_41 = VAR_17/sizeof(struct ulp_bde64);
 VAR_39 = FUNC_5(VAR_30, VAR_28->request_payload.payload_len,
         1, VAR_34, &VAR_41);
 if (!VAR_39) {
  VAR_46 = -VAR_7;
  goto free_bmp;
 }
 FUNC_6(VAR_39, &VAR_28->request_payload,
      VAR_28->request_payload.payload_len, 1);

 VAR_34 += VAR_41;
 VAR_42 = VAR_17/sizeof(struct ulp_bde64) - VAR_41;
 VAR_40 = FUNC_5(VAR_30, VAR_28->reply_payload.payload_len, 0,
         VAR_34, &VAR_42);
 if (!VAR_40) {
  VAR_46 = -VAR_7;
  goto free_cmp;
 }

 VAR_37->un.genreq64.bdl.ulpIoTag32 = 0;
 VAR_37->un.genreq64.bdl.addrHigh = FUNC_17(VAR_38->phys);
 VAR_37->un.genreq64.bdl.addrLow = FUNC_18(VAR_38->phys);
 VAR_37->un.genreq64.bdl.bdeFlags = VAR_0;
 VAR_37->un.genreq64.bdl.bdeSize =
  (VAR_41 + VAR_42) * sizeof(struct ulp_bde64);
 VAR_37->ulpCommand = VAR_2;
 VAR_37->un.genreq64.w5.hcsw.Fctl = (VAR_25 | VAR_15);
 VAR_37->un.genreq64.w5.hcsw.Dfctl = 0;
 VAR_37->un.genreq64.w5.hcsw.Rctl = VAR_8;
 VAR_37->un.genreq64.w5.hcsw.Type = VAR_9;
 VAR_37->ulpBdeCount = 1;
 VAR_37->ulpLe = 1;
 VAR_37->ulpClass = VAR_1;
 VAR_37->ulpContext = VAR_32->nlp_rpi;
 if (VAR_30->sli_rev == VAR_22)
  VAR_37->ulpContext = VAR_30->sli4_hba.rpi_ids[VAR_32->nlp_rpi];
 VAR_37->ulpOwner = VAR_24;
 VAR_36->vport = VAR_30->pport;
 VAR_36->context3 = VAR_38;
 VAR_36->iocb_flag |= VAR_21;
 VAR_35 = VAR_30->fc_ratov * 2;
 VAR_37->ulpTimeout = VAR_35;

 VAR_36->iocb_cmpl = VAR_27;
 VAR_36->context1 = VAR_43;
 VAR_36->context2 = VAR_39;
 VAR_36->context3 = VAR_38;
 VAR_36->context_un.ndlp = VAR_32;
 VAR_43->type = VAR_26;
 VAR_43->set_job = VAR_28;
 VAR_43->context_un.iocb.cmdiocbq = VAR_36;
 VAR_43->context_un.iocb.ndlp = VAR_32;
 VAR_43->context_un.iocb.rmp = VAR_40;
 VAR_28->dd_data = VAR_43;

 if (VAR_30->cfg_poll & VAR_3) {
  if (FUNC_13(VAR_30->HCregaddr, &VAR_45)) {
   VAR_46 = -VAR_5 ;
   goto free_rmp;
  }
  VAR_45 |= (VAR_11 << VAR_19);
  FUNC_23(VAR_45, VAR_30->HCregaddr);
  FUNC_19(VAR_30->HCregaddr);
 }

 VAR_47 = FUNC_15(VAR_30, VAR_18, VAR_36, 0);

 if (VAR_47 == VAR_13) {
  FUNC_21(&VAR_30->hbalock, VAR_44);

  if (VAR_36->iocb_flag & VAR_21) {

   VAR_36->iocb_flag |= VAR_20;
  }
  FUNC_22(&VAR_30->hbalock, VAR_44);
  return 0;
 } else if (VAR_47 == VAR_12) {
  VAR_46 = -VAR_4;
 } else {
  VAR_46 = -VAR_5;
 }


 VAR_28->dd_data = ((void*)0);

free_rmp:
 FUNC_7(VAR_30, VAR_40);
free_cmp:
 FUNC_7(VAR_30, VAR_39);
free_bmp:
 if (VAR_38->virt)
  FUNC_9(VAR_30, VAR_38->virt, VAR_38->phys);
 FUNC_3(VAR_38);
free_cmdiocbq:
 FUNC_16(VAR_30, VAR_36);
free_ndlp:
 FUNC_11(VAR_32);
no_ndlp:
 FUNC_3(VAR_43);
no_dd_data:

 VAR_33->result = VAR_46;
 VAR_28->dd_data = ((void*)0);
 return VAR_46;
}

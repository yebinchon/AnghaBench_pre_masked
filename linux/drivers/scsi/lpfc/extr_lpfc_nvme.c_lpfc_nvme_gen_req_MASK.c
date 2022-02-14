
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_18__ {int abort_tag; } ;
struct TYPE_17__ {int request_payload_len; TYPE_9__ wqe_com; TYPE_9__ wge_ctl; } ;
struct TYPE_12__ {int bdeSize; scalar_t__ bdeFlags; } ;
struct TYPE_13__ {TYPE_3__ f; } ;
struct TYPE_14__ {int addrHigh; int addrLow; TYPE_4__ tus; } ;
struct TYPE_15__ {TYPE_5__ bde; } ;
union lpfc_wqe128 {TYPE_8__ gen_req; TYPE_6__ generic; } ;
typedef union lpfc_wqe {int dummy; } lpfc_wqe ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_10__ {scalar_t__ bdeFlags; scalar_t__ bdeSize; } ;
struct TYPE_11__ {TYPE_1__ f; int w; } ;
struct ulp_bde64 {int addrHigh; int addrLow; TYPE_2__ tus; } ;
struct nvmefc_ls_req {int dummy; } ;
struct lpfc_vport {int port_state; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {size_t nlp_rpi; int nlp_DID; } ;
struct lpfc_iocbq {int rsvd2; int sli4_xritag; int iotag; void (* wqe_cmpl ) (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_wcqe_complete*) ;int retry; struct lpfc_vport* vport; scalar_t__ drvrTimeout; int * iocb_cmpl; scalar_t__ hba_wqidx; int * context2; int context1; int iocb_flag; int * context3; union lpfc_wqe128 wqe; } ;
struct TYPE_16__ {int* rpi_ids; int * hdwq; } ;
struct lpfc_hba {int fc_ratov; TYPE_7__ sli4_hba; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,TYPE_9__*,int) ;
 int FUNC_1 (struct lpfc_nodelist*) ;
 int FUNC_2 (struct lpfc_hba*,char*,int,int,int ) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ,char*,int ,int,int ,...) ;
 int FUNC_4 (struct lpfc_hba*,int *,struct lpfc_iocbq*) ;
 struct lpfc_iocbq* FUNC_5 (struct lpfc_hba*) ;
 int FUNC_6 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_7 (union lpfc_wqe128*,int ,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;

__attribute__((used)) static int
FUNC_8(struct lpfc_vport *VAR_34, struct lpfc_dmabuf *VAR_35,
    struct lpfc_dmabuf *VAR_36,
    struct nvmefc_ls_req *VAR_37,
    void (*VAR_38)(struct lpfc_hba *, struct lpfc_iocbq *,
          struct lpfc_wcqe_complete *),
    struct lpfc_nodelist *VAR_39, uint32_t VAR_40,
    uint32_t VAR_41, uint8_t VAR_42)
{
 struct lpfc_hba *VAR_43 = VAR_34->phba;
 union lpfc_wqe128 *VAR_44;
 struct lpfc_iocbq *VAR_45;
 struct ulp_bde64 *VAR_46;
 struct ulp_bde64 VAR_47;
 int VAR_48, VAR_49, VAR_50, VAR_51;


 VAR_45 = FUNC_5(VAR_43);
 if (VAR_45 == ((void*)0))
  return 1;

 VAR_44 = &VAR_45->wqe;

 FUNC_7(VAR_44, 0, sizeof(union lpfc_wqe));

 VAR_45->context3 = (uint8_t *)VAR_35;
 VAR_45->iocb_flag |= VAR_9;


 VAR_45->context1 = FUNC_1(VAR_39);
 VAR_45->context2 = (uint8_t *)VAR_37;


 if (!VAR_41)

  VAR_41 = (3 * VAR_43->fc_ratov);


 VAR_50 = 0;
 VAR_51 = 0;
 VAR_46 = (struct ulp_bde64 *)VAR_35->virt;
 for (VAR_48 = 0; VAR_48 < VAR_40; VAR_48++) {
  VAR_47.tus.w = VAR_46[VAR_48].tus.w;
  if (VAR_47.tus.f.bdeFlags != VAR_0)
   break;
  VAR_50 += VAR_47.tus.f.bdeSize;
  if (VAR_48 == 0)
   VAR_51 = VAR_50;
 }

 VAR_45->rsvd2 = VAR_40;
 VAR_45->hba_wqidx = 0;


 VAR_44->generic.bde.tus.f.bdeFlags = VAR_0;
 VAR_44->generic.bde.tus.f.bdeSize = VAR_51;
 VAR_44->generic.bde.addrLow = VAR_46[0].addrLow;
 VAR_44->generic.bde.addrHigh = VAR_46[0].addrHigh;


 VAR_44->gen_req.request_payload_len = VAR_51;




 FUNC_0(VAR_22, &VAR_44->gen_req.wge_ctl, 0);
 FUNC_0(VAR_30, &VAR_44->gen_req.wge_ctl, 1);
 FUNC_0(VAR_25, &VAR_44->gen_req.wge_ctl, 1);
 FUNC_0(VAR_28, &VAR_44->gen_req.wge_ctl, VAR_3);
 FUNC_0(VAR_32, &VAR_44->gen_req.wge_ctl, VAR_4);


 FUNC_0(VAR_20, &VAR_44->gen_req.wqe_com,
        VAR_43->sli4_hba.rpi_ids[VAR_39->nlp_rpi]);
 FUNC_0(VAR_33, &VAR_44->gen_req.wqe_com, VAR_45->sli4_xritag);


 FUNC_0(VAR_31, &VAR_44->gen_req.wqe_com, (VAR_34->phba->fc_ratov-1));
 FUNC_0(VAR_15, &VAR_44->gen_req.wqe_com, VAR_1);
 FUNC_0(VAR_17, &VAR_44->gen_req.wqe_com, VAR_2);
 FUNC_0(VAR_19, &VAR_44->gen_req.wqe_com, VAR_14);


 VAR_44->gen_req.wqe_com.abort_tag = VAR_45->iotag;


 FUNC_0(VAR_29, &VAR_44->gen_req.wqe_com, VAR_45->iotag);


 FUNC_0(VAR_21, &VAR_44->gen_req.wqe_com, 1);
 FUNC_0(VAR_24, &VAR_44->gen_req.wqe_com, VAR_11);
 FUNC_0(VAR_27, &VAR_44->gen_req.wqe_com, 1);
 FUNC_0(VAR_26, &VAR_44->gen_req.wqe_com, VAR_12);
 FUNC_0(VAR_23, &VAR_44->gen_req.wqe_com, 0);


 FUNC_0(VAR_18, &VAR_44->gen_req.wqe_com, VAR_10);
 FUNC_0(VAR_16, &VAR_44->gen_req.wqe_com, VAR_13);



 FUNC_3(VAR_34, VAR_6, VAR_7,
    "6050 Issue GEN REQ WQE to NPORT x%x "
    "Data: x%x x%x wq:x%px lsreq:x%px bmp:x%px "
    "xmit:%d 1st:%d\n",
    VAR_39->nlp_DID, VAR_45->iotag,
    VAR_34->port_state,
   VAR_45, VAR_37, VAR_35, VAR_50, VAR_51);
 VAR_45->wqe_cmpl = VAR_38;
 VAR_45->iocb_cmpl = ((void*)0);
 VAR_45->drvrTimeout = VAR_41 + VAR_8;
 VAR_45->vport = VAR_34;
 VAR_45->retry = VAR_42;

 FUNC_2(VAR_43, "NVME LS  XMIT: xri x%x iotag x%x to x%06x\n",
    VAR_45->sli4_xritag, VAR_45->iotag, VAR_39->nlp_DID);

 VAR_49 = FUNC_4(VAR_43, &VAR_43->sli4_hba.hdwq[0], VAR_45);
 if (VAR_49) {
  FUNC_3(VAR_34, VAR_5, VAR_7,
     "6045 Issue GEN REQ WQE to NPORT x%x "
     "Data: x%x x%x\n",
     VAR_39->nlp_DID, VAR_45->iotag,
     VAR_34->port_state);
  FUNC_6(VAR_43, VAR_45);
  return 1;
 }
 return 0;
}

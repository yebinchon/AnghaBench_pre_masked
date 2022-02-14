
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int abort_tag; } ;
struct TYPE_7__ {void* bdeSize; int bdeFlags; } ;
struct TYPE_8__ {TYPE_1__ f; } ;
struct TYPE_9__ {void* addrHigh; void* addrLow; TYPE_2__ tus; } ;
struct TYPE_11__ {void* xmit_len; TYPE_6__ wqe_com; TYPE_6__ wge_ctl; TYPE_3__ bde; } ;
union lpfc_wqe128 {TYPE_5__ xmit_sequence; } ;
typedef union lpfc_wqe {int dummy; } lpfc_wqe ;
typedef void* uint16_t ;
struct lpfc_nvmet_rcv_ctx {int oxid; struct lpfc_iocbq* wqeq; int state; int sid; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; size_t nlp_rpi; int nlp_DID; } ;
struct lpfc_iocbq {int sli4_xritag; int iotag; int retry; int * context3; struct lpfc_nvmet_rcv_ctx* context2; int iocb_flag; scalar_t__ drvrTimeout; int vport; union lpfc_wqe128 wqe; int * context1; } ;
struct TYPE_10__ {int* rpi_ids; } ;
struct lpfc_hba {int fc_ratov; int pport; TYPE_4__ sli4_hba; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
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
 int FUNC_0 (struct lpfc_nodelist*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ,TYPE_6__*,int) ;
 void* FUNC_2 (int ) ;
 struct lpfc_nodelist* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int * FUNC_5 (struct lpfc_nodelist*) ;
 int FUNC_6 (struct lpfc_hba*,int ,int ,char*,int ,int,int,...) ;
 struct lpfc_iocbq* FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_9 (union lpfc_wqe128*,int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
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
 int VAR_34 ;
 int VAR_35 ;

__attribute__((used)) static struct lpfc_iocbq *
FUNC_12(struct lpfc_hba *VAR_36,
         struct lpfc_nvmet_rcv_ctx *VAR_37,
         dma_addr_t VAR_38, uint16_t VAR_39)
{
 struct lpfc_nodelist *VAR_40;
 struct lpfc_iocbq *VAR_41;
 union lpfc_wqe128 *VAR_42;

 if (!FUNC_4(VAR_36)) {
  FUNC_6(VAR_36, VAR_5, VAR_7,
    "6104 NVMET prep LS wqe: link err: "
    "NPORT x%x oxid:x%x ste %d\n",
    VAR_37->sid, VAR_37->oxid, VAR_37->state);
  return ((void*)0);
 }


 VAR_41 = FUNC_7(VAR_36);
 if (VAR_41 == ((void*)0)) {
  FUNC_6(VAR_36, VAR_5, VAR_7,
    "6105 NVMET prep LS wqe: No WQE: "
    "NPORT x%x oxid x%x ste %d\n",
    VAR_37->sid, VAR_37->oxid, VAR_37->state);
  return ((void*)0);
 }

 VAR_40 = FUNC_3(VAR_36->pport, VAR_37->sid);
 if (!VAR_40 || !FUNC_0(VAR_40) ||
     ((VAR_40->nlp_state != VAR_14) &&
     (VAR_40->nlp_state != VAR_13))) {
  FUNC_6(VAR_36, VAR_5, VAR_7,
    "6106 NVMET prep LS wqe: No ndlp: "
    "NPORT x%x oxid x%x ste %d\n",
    VAR_37->sid, VAR_37->oxid, VAR_37->state);
  goto nvme_wqe_free_wqeq_exit;
 }
 VAR_37->wqeq = VAR_41;


 VAR_41->context1 = FUNC_5(VAR_40);
 if (VAR_41->context1 == ((void*)0))
  goto nvme_wqe_free_wqeq_exit;
 VAR_41->context2 = VAR_37;

 VAR_42 = &VAR_41->wqe;
 FUNC_9(VAR_42, 0, sizeof(union lpfc_wqe));


 VAR_42->xmit_sequence.bde.tus.f.bdeFlags = VAR_0;
 VAR_42->xmit_sequence.bde.tus.f.bdeSize = VAR_39;
 VAR_42->xmit_sequence.bde.addrLow = FUNC_2(FUNC_11(VAR_38));
 VAR_42->xmit_sequence.bde.addrHigh = FUNC_2(FUNC_10(VAR_38));






 FUNC_1(VAR_24, &VAR_42->xmit_sequence.wge_ctl, 0);
 FUNC_1(VAR_29, &VAR_42->xmit_sequence.wge_ctl, 1);
 FUNC_1(VAR_27, &VAR_42->xmit_sequence.wge_ctl, 0);
 FUNC_1(VAR_31, &VAR_42->xmit_sequence.wge_ctl, VAR_3);
 FUNC_1(VAR_34, &VAR_42->xmit_sequence.wge_ctl, VAR_4);


 FUNC_1(VAR_22, &VAR_42->xmit_sequence.wqe_com,
        VAR_36->sli4_hba.rpi_ids[VAR_40->nlp_rpi]);
 FUNC_1(VAR_35, &VAR_42->xmit_sequence.wqe_com, VAR_41->sli4_xritag);


 FUNC_1(VAR_19, &VAR_42->xmit_sequence.wqe_com,
        VAR_2);
 FUNC_1(VAR_21, &VAR_42->xmit_sequence.wqe_com, VAR_16);
 FUNC_1(VAR_17, &VAR_42->xmit_sequence.wqe_com, VAR_1);
 FUNC_1(VAR_30, &VAR_42->xmit_sequence.wqe_com, 0);


 VAR_42->xmit_sequence.wqe_com.abort_tag = VAR_41->iotag;


 FUNC_1(VAR_33, &VAR_42->xmit_sequence.wqe_com, VAR_41->iotag);

 FUNC_1(VAR_32, &VAR_42->xmit_sequence.wqe_com, VAR_37->oxid);


 FUNC_1(VAR_23, &VAR_42->xmit_sequence.wqe_com, 1);
 FUNC_1(VAR_26, &VAR_42->xmit_sequence.wqe_com, VAR_11);
 FUNC_1(VAR_28, &VAR_42->xmit_sequence.wqe_com,
        VAR_12);
 FUNC_1(VAR_25, &VAR_42->xmit_sequence.wqe_com, 0);


 FUNC_1(VAR_20, &VAR_42->xmit_sequence.wqe_com,
        VAR_10);
 FUNC_1(VAR_18, &VAR_42->xmit_sequence.wqe_com,
        VAR_15);


 VAR_42->xmit_sequence.xmit_len = VAR_39;

 VAR_41->retry = 1;
 VAR_41->vport = VAR_36->pport;
 VAR_41->drvrTimeout = (VAR_36->fc_ratov * 3) + VAR_8;
 VAR_41->iocb_flag |= VAR_9;


 FUNC_6(VAR_36, VAR_6, VAR_7,
   "6039 Xmit NVMET LS response to remote "
   "NPORT x%x iotag:x%x oxid:x%x size:x%x\n",
   VAR_40->nlp_DID, VAR_41->iotag, VAR_37->oxid,
   VAR_39);
 return VAR_41;

nvme_wqe_free_wqeq_exit:
 VAR_41->context2 = ((void*)0);
 VAR_41->context3 = ((void*)0);
 FUNC_8(VAR_36, VAR_41);
 return ((void*)0);
}

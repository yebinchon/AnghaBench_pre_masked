
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int abort_tag; } ;
struct TYPE_8__ {TYPE_5__ wqe_com; TYPE_5__ wge_ctl; } ;
union lpfc_wqe128 {TYPE_3__ xmit_sequence; } ;
typedef union lpfc_wqe {int dummy; } lpfc_wqe ;
typedef int uint32_t ;
typedef int uint16_t ;
struct lpfc_nvmet_tgtport {int xmt_abort_rsp_error; } ;
struct lpfc_nvmet_rcv_ctx {struct lpfc_iocbq* wqeq; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; size_t nlp_rpi; } ;
struct TYPE_9__ {int ulpLe; int ulpCommand; } ;
struct lpfc_iocbq {int sli4_xritag; int iotag; TYPE_4__ iocb; scalar_t__ rsvd2; int * context3; struct lpfc_nvmet_rcv_ctx* context2; struct lpfc_nodelist* context1; int vport; union lpfc_wqe128 wqe; } ;
struct TYPE_7__ {int* rpi_ids; } ;
struct lpfc_hba {int pport; TYPE_2__ sli4_hba; TYPE_1__* targetport; } ;
struct TYPE_6__ {scalar_t__ private; } ;


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
 int FUNC_0 (struct lpfc_nodelist*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_5__*,int) ;
 struct lpfc_nodelist* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct lpfc_hba*,int ,int ,char*,int,...) ;
 int FUNC_5 (union lpfc_wqe128*,int ,int) ;
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
 int VAR_34 ;
 int VAR_35 ;

__attribute__((used)) static int
FUNC_6(struct lpfc_hba *VAR_36,
        struct lpfc_nvmet_rcv_ctx *VAR_37,
        uint32_t VAR_38, uint16_t VAR_39)
{
 struct lpfc_nvmet_tgtport *VAR_40;
 struct lpfc_iocbq *VAR_41;
 union lpfc_wqe128 *VAR_42;
 struct lpfc_nodelist *VAR_43;

 FUNC_4(VAR_36, VAR_6, VAR_7,
   "6067 ABTS: sid %x xri x%x/x%x\n",
   VAR_38, VAR_39, VAR_37->wqeq->sli4_xritag);

 VAR_40 = (struct lpfc_nvmet_tgtport *)VAR_36->targetport->private;

 VAR_43 = FUNC_3(VAR_36->pport, VAR_38);
 if (!VAR_43 || !FUNC_0(VAR_43) ||
     ((VAR_43->nlp_state != VAR_13) &&
     (VAR_43->nlp_state != VAR_11))) {
  FUNC_1(&VAR_40->xmt_abort_rsp_error);
  FUNC_4(VAR_36, VAR_5, VAR_7,
    "6134 Drop ABTS - wrong NDLP state x%x.\n",
    (VAR_43) ? VAR_43->nlp_state : VAR_12);


  return 0;
 }

 VAR_41 = VAR_37->wqeq;
 VAR_42 = &VAR_41->wqe;





 FUNC_5(VAR_42, 0, sizeof(union lpfc_wqe));


 FUNC_2(VAR_23, &VAR_42->xmit_sequence.wge_ctl, 0);
 FUNC_2(VAR_28, &VAR_42->xmit_sequence.wge_ctl, 1);
 FUNC_2(VAR_26, &VAR_42->xmit_sequence.wge_ctl, 0);
 FUNC_2(VAR_31, &VAR_42->xmit_sequence.wge_ctl, VAR_3);
 FUNC_2(VAR_34, &VAR_42->xmit_sequence.wge_ctl, VAR_4);


 FUNC_2(VAR_21, &VAR_42->xmit_sequence.wqe_com,
        VAR_36->sli4_hba.rpi_ids[VAR_43->nlp_rpi]);
 FUNC_2(VAR_35, &VAR_42->xmit_sequence.wqe_com,
        VAR_41->sli4_xritag);


 FUNC_2(VAR_18, &VAR_42->xmit_sequence.wqe_com,
        VAR_2);
 FUNC_2(VAR_20, &VAR_42->xmit_sequence.wqe_com, VAR_15);
 FUNC_2(VAR_16, &VAR_42->xmit_sequence.wqe_com, VAR_0);
 FUNC_2(VAR_29, &VAR_42->xmit_sequence.wqe_com, 0);


 VAR_42->xmit_sequence.wqe_com.abort_tag = VAR_41->iotag;


 FUNC_2(VAR_33, &VAR_42->xmit_sequence.wqe_com, VAR_41->iotag);

 FUNC_2(VAR_32, &VAR_42->xmit_sequence.wqe_com, VAR_39);


 FUNC_2(VAR_22, &VAR_42->xmit_sequence.wqe_com, 1);
 FUNC_2(VAR_25, &VAR_42->xmit_sequence.wqe_com, VAR_9);
 FUNC_2(VAR_27, &VAR_42->xmit_sequence.wqe_com,
        VAR_10);
 FUNC_2(VAR_24, &VAR_42->xmit_sequence.wqe_com, 0);
 FUNC_2(VAR_30, &VAR_42->xmit_sequence.wqe_com, 0);


 FUNC_2(VAR_19, &VAR_42->xmit_sequence.wqe_com,
        VAR_8);
 FUNC_2(VAR_17, &VAR_42->xmit_sequence.wqe_com,
        VAR_14);

 VAR_41->vport = VAR_36->pport;
 VAR_41->context1 = VAR_43;
 VAR_41->context2 = VAR_37;
 VAR_41->context3 = ((void*)0);
 VAR_41->rsvd2 = 0;

 VAR_41->iocb.ulpCommand = VAR_1;
 VAR_41->iocb.ulpLe = 1;

 FUNC_4(VAR_36, VAR_6, VAR_7,
   "6069 Issue ABTS to xri x%x reqtag x%x\n",
   VAR_39, VAR_41->iotag);
 return 1;
}

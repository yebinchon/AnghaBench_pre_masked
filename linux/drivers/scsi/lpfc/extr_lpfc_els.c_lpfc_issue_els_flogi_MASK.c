
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


typedef int uint8_t ;
typedef void* uint32_t ;
typedef int uint16_t ;
struct TYPE_18__ {scalar_t__ r_a_tov; } ;
struct TYPE_24__ {scalar_t__ fcphLow; scalar_t__ fcphHigh; int request_multiple_Nport; scalar_t__ virtual_fabric_support; TYPE_1__ w2; scalar_t__ e_d_tov; } ;
struct TYPE_23__ {int seqDelivery; scalar_t__ classValid; } ;
struct TYPE_22__ {int seqDelivery; scalar_t__ classValid; } ;
struct TYPE_19__ {scalar_t__ classValid; } ;
struct serv_parm {TYPE_7__ cmn; TYPE_6__ cls3; TYPE_5__ cls2; TYPE_2__ cls1; } ;
struct lpfc_vport {void* fc_myDID; int fc_sparam; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_DID; } ;
struct TYPE_15__ {int ox_id; } ;
struct TYPE_16__ {TYPE_11__ rcvsli3; } ;
struct TYPE_25__ {int fl; scalar_t__ myID; } ;
struct TYPE_26__ {TYPE_8__ elsreq64; } ;
struct TYPE_17__ {int ulpCt_h; int ulpCt_l; TYPE_12__ unsli3; int ulpContext; TYPE_9__ un; } ;
struct lpfc_iocbq {TYPE_13__ iocb; int iocb_cmpl; scalar_t__ context2; } ;
struct TYPE_14__ {int elsXmitFLOGI; } ;
struct TYPE_21__ {int fcfi; } ;
struct TYPE_20__ {int sli_intf; } ;
struct lpfc_hba {scalar_t__ sli_rev; int sli3_options; scalar_t__ fc_topology; int defer_flogi_acc_flag; int hba_flag; int defer_flogi_acc_ox_id; int defer_flogi_acc_rx_id; TYPE_10__ fc_stat; void* fc_ratov; TYPE_4__ fcf; TYPE_3__ sli4_hba; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
typedef TYPE_13__ IOCB_t ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int VAR_14 ;
 int FUNC_1 (struct lpfc_vport*,int ,char*,int,int ,int ) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_3 (struct lpfc_vport*,void*,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 struct lpfc_iocbq* FUNC_5 (struct lpfc_vport*,int,int,int ,struct lpfc_nodelist*,int ,void*) ;
 int FUNC_6 (struct lpfc_vport*,int ,int ,char*,int ,int ,int ) ;
 int FUNC_7 (struct lpfc_vport*) ;
 int VAR_15 ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (struct lpfc_iocbq*,int ,int) ;

__attribute__((used)) static int
FUNC_10(struct lpfc_vport *VAR_16, struct lpfc_nodelist *VAR_17,
       uint8_t VAR_18)
{
 struct lpfc_hba *VAR_19 = VAR_16->phba;
 struct serv_parm *VAR_20;
 IOCB_t *VAR_21;
 struct lpfc_iocbq *VAR_22;
 struct lpfc_iocbq VAR_23;
 uint8_t *VAR_24;
 uint16_t VAR_25;
 uint32_t VAR_26, VAR_27;
 int VAR_28;

 VAR_25 = (sizeof(uint32_t) + sizeof(struct serv_parm));
 VAR_22 = FUNC_5(VAR_16, 1, VAR_25, VAR_18, VAR_17,
         VAR_17->nlp_DID, VAR_0);

 if (!VAR_22)
  return 1;

 VAR_21 = &VAR_22->iocb;
 VAR_24 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_22->context2)->virt);


 *((uint32_t *) (VAR_24)) = VAR_0;
 VAR_24 += sizeof(uint32_t);
 FUNC_8(VAR_24, &VAR_16->fc_sparam, sizeof(struct serv_parm));
 VAR_20 = (struct serv_parm *) VAR_24;


 VAR_20->cmn.e_d_tov = 0;
 VAR_20->cmn.w2.r_a_tov = 0;
 VAR_20->cmn.virtual_fabric_support = 0;
 VAR_20->cls1.classValid = 0;
 if (VAR_20->cmn.fcphLow < VAR_1)
  VAR_20->cmn.fcphLow = VAR_1;
 if (VAR_20->cmn.fcphHigh < VAR_1)
  VAR_20->cmn.fcphHigh = VAR_1;

 if (VAR_19->sli_rev == VAR_11) {
  if (FUNC_0(VAR_15, &VAR_19->sli4_hba.sli_intf) ==
      VAR_10) {
   VAR_22->iocb.ulpCt_h = ((VAR_13 >> 1) & 1);
   VAR_22->iocb.ulpCt_l = (VAR_13 & 1);


   VAR_22->iocb.ulpContext = VAR_19->fcf.fcfi;
  }

  VAR_20->cls2.classValid = 0;
  VAR_20->cls2.seqDelivery = 0;
 } else {

  VAR_20->cls2.seqDelivery = (VAR_20->cls2.classValid) ? 1 : 0;
  VAR_20->cls3.seqDelivery = (VAR_20->cls3.classValid) ? 1 : 0;
  if (VAR_19->sli3_options & VAR_9) {
   VAR_20->cmn.request_multiple_Nport = 1;

   VAR_21->ulpCt_h = 1;
   VAR_21->ulpCt_l = 0;
  } else
   VAR_20->cmn.request_multiple_Nport = 0;
 }

 if (VAR_19->fc_topology != VAR_12) {
  VAR_21->un.elsreq64.myID = 0;
  VAR_21->un.elsreq64.fl = 1;
 }

 VAR_26 = VAR_19->fc_ratov;
 VAR_19->fc_ratov = VAR_7;
 FUNC_7(VAR_16);
 VAR_19->fc_ratov = VAR_26;

 VAR_19->fc_stat.elsXmitFLOGI++;
 VAR_22->iocb_cmpl = VAR_14;

 FUNC_1(VAR_16, VAR_8,
  "Issue FLOGI:     opt:x%x",
  VAR_19->sli3_options, 0, 0);

 VAR_28 = FUNC_4(VAR_19, VAR_22);

 VAR_19->hba_flag |= VAR_3;


 if (VAR_19->defer_flogi_acc_flag) {
  VAR_27 = VAR_16->fc_myDID;
  VAR_16->fc_myDID = VAR_2;

  FUNC_9(&VAR_23, 0, sizeof(struct lpfc_iocbq));

  VAR_23.iocb.ulpContext = VAR_19->defer_flogi_acc_rx_id;
  VAR_23.iocb.unsli3.rcvsli3.ox_id =
      VAR_19->defer_flogi_acc_ox_id;

  FUNC_6(VAR_16, VAR_5, VAR_6,
     "3354 Xmit deferred FLOGI ACC: rx_id: x%x,"
     " ox_id: x%x, hba_flag x%x\n",
     VAR_19->defer_flogi_acc_rx_id,
     VAR_19->defer_flogi_acc_ox_id, VAR_19->hba_flag);


  FUNC_3(VAR_16, VAR_0, &VAR_23,
     VAR_17, ((void*)0));

  VAR_19->defer_flogi_acc_flag = 0;

  VAR_16->fc_myDID = VAR_27;
 }

 if (VAR_28 == VAR_4) {
  FUNC_2(VAR_19, VAR_22);
  return 1;
 }
 return 0;
}

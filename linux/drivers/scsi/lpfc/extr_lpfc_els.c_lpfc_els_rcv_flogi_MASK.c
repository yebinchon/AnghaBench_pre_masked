
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
typedef struct TYPE_15__ TYPE_10__ ;


typedef void* uint32_t ;
struct serv_parm {int portName; } ;
struct lpfc_vport {int fc_flag; void* fc_myDID; void* port_state; int rcv_flogi_cnt; int fc_portname; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_name {int dummy; } ;
struct TYPE_22__ {int ox_id; } ;
struct TYPE_23__ {TYPE_7__ rcvsli3; } ;
struct TYPE_16__ {void* remoteID; } ;
struct TYPE_17__ {TYPE_1__ elsreq64; } ;
struct TYPE_15__ {TYPE_8__ unsli3; int ulpContext; TYPE_2__ un; } ;
struct lpfc_iocbq {TYPE_10__ iocb; scalar_t__ context2; } ;
struct lpfc_hba {scalar_t__ fc_topology; scalar_t__ sli_rev; int hba_flag; int defer_flogi_acc_flag; int defer_flogi_acc_ox_id; int defer_flogi_acc_rx_id; int fc_fabparam; int mbox_mem_pool; int cfg_link_speed; int cfg_topology; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_18__ {scalar_t__ lipsr_AL_PA; } ;
struct TYPE_19__ {TYPE_3__ varInitLnk; } ;
struct TYPE_20__ {TYPE_4__ un; } ;
struct TYPE_21__ {TYPE_5__ mb; } ;
struct TYPE_24__ {struct lpfc_vport* vport; int mbox_cmpl; TYPE_6__ u; } ;
typedef TYPE_9__ LPFC_MBOXQ_t ;
typedef TYPE_10__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*,struct serv_parm*,int ,int) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 int FUNC_3 (struct lpfc_hba*,TYPE_9__*,int ,int ) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_vport*,int ,int ,char*,void*,void*,...) ;
 int FUNC_6 (struct lpfc_vport*) ;
 int FUNC_7 (struct lpfc_hba*) ;
 struct Scsi_Host* FUNC_8 (struct lpfc_vport*) ;
 int VAR_18 ;
 int FUNC_9 (struct lpfc_hba*,TYPE_9__*,int ) ;
 int FUNC_10 (int *,int *,int) ;
 int FUNC_11 (int *,struct serv_parm*,int) ;
 TYPE_9__* FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_9__*,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int
FUNC_16(struct lpfc_vport *VAR_19, struct lpfc_iocbq *VAR_20,
     struct lpfc_nodelist *VAR_21)
{
 struct Scsi_Host *VAR_22 = FUNC_8(VAR_19);
 struct lpfc_hba *VAR_23 = VAR_19->phba;
 struct lpfc_dmabuf *VAR_24 = (struct lpfc_dmabuf *) VAR_20->context2;
 uint32_t *VAR_25 = (uint32_t *) VAR_24->virt;
 IOCB_t *VAR_26 = &VAR_20->iocb;
 struct serv_parm *VAR_27;
 LPFC_MBOXQ_t *VAR_28;
 uint32_t VAR_29, VAR_30;
 int VAR_31;
 uint32_t VAR_32 = 0;
 uint32_t VAR_33 = 0;

 VAR_29 = *VAR_25++;
 VAR_27 = (struct serv_parm *) VAR_25;



 FUNC_6(VAR_19);

 if (VAR_23->fc_topology == VAR_13) {

  VAR_30 = VAR_26->un.elsreq64.remoteID;



  FUNC_5(VAR_19, VAR_9, VAR_11,
     "0113 An FLOGI ELS command x%x was "
     "received from DID x%x in Loop Mode\n",
     VAR_29, VAR_30);
  return 1;
 }

 (void) FUNC_0(VAR_19, VAR_21, VAR_27, VAR_0, 1);






 VAR_31 = FUNC_10(&VAR_19->fc_portname, &VAR_27->portName,
      sizeof(struct lpfc_name));

 if (!VAR_31) {
  if (VAR_23->sli_rev < VAR_12) {
   VAR_28 = FUNC_12(VAR_23->mbox_mem_pool,
          VAR_7);
   if (!VAR_28)
    return 1;
   FUNC_4(VAR_23);
   FUNC_3(VAR_23, VAR_28,
           VAR_23->cfg_topology,
           VAR_23->cfg_link_speed);
   VAR_28->u.mb.un.varInitLnk.lipsr_AL_PA = 0;
   VAR_28->mbox_cmpl = VAR_18;
   VAR_28->vport = VAR_19;
   VAR_31 = FUNC_9(VAR_23, VAR_28,
       VAR_15);
   FUNC_7(VAR_23);
   if (VAR_31 == VAR_14)
    FUNC_13(VAR_28, VAR_23->mbox_mem_pool);
   return 1;
  }




  FUNC_1(VAR_23);
  return 0;

 } else if (VAR_31 > 0) {
  FUNC_14(VAR_22->host_lock);
  VAR_19->fc_flag |= VAR_4;
  FUNC_15(VAR_22->host_lock);






  VAR_19->fc_myDID = VAR_16;
 } else {
  VAR_19->fc_myDID = VAR_17;
 }





 FUNC_14(VAR_22->host_lock);
 VAR_32 = VAR_19->fc_flag;
 VAR_33 = VAR_19->port_state;
 VAR_19->fc_flag |= VAR_3;
 VAR_19->fc_flag &= ~(VAR_2 | VAR_5);




 VAR_19->rcv_flogi_cnt++;
 FUNC_15(VAR_22->host_lock);
 FUNC_5(VAR_19, VAR_10, VAR_11,
    "3311 Rcv Flogi PS x%x new PS x%x "
    "fc_flag x%x new fc_flag x%x\n",
    VAR_33, VAR_19->port_state,
    VAR_32, VAR_19->fc_flag);






 VAR_30 = VAR_19->fc_myDID;
 VAR_19->fc_myDID = VAR_6;

 FUNC_11(&VAR_23->fc_fabparam, VAR_27, sizeof(struct serv_parm));


 if (!(VAR_23->hba_flag & VAR_8)) {
  VAR_23->defer_flogi_acc_rx_id = VAR_20->iocb.ulpContext;
  VAR_23->defer_flogi_acc_ox_id =
     VAR_20->iocb.unsli3.rcvsli3.ox_id;

  VAR_19->fc_myDID = VAR_30;

  FUNC_5(VAR_19, VAR_10, VAR_11,
     "3344 Deferring FLOGI ACC: rx_id: x%x,"
     " ox_id: x%x, hba_flag x%x\n",
     VAR_23->defer_flogi_acc_rx_id,
     VAR_23->defer_flogi_acc_ox_id, VAR_23->hba_flag);

  VAR_23->defer_flogi_acc_flag = 1;

  return 0;
 }


 FUNC_2(VAR_19, VAR_1, VAR_20, VAR_21, ((void*)0));


 VAR_19->fc_myDID = VAR_30;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct lpfc_vport {int fc_flag; scalar_t__ cfg_enable_fc4_type; scalar_t__ rcv_flogi_cnt; scalar_t__ fc_myDID; } ;
struct TYPE_21__ {int logical_speed; } ;
struct TYPE_22__ {TYPE_7__ link_state; scalar_t__ conf_trunk; } ;
struct TYPE_19__ {scalar_t__ state; } ;
struct TYPE_18__ {scalar_t__ state; } ;
struct TYPE_17__ {scalar_t__ state; } ;
struct TYPE_16__ {scalar_t__ state; } ;
struct TYPE_20__ {TYPE_5__ link3; TYPE_4__ link2; TYPE_3__ link1; TYPE_2__ link0; } ;
struct TYPE_15__ {int fcf_flag; } ;
struct lpfc_hba {scalar_t__ link_state; int defer_flogi_acc_flag; int max_vports; scalar_t__ sli_rev; struct lpfc_vport* pport; int mbox_mem_pool; scalar_t__ nvmet_support; TYPE_8__ sli4_hba; TYPE_6__ trunk_link; int hbalock; TYPE_1__ fcf; } ;
struct Scsi_Host {int * host_lock; } ;
struct TYPE_23__ {struct lpfc_vport* vport; void* mbox_cmpl; } ;
typedef TYPE_9__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct lpfc_hba*,TYPE_9__*) ;
 struct lpfc_vport** FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_vport**) ;
 int FUNC_3 (struct lpfc_vport*) ;
 int FUNC_4 (struct lpfc_vport*) ;
 int FUNC_5 (struct lpfc_hba*) ;
 int FUNC_6 (struct lpfc_hba*) ;
 struct Scsi_Host* FUNC_7 (struct lpfc_vport*) ;
 void* VAR_14 ;
 scalar_t__ FUNC_8 (struct lpfc_hba*,TYPE_9__*,int ) ;
 int FUNC_9 (struct lpfc_hba*,int,int ,TYPE_9__*) ;
 TYPE_9__* FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_9__*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int
FUNC_14(struct lpfc_hba *VAR_15)
{
 struct lpfc_vport *VAR_16 = VAR_15->pport;
 struct Scsi_Host *VAR_17 = FUNC_7(VAR_16);
 struct lpfc_vport **VAR_18;
 LPFC_MBOXQ_t *VAR_19;
 int VAR_20;

 if (VAR_15->link_state == VAR_8)
  return 0;


 FUNC_6(VAR_15);

 VAR_15->defer_flogi_acc_flag = 0;

 FUNC_12(&VAR_15->hbalock);
 VAR_15->fcf.fcf_flag &= ~(VAR_0 | VAR_1);
 FUNC_13(&VAR_15->hbalock);
 if (VAR_15->link_state > VAR_8) {
  VAR_15->link_state = VAR_8;
  if (VAR_15->sli4_hba.conf_trunk) {
   VAR_15->trunk_link.link0.state = 0;
   VAR_15->trunk_link.link1.state = 0;
   VAR_15->trunk_link.link2.state = 0;
   VAR_15->trunk_link.link3.state = 0;
   VAR_15->sli4_hba.link_state.logical_speed =
      VAR_9;
  }
  FUNC_12(VAR_17->host_lock);
  VAR_15->pport->fc_flag &= ~VAR_2;
  FUNC_13(VAR_17->host_lock);
 }
 VAR_18 = FUNC_1(VAR_15);
 if (VAR_18 != ((void*)0)) {
  for (VAR_20 = 0; VAR_20 <= VAR_15->max_vports && VAR_18[VAR_20] != ((void*)0); VAR_20++) {

   FUNC_3(VAR_18[VAR_20]);

   VAR_18[VAR_20]->fc_myDID = 0;

   if ((VAR_16->cfg_enable_fc4_type == VAR_6) ||
       (VAR_16->cfg_enable_fc4_type == VAR_7)) {
    if (VAR_15->nvmet_support)
     FUNC_5(VAR_15);
    else
     FUNC_4(VAR_18[VAR_20]);
   }
  }
 }
 FUNC_2(VAR_15, VAR_18);


 if (VAR_15->sli_rev > VAR_10)
  goto skip_unreg_did;

 VAR_19 = FUNC_10(VAR_15->mbox_mem_pool, VAR_5);
 if (VAR_19) {
  FUNC_9(VAR_15, 0xffff, VAR_11, VAR_19);
  VAR_19->vport = VAR_16;
  VAR_19->mbox_cmpl = VAR_14;
  if (FUNC_8(VAR_15, VAR_19, VAR_13)
      == VAR_12) {
   FUNC_11(VAR_19, VAR_15->mbox_mem_pool);
  }
 }

 skip_unreg_did:

 if (VAR_15->pport->fc_flag & VAR_3) {
  VAR_19 = FUNC_10(VAR_15->mbox_mem_pool, VAR_5);
  if (VAR_19) {
   FUNC_0(VAR_15, VAR_19);
   VAR_19->mbox_cmpl = VAR_14;
   VAR_19->vport = VAR_16;
   if (FUNC_8(VAR_15, VAR_19, VAR_13)
       == VAR_12) {
    FUNC_11(VAR_19, VAR_15->mbox_mem_pool);
   }
  }
  FUNC_12(VAR_17->host_lock);
  VAR_15->pport->fc_flag &= ~(VAR_3 | VAR_4);
  VAR_15->pport->rcv_flogi_cnt = 0;
  FUNC_13(VAR_17->host_lock);
 }
 return 0;
}

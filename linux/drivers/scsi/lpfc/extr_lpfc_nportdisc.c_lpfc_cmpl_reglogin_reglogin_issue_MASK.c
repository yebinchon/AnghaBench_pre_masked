
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


typedef int uint32_t ;
struct lpfc_vport {int fc_flag; scalar_t__ cfg_enable_fc4_type; int fc_myDID; int port_state; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_type; int nlp_state; void* nlp_prev_state; int nlp_fc4_type; int nlp_DID; int nlp_flag; int nlp_rpi; int nlp_last_elscmd; int nlp_delayfunc; } ;
struct lpfc_hba {scalar_t__ sli_rev; scalar_t__ nvmet_support; scalar_t__ fc_topology; TYPE_4__* targetport; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_8__ {int rpi; int vpi; } ;
struct TYPE_9__ {int * varWords; TYPE_2__ varRegLogin; } ;
struct TYPE_11__ {scalar_t__ mbxStatus; TYPE_3__ un; } ;
struct TYPE_7__ {TYPE_5__ mb; } ;
struct TYPE_12__ {TYPE_1__ u; } ;
struct TYPE_10__ {int port_id; } ;
typedef TYPE_5__ MAILBOX_t ;
typedef TYPE_6__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 scalar_t__ FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ,int ) ;
 int FUNC_4 (struct lpfc_vport*) ;
 int FUNC_5 (struct lpfc_vport*,int ,int ,char*,int ,int,int ,...) ;
 struct Scsi_Host* FUNC_6 (struct lpfc_vport*) ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static uint32_t
FUNC_11(struct lpfc_vport *VAR_22,
      struct lpfc_nodelist *VAR_23,
      void *VAR_24,
      uint32_t VAR_25)
{
 struct Scsi_Host *VAR_26 = FUNC_6(VAR_22);
 struct lpfc_hba *VAR_27 = VAR_22->phba;
 LPFC_MBOXQ_t *VAR_28 = (LPFC_MBOXQ_t *) VAR_24;
 MAILBOX_t *VAR_29 = &VAR_28->u.mb;
 uint32_t VAR_30 = VAR_29->un.varWords[1];

 if (VAR_29->mbxStatus) {

  FUNC_5(VAR_22, VAR_2, VAR_4,
    "0246 RegLogin failed Data: x%x x%x x%x x%x "
     "x%x\n",
     VAR_30, VAR_29->mbxStatus, VAR_22->port_state,
     VAR_29->un.varRegLogin.vpi,
     VAR_29->un.varRegLogin.rpi);




  if (VAR_29->mbxStatus == VAR_10) {
   VAR_23->nlp_prev_state = VAR_18;
   FUNC_2(VAR_22, VAR_23, VAR_16);
   return VAR_23->nlp_state;
  }


  FUNC_7(&VAR_23->nlp_delayfunc,
     VAR_21 + FUNC_8(1000 * 1));
  FUNC_9(VAR_26->host_lock);
  VAR_23->nlp_flag |= VAR_11;
  FUNC_10(VAR_26->host_lock);
  VAR_23->nlp_last_elscmd = VAR_0;

  FUNC_0(VAR_22, VAR_23, 0);
  VAR_23->nlp_prev_state = VAR_18;
  FUNC_2(VAR_22, VAR_23, VAR_16);
  return VAR_23->nlp_state;
 }


 if (VAR_27->sli_rev < VAR_8)
  VAR_23->nlp_rpi = VAR_29->un.varWords[0];

 VAR_23->nlp_flag |= VAR_15;


 FUNC_5(VAR_22, VAR_3, VAR_4,
    "3066 RegLogin Complete on x%x x%x x%x\n",
    VAR_30, VAR_23->nlp_type, VAR_23->nlp_fc4_type);
 if (!(VAR_23->nlp_type & VAR_12) &&
     (VAR_27->nvmet_support == 0)) {





  if (VAR_22->fc_flag & VAR_1) {




   VAR_23->nlp_fc4_type |= VAR_13;
   if ((VAR_22->cfg_enable_fc4_type == VAR_5) ||
       (VAR_22->cfg_enable_fc4_type == VAR_7)) {
    VAR_23->nlp_fc4_type |= VAR_14;

    FUNC_4(VAR_22);
   }

  } else if (VAR_27->fc_topology == VAR_9) {
   VAR_23->nlp_fc4_type |= VAR_13;

  } else if (VAR_23->nlp_fc4_type == 0) {




   if (VAR_22->cfg_enable_fc4_type != VAR_6) {
    FUNC_3(VAR_22, VAR_20, 0,
         VAR_23->nlp_DID);
    return VAR_23->nlp_state;
   }
   VAR_23->nlp_fc4_type = VAR_13;
  }

  VAR_23->nlp_prev_state = VAR_18;
  FUNC_2(VAR_22, VAR_23, VAR_17);
  if (FUNC_1(VAR_22, VAR_23, 0)) {
   FUNC_0(VAR_22, VAR_23, 0);
   VAR_23->nlp_prev_state = VAR_18;
   FUNC_2(VAR_22, VAR_23, VAR_16);
  }
 } else {
  if ((VAR_22->fc_flag & VAR_1) && VAR_27->nvmet_support)
   VAR_27->targetport->port_id = VAR_22->fc_myDID;




  if (VAR_23->nlp_type & VAR_12) {
   VAR_23->nlp_prev_state = VAR_18;
   FUNC_2(VAR_22, VAR_23, VAR_19);
  }
 }
 return VAR_23->nlp_state;
}

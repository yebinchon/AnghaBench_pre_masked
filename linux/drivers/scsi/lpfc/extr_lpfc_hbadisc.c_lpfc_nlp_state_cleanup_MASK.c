
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_vport {scalar_t__ stat_data_enabled; TYPE_1__* phba; } ;
struct lpfc_scsicmd_bkt {int dummy; } ;
struct lpfc_nodelist {int nlp_type; int nlp_fc4_type; scalar_t__ nlp_DID; int nlp_flag; TYPE_2__* rport; int lat_data; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_4__ {int scsi_target_id; } ;
struct TYPE_3__ {scalar_t__ nvmet_support; scalar_t__ sli_rev; int nport_event_cnt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct lpfc_nodelist*) ;
 int FUNC_2 (struct lpfc_nodelist*) ;
 int FUNC_3 (struct lpfc_vport*,struct lpfc_nodelist*,int) ;
 int FUNC_4 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int FUNC_5 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int FUNC_6 (struct lpfc_vport*,int ,int ,char*,scalar_t__) ;
 int FUNC_7 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 struct Scsi_Host* FUNC_8 (struct lpfc_vport*) ;
 int FUNC_9 (struct lpfc_nodelist*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(struct lpfc_vport *VAR_19, struct lpfc_nodelist *VAR_20,
         int VAR_21, int VAR_22)
{
 struct Scsi_Host *VAR_23 = FUNC_8(VAR_19);

 if (VAR_22 == VAR_16) {
  VAR_20->nlp_flag &= ~VAR_11;
  VAR_20->nlp_type |= VAR_10;
 }
 if (VAR_22 == VAR_14)
  VAR_20->nlp_flag &= ~VAR_11;
 if (VAR_22 == VAR_15)
  VAR_20->nlp_flag &= ~VAR_13;


 if ((VAR_21 == VAR_14 ||
      VAR_21 == VAR_16)) {
  if (VAR_20->rport) {
   VAR_19->phba->nport_event_cnt++;
   FUNC_9(VAR_20);
  }

  if (VAR_20->nlp_fc4_type & VAR_8) {
   VAR_19->phba->nport_event_cnt++;
   if (VAR_19->phba->nvmet_support == 0) {

    if (VAR_20->nlp_type & VAR_12)
     FUNC_5(VAR_19, VAR_20);
   } else {

    FUNC_2(VAR_20);
   }
  }
 }



 if (VAR_22 == VAR_14 ||
     VAR_22 == VAR_16) {
  if (VAR_20->nlp_fc4_type ||
      VAR_20->nlp_DID == VAR_1 ||
      VAR_20->nlp_DID == VAR_18 ||
      VAR_20->nlp_DID == VAR_0) {
   VAR_19->phba->nport_event_cnt++;




   FUNC_7(VAR_19, VAR_20);
  }

  if (VAR_19->phba->sli_rev >= VAR_7 &&
      VAR_20->nlp_fc4_type & VAR_8) {
   if (VAR_19->phba->nvmet_support == 0) {




    if (VAR_20->nlp_type & VAR_12) {
     VAR_19->phba->nport_event_cnt++;
     FUNC_4(VAR_19, VAR_20);
    }
   } else {



    FUNC_1(VAR_20);
   }
  }
 }

 if ((VAR_22 == VAR_14) &&
  (VAR_19->stat_data_enabled)) {




  VAR_20->lat_data = FUNC_0(VAR_5,
      sizeof(struct lpfc_scsicmd_bkt),
      VAR_2);

  if (!VAR_20->lat_data)
   FUNC_6(VAR_19, VAR_3, VAR_4,
    "0286 lpfc_nlp_state_cleanup failed to "
    "allocate statistical data buffer DID "
    "0x%x\n", VAR_20->nlp_DID);
 }






 if ((VAR_22 == VAR_14) &&
     (VAR_20->nlp_type & VAR_9) &&
     (!VAR_20->rport ||
      VAR_20->rport->scsi_target_id == -1 ||
      VAR_20->rport->scsi_target_id >= VAR_6)) {
  FUNC_10(VAR_23->host_lock);
  VAR_20->nlp_flag |= VAR_17;
  FUNC_11(VAR_23->host_lock);
  FUNC_3(VAR_19, VAR_20, VAR_16);
 }
}

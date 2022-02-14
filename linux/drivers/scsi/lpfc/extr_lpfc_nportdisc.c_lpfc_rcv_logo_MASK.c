
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct lpfc_vport {scalar_t__ port_state; int fc_flag; int load_flag; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {scalar_t__ nlp_DID; int nlp_type; scalar_t__ nlp_state; scalar_t__ nlp_prev_state; int nlp_flag; int nlp_last_elscmd; int nlp_delayfunc; } ;
struct lpfc_iocbq {int dummy; } ;
struct lpfc_hba {int max_vports; TYPE_1__* pport; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_2__ {int fc_flag; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 struct lpfc_vport** FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_vport**) ;
 int FUNC_2 (struct lpfc_vport*,scalar_t__,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 int FUNC_3 (struct lpfc_vport*) ;
 int FUNC_4 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_5 (struct lpfc_hba*) ;
 struct Scsi_Host* FUNC_6 (struct lpfc_vport*) ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(struct lpfc_vport *VAR_18, struct lpfc_nodelist *VAR_19,
       struct lpfc_iocbq *VAR_20, uint32_t VAR_21)
{
 struct Scsi_Host *VAR_22 = FUNC_6(VAR_18);
 struct lpfc_hba *VAR_23 = VAR_18->phba;
 struct lpfc_vport **VAR_24;
 int VAR_25, VAR_26 = 0 ;





 FUNC_9(VAR_22->host_lock);
 VAR_19->nlp_flag |= VAR_13;
 FUNC_10(VAR_22->host_lock);
 if (VAR_21 == VAR_3)
  FUNC_2(VAR_18, VAR_3, VAR_20, VAR_19, ((void*)0));
 else
  FUNC_2(VAR_18, VAR_0, VAR_20, VAR_19, ((void*)0));
 if (VAR_19->nlp_DID == VAR_7) {
  if (VAR_18->port_state <= VAR_8)
   goto out;
  FUNC_3(VAR_18);
  FUNC_9(VAR_22->host_lock);
  VAR_18->fc_flag |= VAR_6;
  FUNC_10(VAR_22->host_lock);
  VAR_24 = FUNC_0(VAR_23);
  if (VAR_24) {
   for (VAR_25 = 0; VAR_25 <= VAR_23->max_vports && VAR_24[VAR_25] != ((void*)0);
     VAR_25++) {
    if ((!(VAR_24[VAR_25]->fc_flag &
     VAR_6)) &&
     (VAR_24[VAR_25]->port_state > VAR_8)) {
     VAR_26 = 1;
     break;
    }
   }
   FUNC_1(VAR_23, VAR_24);
  }






  if (!(VAR_18->load_flag & VAR_5) &&
     VAR_26) {




   FUNC_7(&VAR_19->nlp_delayfunc,
      VAR_17 + FUNC_8(1000));
   FUNC_9(VAR_22->host_lock);
   VAR_19->nlp_flag |= VAR_9;
   FUNC_10(VAR_22->host_lock);
   VAR_19->nlp_last_elscmd = VAR_1;
   VAR_18->port_state = VAR_8;
  } else {
   FUNC_9(VAR_22->host_lock);
   VAR_23->pport->fc_flag &= ~VAR_4;
   FUNC_10(VAR_22->host_lock);
   FUNC_5(VAR_23);
  }
 } else if ((!(VAR_19->nlp_type & VAR_10) &&
  ((VAR_19->nlp_type & VAR_12) ||
  !(VAR_19->nlp_type & VAR_11))) ||
  (VAR_19->nlp_state == VAR_15)) {

  FUNC_7(&VAR_19->nlp_delayfunc,
     VAR_17 + FUNC_8(1000 * 1));
  FUNC_9(VAR_22->host_lock);
  VAR_19->nlp_flag |= VAR_9;
  FUNC_10(VAR_22->host_lock);

  VAR_19->nlp_last_elscmd = VAR_2;
 }
out:
 VAR_19->nlp_prev_state = VAR_19->nlp_state;
 FUNC_4(VAR_18, VAR_19, VAR_16);

 FUNC_9(VAR_22->host_lock);
 VAR_19->nlp_flag &= ~VAR_14;
 FUNC_10(VAR_22->host_lock);





 return 0;
}

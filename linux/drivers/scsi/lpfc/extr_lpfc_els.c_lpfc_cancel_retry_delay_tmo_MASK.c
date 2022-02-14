
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_work_evt {scalar_t__ evt_arg1; int evt_listp; } ;
struct lpfc_vport {scalar_t__ num_disc_nodes; scalar_t__ port_state; int fc_flag; } ;
struct lpfc_nodelist {int nlp_flag; struct lpfc_work_evt els_retry_evt; scalar_t__ nlp_last_elscmd; int nlp_delayfunc; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct lpfc_vport*) ;
 int FUNC_4 (struct lpfc_vport*) ;
 int FUNC_5 (struct lpfc_vport*) ;
 int FUNC_6 (struct lpfc_vport*) ;
 int FUNC_7 (struct lpfc_nodelist*) ;
 struct Scsi_Host* FUNC_8 (struct lpfc_vport*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

void
FUNC_11(struct lpfc_vport *VAR_4, struct lpfc_nodelist *VAR_5)
{
 struct Scsi_Host *VAR_6 = FUNC_8(VAR_4);
 struct lpfc_work_evt *VAR_7;

 if (!(VAR_5->nlp_flag & VAR_2))
  return;
 FUNC_9(VAR_6->host_lock);
 VAR_5->nlp_flag &= ~VAR_2;
 FUNC_10(VAR_6->host_lock);
 FUNC_0(&VAR_5->nlp_delayfunc);
 VAR_5->nlp_last_elscmd = 0;
 if (!FUNC_2(&VAR_5->els_retry_evt.evt_listp)) {
  FUNC_1(&VAR_5->els_retry_evt.evt_listp);

  VAR_7 = &VAR_5->els_retry_evt;
  FUNC_7((struct lpfc_nodelist *)VAR_7->evt_arg1);
 }
 if (VAR_5->nlp_flag & VAR_3) {
  FUNC_9(VAR_6->host_lock);
  VAR_5->nlp_flag &= ~VAR_3;
  FUNC_10(VAR_6->host_lock);
  if (VAR_4->num_disc_nodes) {
   if (VAR_4->port_state < VAR_1) {

    FUNC_5(VAR_4);
   } else {

    FUNC_6(VAR_4);
    if (VAR_4->num_disc_nodes == 0) {
     FUNC_9(VAR_6->host_lock);
     VAR_4->fc_flag &= ~VAR_0;
     FUNC_10(VAR_6->host_lock);
     FUNC_3(VAR_4);
     FUNC_4(VAR_4);
    }
   }
  }
 }
 return;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int fc_flag; scalar_t__ port_state; scalar_t__ num_disc_nodes; scalar_t__ fc_npr_cnt; struct lpfc_hba* phba; } ;
struct lpfc_hba {int sli3_options; scalar_t__ sli_rev; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct lpfc_vport*) ;
 int FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_vport*) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_vport*) ;
 int FUNC_5 (struct lpfc_vport*) ;
 struct Scsi_Host* FUNC_6 (struct lpfc_vport*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct lpfc_vport *VAR_6)
{
 struct Scsi_Host *VAR_7 = FUNC_6(VAR_6);
 struct lpfc_hba *VAR_8 = VAR_6->phba;





 if ((VAR_8->sli3_options & VAR_3) &&
     !(VAR_6->fc_flag & VAR_2) &&
     (VAR_8->sli_rev < VAR_4)) {
  FUNC_3(VAR_8, VAR_6);
  FUNC_4(VAR_8, VAR_6);
  return;
 }




 if (VAR_6->port_state < VAR_5) {

  FUNC_3(VAR_8, VAR_6);
  if (!(VAR_6->fc_flag & VAR_0)) {
   VAR_6->num_disc_nodes = 0;

   if (VAR_6->fc_npr_cnt)
    FUNC_1(VAR_6);
   if (!VAR_6->num_disc_nodes) {
    FUNC_7(VAR_7->host_lock);
    VAR_6->fc_flag &= ~VAR_1;
    FUNC_8(VAR_7->host_lock);
    FUNC_0(VAR_6);
    FUNC_2(VAR_6);
   }
  }
  VAR_6->port_state = VAR_5;
 } else
  FUNC_5(VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int fc_flag; scalar_t__ fc_rscn_id_cnt; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpfc_vport*) ;
 struct Scsi_Host* FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct lpfc_vport *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_1(VAR_2);

 if (VAR_2->fc_flag & VAR_1) {




  if (VAR_2->fc_rscn_id_cnt ||
      (VAR_2->fc_flag & VAR_0) != 0)
   FUNC_0(VAR_2);
  else {
   FUNC_2(VAR_3->host_lock);
   VAR_2->fc_flag &= ~VAR_1;
   FUNC_3(VAR_3->host_lock);
  }
 }
}

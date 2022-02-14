
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stat_group; int scsi_att_intr_port_group; int scsi_auth_intr_group; } ;
struct se_lun_acl {TYPE_1__ ml_stat_grps; } ;


 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct se_lun_acl *VAR_2)
{
 FUNC_0(&VAR_2->ml_stat_grps.scsi_auth_intr_group,
   "scsi_auth_intr", &VAR_1);
 FUNC_1(&VAR_2->ml_stat_grps.scsi_auth_intr_group,
   &VAR_2->ml_stat_grps.stat_group);

 FUNC_0(&VAR_2->ml_stat_grps.scsi_att_intr_port_group,
   "scsi_att_intr_port", &VAR_0);
 FUNC_1(&VAR_2->ml_stat_grps.scsi_att_intr_port_group,
   &VAR_2->ml_stat_grps.stat_group);
}

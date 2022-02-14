
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stat_group; int scsi_transport_group; int scsi_tgt_port_group; int scsi_port_group; } ;
struct se_lun {TYPE_1__ port_stat_grps; } ;


 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_2(struct se_lun *VAR_3)
{
 FUNC_0(&VAR_3->port_stat_grps.scsi_port_group,
   "scsi_port", &VAR_0);
 FUNC_1(&VAR_3->port_stat_grps.scsi_port_group,
   &VAR_3->port_stat_grps.stat_group);

 FUNC_0(&VAR_3->port_stat_grps.scsi_tgt_port_group,
   "scsi_tgt_port", &VAR_1);
 FUNC_1(&VAR_3->port_stat_grps.scsi_tgt_port_group,
   &VAR_3->port_stat_grps.stat_group);

 FUNC_0(&VAR_3->port_stat_grps.scsi_transport_group,
   "scsi_transport", &VAR_2);
 FUNC_1(&VAR_3->port_stat_grps.scsi_transport_group,
   &VAR_3->port_stat_grps.stat_group);
}

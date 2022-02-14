
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stat_group; int scsi_lu_group; int scsi_tgt_dev_group; int scsi_dev_group; } ;
struct se_device {TYPE_1__ dev_stat_grps; } ;


 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_2(struct se_device *VAR_3)
{
 FUNC_0(&VAR_3->dev_stat_grps.scsi_dev_group,
   "scsi_dev", &VAR_0);
 FUNC_1(&VAR_3->dev_stat_grps.scsi_dev_group,
   &VAR_3->dev_stat_grps.stat_group);

 FUNC_0(&VAR_3->dev_stat_grps.scsi_tgt_dev_group,
   "scsi_tgt_dev", &VAR_2);
 FUNC_1(&VAR_3->dev_stat_grps.scsi_tgt_dev_group,
   &VAR_3->dev_stat_grps.stat_group);

 FUNC_0(&VAR_3->dev_stat_grps.scsi_lu_group,
   "scsi_lu", &VAR_1);
 FUNC_1(&VAR_3->dev_stat_grps.scsi_lu_group,
   &VAR_3->dev_stat_grps.stat_group);
}

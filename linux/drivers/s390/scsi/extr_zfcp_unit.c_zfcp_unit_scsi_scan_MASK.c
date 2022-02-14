
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct zfcp_unit {int fcp_lun; TYPE_1__* port; } ;
struct scsi_lun {int dummy; } ;
struct fc_rport {scalar_t__ port_state; int scsi_target_id; int dev; } ;
struct TYPE_2__ {struct fc_rport* rport; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int ) ;
 int FUNC_1 (struct scsi_lun*) ;

void FUNC_2(struct zfcp_unit *VAR_2)
{
 struct fc_rport *VAR_3 = VAR_2->port->rport;
 u64 VAR_4;

 VAR_4 = FUNC_1((struct scsi_lun *) &VAR_2->fcp_lun);

 if (VAR_3 && VAR_3->port_state == VAR_0)
  FUNC_0(&VAR_3->dev, 0, VAR_3->scsi_target_id, VAR_4,
     VAR_1);
}

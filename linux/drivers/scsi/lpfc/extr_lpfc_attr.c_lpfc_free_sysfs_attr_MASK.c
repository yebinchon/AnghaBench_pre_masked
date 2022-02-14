
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_vport {scalar_t__ port_type; } ;
struct TYPE_2__ {int kobj; } ;
struct Scsi_Host {TYPE_1__ shost_dev; } ;


 scalar_t__ VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct lpfc_vport*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;

void
FUNC_2(struct lpfc_vport *VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_0(VAR_4);
 FUNC_1(&VAR_5->shost_dev.kobj,
  &VAR_2);

 if (VAR_4->port_type == VAR_0)
  return;
 FUNC_1(&VAR_5->shost_dev.kobj, &VAR_3);
 FUNC_1(&VAR_5->shost_dev.kobj, &VAR_1);
}

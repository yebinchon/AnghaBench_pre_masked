
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct pqi_scsi_dev {int scsi_cmds_outstanding; } ;
struct TYPE_2__ {struct pqi_scsi_dev* hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct scsi_cmnd*,int ) ;

void FUNC_2(struct scsi_cmnd *VAR_1)
{
 struct pqi_scsi_dev *VAR_2;

 if (!VAR_1->device) {
  FUNC_1(VAR_1, VAR_0);
  return;
 }

 VAR_2 = VAR_1->device->hostdata;
 if (!VAR_2) {
  FUNC_1(VAR_1, VAR_0);
  return;
 }

 FUNC_0(&VAR_2->scsi_cmds_outstanding);
}

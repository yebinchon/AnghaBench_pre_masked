
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {scalar_t__ can_queue; int target_busy; } ;
struct scsi_device {int device_busy; struct Scsi_Host* host; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct Scsi_Host*) ;
 struct scsi_target* FUNC_2 (struct scsi_device*) ;

void FUNC_3(struct scsi_device *VAR_0)
{
 struct Scsi_Host *VAR_1 = VAR_0->host;
 struct scsi_target *VAR_2 = FUNC_2(VAR_0);

 FUNC_1(VAR_1);

 if (VAR_2->can_queue > 0)
  FUNC_0(&VAR_2->target_busy);

 FUNC_0(&VAR_0->device_busy);
}

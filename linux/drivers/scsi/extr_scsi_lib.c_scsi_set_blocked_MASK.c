
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {int max_target_blocked; int target_blocked; } ;
struct scsi_device {int max_device_blocked; int device_blocked; struct Scsi_Host* host; } ;
struct scsi_cmnd {struct scsi_device* device; } ;
struct Scsi_Host {int max_host_blocked; int host_blocked; } ;






 int FUNC_0 (int *,int ) ;
 struct scsi_target* FUNC_1 (struct scsi_device*) ;

__attribute__((used)) static void
FUNC_2(struct scsi_cmnd *VAR_0, int VAR_1)
{
 struct Scsi_Host *VAR_2 = VAR_0->device->host;
 struct scsi_device *VAR_3 = VAR_0->device;
 struct scsi_target *VAR_4 = FUNC_1(VAR_3);
 switch (VAR_1) {
 case 129:
  FUNC_0(&VAR_2->host_blocked, VAR_2->max_host_blocked);
  break;
 case 131:
 case 130:
  FUNC_0(&VAR_3->device_blocked,
      VAR_3->max_device_blocked);
  break;
 case 128:
  FUNC_0(&VAR_4->target_blocked,
      VAR_4->max_target_blocked);
  break;
 }
}

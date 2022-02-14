
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {scalar_t__* cmnd; TYPE_1__* device; } ;
struct MPT3SAS_DEVICE {int ata_command_pending; } ;
struct TYPE_2__ {struct MPT3SAS_DEVICE* hostdata; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_2, bool VAR_3)
{
 struct MPT3SAS_DEVICE *VAR_4 = VAR_2->device->hostdata;

 if (VAR_2->cmnd[0] != VAR_0 && VAR_2->cmnd[0] != VAR_1)
  return 0;

 if (VAR_3)
  return FUNC_1(0, &VAR_4->ata_command_pending);

 FUNC_0(0, &VAR_4->ata_command_pending);
 return 0;
}

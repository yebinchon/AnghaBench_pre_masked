
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ cmd_per_lun; scalar_t__ can_queue; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct Scsi_Host*,struct device*) ;

int FUNC_1(struct Scsi_Host *VAR_2, struct device *VAR_3)
{
 if (!VAR_2->can_queue)
  VAR_2->can_queue = VAR_1;

 if (!VAR_2->cmd_per_lun)
  VAR_2->cmd_per_lun = VAR_0;

 return FUNC_0(VAR_2, VAR_3);
}

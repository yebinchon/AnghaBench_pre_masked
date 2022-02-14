
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {TYPE_1__* sdev_target; } ;
struct TYPE_2__ {int expecting_lun_change; } ;



__attribute__((used)) static void FUNC_0(struct scsi_device *VAR_0)
{
 VAR_0->sdev_target->expecting_lun_change = 1;
}

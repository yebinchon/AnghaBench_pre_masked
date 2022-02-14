
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {scalar_t__ scsi_level; TYPE_1__* sdev_target; int request_queue; } ;
struct TYPE_2__ {scalar_t__ scsi_level; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_1)
{
 FUNC_0(VAR_1->request_queue, (512 - 1));
 if (VAR_1->scsi_level < VAR_0) {
  VAR_1->scsi_level = VAR_0;
  VAR_1->sdev_target->scsi_level = VAR_0;
 }

 return 0;
}

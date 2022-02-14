
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_scsi_cmd_req {int* lun; scalar_t__ crn; scalar_t__ prio; int task_attr; int tag; } ;
struct virtio_device {int dummy; } ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct TYPE_2__ {int id; int lun; } ;


 int VAR_0 ;
 int FUNC_0 (struct virtio_device*,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct virtio_device *VAR_1,
     struct virtio_scsi_cmd_req *VAR_2,
     struct scsi_cmnd *VAR_3)
{
 VAR_2->lun[0] = 1;
 VAR_2->lun[1] = VAR_3->device->id;
 VAR_2->lun[2] = (VAR_3->device->lun >> 8) | 0x40;
 VAR_2->lun[3] = VAR_3->device->lun & 0xff;
 VAR_2->tag = FUNC_0(VAR_1, (unsigned long)VAR_3);
 VAR_2->task_attr = VAR_0;
 VAR_2->prio = 0;
 VAR_2->crn = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_disk {scalar_t__ capacity; scalar_t__ media_present; TYPE_1__* device; } ;
struct TYPE_2__ {int changed; scalar_t__ removable; } ;



__attribute__((used)) static void FUNC_0(struct scsi_disk *VAR_0)
{
 if (VAR_0->media_present)
  VAR_0->device->changed = 1;

 if (VAR_0->device->removable) {
  VAR_0->media_present = 0;
  VAR_0->capacity = 0;
 }
}

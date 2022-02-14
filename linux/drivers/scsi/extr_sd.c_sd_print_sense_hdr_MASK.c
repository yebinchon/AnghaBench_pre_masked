
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_sense_hdr {int dummy; } ;
struct scsi_disk {TYPE_1__* disk; int device; } ;
struct TYPE_2__ {int * disk_name; } ;


 int FUNC_0 (int ,int *,struct scsi_sense_hdr*) ;

__attribute__((used)) static void FUNC_1(struct scsi_disk *VAR_0,
          struct scsi_sense_hdr *VAR_1)
{
 FUNC_0(VAR_0->device,
        VAR_0->disk ? VAR_0->disk->disk_name : ((void*)0), VAR_1);
}

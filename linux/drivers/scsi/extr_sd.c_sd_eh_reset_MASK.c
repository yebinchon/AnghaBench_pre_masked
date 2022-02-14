
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_disk {int ignore_medium_access_errors; } ;
struct scsi_cmnd {TYPE_1__* request; } ;
struct TYPE_2__ {int rq_disk; } ;


 struct scsi_disk* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct scsi_cmnd *VAR_0)
{
 struct scsi_disk *VAR_1 = FUNC_0(VAR_0->request->rq_disk);


 VAR_1->ignore_medium_access_errors = 0;
}

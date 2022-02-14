
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {scalar_t__ id; TYPE_1__* host; } ;
struct TYPE_2__ {scalar_t__ this_id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct scsi_device*) ;

void FUNC_2(struct scsi_device *VAR_0)
{
 FUNC_0(VAR_0->id != VAR_0->host->this_id);

 FUNC_1(VAR_0);
}

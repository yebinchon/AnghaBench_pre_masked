
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {TYPE_1__* host; } ;
struct TYPE_2__ {int host_wait; } ;


 int FUNC_0 (struct scsi_device*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int) ;

int FUNC_3(struct scsi_device *VAR_0)
{
 int VAR_1;

 FUNC_2(VAR_0->host->host_wait, !FUNC_1(VAR_0->host));

 VAR_1 = FUNC_0(VAR_0);

 return VAR_1;
}

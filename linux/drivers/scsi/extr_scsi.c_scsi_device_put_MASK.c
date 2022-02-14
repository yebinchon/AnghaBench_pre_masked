
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {int sdev_gendev; TYPE_2__* host; } ;
struct TYPE_4__ {TYPE_1__* hostt; } ;
struct TYPE_3__ {int module; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct scsi_device *VAR_0)
{
 FUNC_0(VAR_0->host->hostt->module);
 FUNC_1(&VAR_0->sdev_gendev);
}

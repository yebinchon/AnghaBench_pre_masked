
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {scalar_t__ sdev_state; int sdev_gendev; TYPE_2__* host; } ;
struct TYPE_4__ {TYPE_1__* hostt; } ;
struct TYPE_3__ {int module; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct scsi_device *VAR_3)
{
 if (VAR_3->sdev_state == VAR_2 || VAR_3->sdev_state == VAR_1)
  goto fail;
 if (!FUNC_0(&VAR_3->sdev_gendev))
  goto fail;
 if (!FUNC_2(VAR_3->host->hostt->module))
  goto fail_put_device;
 return 0;

fail_put_device:
 FUNC_1(&VAR_3->sdev_gendev);
fail:
 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_host_template {int (* eh_device_reset_handler ) (struct scsi_cmnd*) ;} ;
struct scsi_cmnd {TYPE_2__* device; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {struct scsi_host_template* hostt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_2)
{
 int VAR_3;
 struct scsi_host_template *VAR_4 = VAR_2->device->host->hostt;

 if (!VAR_4->eh_device_reset_handler)
  return VAR_0;

 VAR_3 = VAR_4->eh_device_reset_handler(VAR_2);
 if (VAR_3 == VAR_1)
  FUNC_0(VAR_2->device, ((void*)0));
 return VAR_3;
}

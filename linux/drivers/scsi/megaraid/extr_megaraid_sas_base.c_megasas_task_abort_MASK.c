
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct megasas_instance {scalar_t__ adapter_type; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (int ,TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_3)
{
 int VAR_4;
 struct megasas_instance *VAR_5;

 VAR_5 = (struct megasas_instance *)VAR_3->device->host->hostdata;

 if (VAR_5->adapter_type != VAR_2)
  VAR_4 = FUNC_0(VAR_3);
 else {
  FUNC_1(VAR_1, VAR_3->device, "TASK ABORT not supported\n");
  VAR_4 = VAR_0;
 }

 return VAR_4;
}

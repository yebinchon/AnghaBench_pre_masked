
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipr_cmnd {TYPE_1__* scsi_cmd; } ;
struct TYPE_2__ {void* device; } ;



__attribute__((used)) static int FUNC_0(struct ipr_cmnd *VAR_0, void *VAR_1)
{
 if (VAR_0->scsi_cmd && VAR_0->scsi_cmd->device == VAR_1)
  return 1;
 return 0;
}

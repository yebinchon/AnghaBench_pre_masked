
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct TYPE_4__ {int lun; int id; TYPE_1__* host; } ;
struct TYPE_3__ {int host_no; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ,int ) ;
 int FUNC_1 (struct scsi_cmnd*,int ) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_1)
{
 FUNC_0(((void*)0), "%d:0:%d:%lld: LUN RESET Issued... ",
   VAR_1->device->host->host_no, VAR_1->device->id,
   VAR_1->device->lun);
 return FUNC_1(VAR_1, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int hostt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_3 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_4 (int ,struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_5(struct scsi_cmnd *VAR_1)
{
 if (FUNC_4(VAR_1->device->host->hostt, VAR_1) != VAR_0)
  if (FUNC_0(VAR_1) != VAR_0)
   if (FUNC_3(VAR_1) != VAR_0)
    if (FUNC_1(VAR_1) != VAR_0)
     FUNC_2(VAR_1);
}

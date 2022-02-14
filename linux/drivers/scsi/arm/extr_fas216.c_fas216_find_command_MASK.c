
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct scsi_cmnd {TYPE_3__* device; } ;
typedef enum res_find { ____Placeholder_res_find } res_find ;
struct TYPE_7__ {int phase; int disconnectable; } ;
struct TYPE_6__ {int disconnected; int issue; } ;
struct TYPE_9__ {int busyluns; struct scsi_cmnd* origSCpnt; struct scsi_cmnd* SCpnt; TYPE_2__ scsi; TYPE_1__ queues; } ;
struct TYPE_8__ {int id; int lun; } ;
typedef TYPE_4__ FAS216_Info ;



 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,struct scsi_cmnd*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum res_find FUNC_3(FAS216_Info *VAR_3,
      struct scsi_cmnd *VAR_4)
{
 enum res_find VAR_5 = VAR_0;

 if (FUNC_2(&VAR_3->queues.issue, VAR_4)) {






  FUNC_1("on issue queue ");

  VAR_5 = VAR_2;
 } else if (FUNC_2(&VAR_3->queues.disconnected, VAR_4)) {





  FUNC_1("on disconnected queue ");

  VAR_5 = VAR_1;
 } else if (VAR_3->SCpnt == VAR_4) {
  FUNC_1("executing ");

  switch (VAR_3->scsi.phase) {




  case 128:
   if (VAR_3->scsi.disconnectable) {
    VAR_3->scsi.disconnectable = 0;
    VAR_3->SCpnt = ((void*)0);
    VAR_5 = VAR_1;
   }
   break;

  default:
   break;
  }
 } else if (VAR_3->origSCpnt == VAR_4) {






  VAR_3->origSCpnt = ((void*)0);
  FUNC_0(VAR_4->device->id * 8 +
     (u8)(VAR_4->device->lun & 0x7), VAR_3->busyluns);
  FUNC_1("waiting for execution ");
  VAR_5 = VAR_2;
 } else
  FUNC_1("unknown ");

 return VAR_5;
}

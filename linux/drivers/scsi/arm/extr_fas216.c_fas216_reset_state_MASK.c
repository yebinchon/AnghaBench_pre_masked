
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int disconnected; } ;
struct TYPE_8__ {scalar_t__ aborting; scalar_t__ disconnectable; } ;
struct TYPE_11__ {int * origSCpnt; int * rstSCpnt; int * reqSCpnt; int * SCpnt; TYPE_3__ queues; TYPE_2__* device; TYPE_1__ scsi; int busyluns; } ;
struct TYPE_9__ {int parity_check; scalar_t__ parity_enabled; } ;
typedef TYPE_4__ FAS216_Info ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ,int) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(FAS216_Info *VAR_0)
{
 int VAR_1;

 FUNC_1(VAR_0);

 FUNC_0(VAR_0);




 FUNC_2(VAR_0->busyluns, 0, sizeof(VAR_0->busyluns));
 VAR_0->scsi.disconnectable = 0;
 VAR_0->scsi.aborting = 0;

 for (VAR_1 = 0; VAR_1 < 8; VAR_1++) {
  VAR_0->device[VAR_1].parity_enabled = 0;
  VAR_0->device[VAR_1].parity_check = 1;
 }




 while (FUNC_3(&VAR_0->queues.disconnected) != ((void*)0));




 VAR_0->SCpnt = ((void*)0);
 VAR_0->reqSCpnt = ((void*)0);
 VAR_0->rstSCpnt = ((void*)0);
 VAR_0->origSCpnt = ((void*)0);
}

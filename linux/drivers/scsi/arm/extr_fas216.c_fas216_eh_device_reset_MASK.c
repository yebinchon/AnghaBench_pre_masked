
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct scsi_cmnd {int * host_scribble; TYPE_4__* device; } ;
struct TYPE_24__ {TYPE_8__* device; } ;
struct TYPE_23__ {int id; } ;
struct TYPE_22__ {TYPE_6__* device; } ;
struct TYPE_21__ {int id; } ;
struct TYPE_20__ {int disconnected; int issue; } ;
struct TYPE_19__ {int id; TYPE_1__* host; } ;
struct TYPE_18__ {TYPE_2__* device; } ;
struct TYPE_17__ {scalar_t__ id; } ;
struct TYPE_16__ {scalar_t__ hostdata; } ;
struct TYPE_14__ {scalar_t__ phase; int disconnectable; } ;
struct TYPE_15__ {int rst_dev_status; int host_lock; struct scsi_cmnd* rstSCpnt; int eh_timer; int eh_wait; TYPE_10__ scsi; int busyluns; TYPE_9__* reqSCpnt; TYPE_7__* origSCpnt; TYPE_5__ queues; TYPE_3__* SCpnt; } ;
typedef TYPE_11__ FAS216_Info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_11__*) ;
 int FUNC_3 (TYPE_11__*,int ,char*,...) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,int) ;

int FUNC_9(struct scsi_cmnd *VAR_7)
{
 FAS216_Info *VAR_8 = (FAS216_Info *)VAR_7->device->host->hostdata;
 unsigned long VAR_9;
 int VAR_10, VAR_11 = VAR_0, VAR_12 = VAR_7->device->id;

 FUNC_3(VAR_8, VAR_2, "device reset for target %d", VAR_12);

 FUNC_6(&VAR_8->host_lock, VAR_9);

 do {






  if (VAR_8->SCpnt && !VAR_8->scsi.disconnectable &&
      VAR_8->SCpnt->device->id == VAR_7->device->id)
   break;







  FUNC_5(&VAR_8->queues.issue, VAR_12);
  FUNC_5(&VAR_8->queues.disconnected, VAR_12);
  if (VAR_8->origSCpnt && VAR_8->origSCpnt->device->id == VAR_12)
   VAR_8->origSCpnt = ((void*)0);
  if (VAR_8->reqSCpnt && VAR_8->reqSCpnt->device->id == VAR_12)
   VAR_8->reqSCpnt = ((void*)0);
  for (VAR_10 = 0; VAR_10 < 8; VAR_10++)
   FUNC_0(VAR_12 * 8 + VAR_10, VAR_8->busyluns);





  VAR_7->host_scribble = (void *)VAR_5;

  VAR_8->rst_dev_status = 0;
  VAR_8->rstSCpnt = VAR_7;

  if (VAR_8->scsi.phase == VAR_3)
   FUNC_2(VAR_8);

  FUNC_4(&VAR_8->eh_timer, VAR_6 + 30 * VAR_1);
  FUNC_7(&VAR_8->host_lock, VAR_9);




  FUNC_8(VAR_8->eh_wait, VAR_8->rst_dev_status);

  FUNC_1(&VAR_8->eh_timer);
  FUNC_6(&VAR_8->host_lock, VAR_9);
  VAR_8->rstSCpnt = ((void*)0);

  if (VAR_8->rst_dev_status == 1)
   VAR_11 = VAR_4;
 } while (0);

 VAR_7->host_scribble = ((void*)0);
 FUNC_7(&VAR_8->host_lock, VAR_9);

 FUNC_3(VAR_8, VAR_2, "device reset complete: %s\n",
     VAR_11 == VAR_4 ? "success" : "failed");

 return VAR_11;
}

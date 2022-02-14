
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int (* enableint ) (TYPE_6__*) ;int (* statinit ) (TYPE_6__*) ;} ;
struct TYPE_22__ {int reset_count; int requires_esl; int ntargets; int nlun; int nbus; int max_xfer; int max_cmds; scalar_t__ ad_type; int* ha_id; scalar_t__* dcdb_active; TYPE_5__* conf; TYPE_3__* enq; TYPE_2__* subsys; int pcidev; int last_ffdc; TYPE_1__ func; } ;
typedef TYPE_6__ ips_ha_t ;
struct TYPE_21__ {scalar_t__ ucLogDriveCount; int* init_id; TYPE_4__* logical_drive; } ;
struct TYPE_20__ {int ucStripeSize; } ;
struct TYPE_19__ {int ucMaxPhysicalDevices; int ucConcurrentCmdCount; } ;
struct TYPE_18__ {int * param; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_6 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (TYPE_6__*,int ) ;
 int FUNC_3 (TYPE_6__*,int ) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,int ) ;
 int FUNC_6 (TYPE_6__*,int ) ;
 int FUNC_7 (TYPE_6__*,int ) ;
 int FUNC_8 (TYPE_6__*,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*) ;

__attribute__((used)) static int
FUNC_13(ips_ha_t * VAR_8)
{
 int VAR_9;

 FUNC_1("ips_hainit", 1);

 if (!VAR_8)
  return (0);

 if (VAR_8->func.statinit)
  (*VAR_8->func.statinit) (VAR_8);

 if (VAR_8->func.enableint)
  (*VAR_8->func.enableint) (VAR_8);


 VAR_8->reset_count = 1;
 VAR_8->last_ffdc = FUNC_9();
 FUNC_3(VAR_8, VAR_4);

 if (!FUNC_6(VAR_8, VAR_4)) {
  FUNC_0(VAR_6, VAR_8->pcidev,
      "unable to read config from controller.\n");

  return (0);
 }

 if (!FUNC_5(VAR_8, VAR_4)) {
  FUNC_0(VAR_6, VAR_8->pcidev,
      "unable to read controller status.\n");

  return (0);
 }


 FUNC_4(VAR_8);

 if (!FUNC_7(VAR_8, VAR_4)) {
  FUNC_0(VAR_6, VAR_8->pcidev,
      "unable to read subsystem parameters.\n");

  return (0);
 }


 if (!FUNC_8(VAR_8, VAR_4)) {
  FUNC_0(VAR_6, VAR_8->pcidev,
      "unable to write driver info to controller.\n");

  return (0);
 }


 if ((VAR_8->conf->ucLogDriveCount > 0) && (VAR_8->requires_esl == 1))
  FUNC_2(VAR_8, VAR_4);


 VAR_8->ntargets = VAR_5 + 1;
 VAR_8->nlun = 1;
 VAR_8->nbus = (VAR_8->enq->ucMaxPhysicalDevices / VAR_5) + 1;

 switch (VAR_8->conf->logical_drive[0].ucStripeSize) {
 case 4:
  VAR_8->max_xfer = 0x10000;
  break;

 case 5:
  VAR_8->max_xfer = 0x20000;
  break;

 case 6:
  VAR_8->max_xfer = 0x40000;
  break;

 case 7:
 default:
  VAR_8->max_xfer = 0x80000;
  break;
 }


 if (FUNC_10(VAR_8->subsys->param[4]) & 0x1) {

  VAR_8->max_cmds = VAR_8->enq->ucConcurrentCmdCount;
 } else {

  switch (VAR_8->conf->logical_drive[0].ucStripeSize) {
  case 4:
   VAR_8->max_cmds = 32;
   break;

  case 5:
   VAR_8->max_cmds = 16;
   break;

  case 6:
   VAR_8->max_cmds = 8;
   break;

  case 7:
  default:
   VAR_8->max_cmds = 4;
   break;
  }
 }


 if ((VAR_8->ad_type == VAR_1) ||
     (VAR_8->ad_type == VAR_2) ||
     (VAR_8->ad_type == VAR_3)) {
  if ((VAR_8->max_cmds > VAR_7) && (VAR_7))
   VAR_8->max_cmds = VAR_7;
 }


 VAR_8->ha_id[0] = VAR_0;
 for (VAR_9 = 1; VAR_9 < VAR_8->nbus; VAR_9++) {
  VAR_8->ha_id[VAR_9] = VAR_8->conf->init_id[VAR_9 - 1] & 0x1f;
  VAR_8->dcdb_active[VAR_9 - 1] = 0;
 }

 return (1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_17__ ;
typedef struct TYPE_28__ TYPE_10__ ;


struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_2__* device; } ;
struct TYPE_32__ {scalar_t__ reserved4; scalar_t__ reserved3; scalar_t__ reserved2; scalar_t__ reserved; int state; int command_id; void* op_code; } ;
struct TYPE_33__ {TYPE_3__ flush_cache; } ;
struct TYPE_36__ {TYPE_10__* scsi_cmd; TYPE_4__ cmd; void** cdb; int timeout; } ;
typedef TYPE_7__ ips_scb_t ;
struct TYPE_34__ {int (* reset ) (TYPE_8__*) ;} ;
struct TYPE_29__ {TYPE_9__* head; } ;
struct TYPE_37__ {scalar_t__ ioctl_reset; int max_cmds; int nbus; scalar_t__ num_ioctl; scalar_t__* dcdb_active; int scb_activelist; int host_num; int reset_count; int last_ffdc; TYPE_6__* subsys; void* active; int scb_waitlist; int pcidev; TYPE_5__ func; TYPE_7__* scbs; TYPE_17__ copp_waitlist; } ;
typedef TYPE_8__ ips_ha_t ;
struct TYPE_38__ {struct TYPE_38__* next; struct scsi_cmnd* scsi_cmd; } ;
typedef TYPE_9__ ips_copp_wait_item_t ;
struct TYPE_35__ {int * param; } ;
struct TYPE_31__ {TYPE_1__* host; } ;
struct TYPE_30__ {scalar_t__ hostdata; } ;
struct TYPE_28__ {int result; int (* scsi_done ) (TYPE_10__*) ;} ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_2 (TYPE_8__*,TYPE_7__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (char*,int) ;
 int VAR_9 ;
 int FUNC_5 (TYPE_8__*,int ) ;
 int VAR_10 ;
 int FUNC_6 (TYPE_8__*,int ) ;
 int FUNC_7 (TYPE_8__*,TYPE_7__*) ;
 int FUNC_8 (TYPE_8__*,TYPE_7__*) ;
 int VAR_11 ;
 int FUNC_9 (TYPE_8__*,int ) ;
 int FUNC_10 (TYPE_17__*,TYPE_9__*) ;
 TYPE_7__* FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,struct scsi_cmnd*) ;
 struct scsi_cmnd* FUNC_13 (int *) ;
 int FUNC_14 (TYPE_8__*,TYPE_7__*,int ,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_8__*) ;
 int FUNC_18 (TYPE_10__*) ;
 int FUNC_19 (struct scsi_cmnd*) ;
 int FUNC_20 (TYPE_10__*) ;
 int FUNC_21 (struct scsi_cmnd*) ;
 int FUNC_22 (TYPE_10__*) ;

__attribute__((used)) static int FUNC_23(struct scsi_cmnd *VAR_12)
{
 int VAR_13;
 int VAR_14;
 ips_ha_t *VAR_15;
 ips_scb_t *VAR_16;
 ips_copp_wait_item_t *VAR_17;

 FUNC_4("ips_eh_reset", 1);





 if (!VAR_12) {
  FUNC_0(1, "Reset called with NULL scsi command");

  return (VAR_2);
 }

 VAR_15 = (ips_ha_t *) VAR_12->device->host->hostdata;

 if (!VAR_15) {
  FUNC_0(1, "Reset called with NULL ha struct");

  return (VAR_2);
 }

 if (!VAR_15->active)
  return (VAR_2);


 VAR_17 = VAR_15->copp_waitlist.head;
 while ((VAR_17) && (VAR_17->scsi_cmd != VAR_12))
  VAR_17 = VAR_17->next;

 if (VAR_17) {

  FUNC_10(&VAR_15->copp_waitlist, VAR_17);
  return (VAR_9);
 }


 if (FUNC_12(&VAR_15->scb_waitlist, VAR_12)) {

  return (VAR_9);
 }
 if (VAR_15->ioctl_reset == 0) {
  VAR_16 = &VAR_15->scbs[VAR_15->max_cmds - 1];

  FUNC_8(VAR_15, VAR_16);

  VAR_16->timeout = VAR_10;
  VAR_16->cdb[0] = VAR_4;

  VAR_16->cmd.flush_cache.op_code = VAR_4;
  VAR_16->cmd.flush_cache.command_id = FUNC_2(VAR_15, VAR_16);
  VAR_16->cmd.flush_cache.state = VAR_6;
  VAR_16->cmd.flush_cache.reserved = 0;
  VAR_16->cmd.flush_cache.reserved2 = 0;
  VAR_16->cmd.flush_cache.reserved3 = 0;
  VAR_16->cmd.flush_cache.reserved4 = 0;


  VAR_13 = FUNC_14(VAR_15, VAR_16, VAR_10, VAR_5);
  if (VAR_13 == VAR_7) {
   FUNC_3(VAR_8, VAR_15->pcidev,
       "Reset Request - Flushed Cache\n");
   return (VAR_9);
  }
 }




 VAR_15->ioctl_reset = 0;





 FUNC_3(VAR_8, VAR_15->pcidev, "Resetting controller.\n");
 VAR_13 = (*VAR_15->func.reset) (VAR_15);

 if (!VAR_13) {
  struct scsi_cmnd *VAR_18;

  FUNC_3(VAR_8, VAR_15->pcidev,
      "Controller reset failed - controller now offline.\n");


  FUNC_1(1, "(%s%d) Failing active commands",
     VAR_11, VAR_15->host_num);

  while ((VAR_16 = FUNC_11(&VAR_15->scb_activelist))) {
   VAR_16->scsi_cmd->result = VAR_0 << 16;
   VAR_16->scsi_cmd->scsi_done(VAR_16->scsi_cmd);
   FUNC_7(VAR_15, VAR_16);
  }


  FUNC_1(1, "(%s%d) Failing pending commands",
     VAR_11, VAR_15->host_num);

  while ((VAR_18 = FUNC_13(&VAR_15->scb_waitlist))) {
   VAR_18->result = VAR_0;
   VAR_18->scsi_done(VAR_18);
  }

  VAR_15->active = VAR_3;
  return (VAR_2);
 }

 if (!FUNC_5(VAR_15, VAR_5)) {
  struct scsi_cmnd *VAR_19;

  FUNC_3(VAR_8, VAR_15->pcidev,
      "Controller reset failed - controller now offline.\n");


  FUNC_1(1, "(%s%d) Failing active commands",
     VAR_11, VAR_15->host_num);

  while ((VAR_16 = FUNC_11(&VAR_15->scb_activelist))) {
   VAR_16->scsi_cmd->result = VAR_0 << 16;
   VAR_16->scsi_cmd->scsi_done(VAR_16->scsi_cmd);
   FUNC_7(VAR_15, VAR_16);
  }


  FUNC_1(1, "(%s%d) Failing pending commands",
     VAR_11, VAR_15->host_num);

  while ((VAR_19 = FUNC_13(&VAR_15->scb_waitlist))) {
   VAR_19->result = VAR_0 << 16;
   VAR_19->scsi_done(VAR_19);
  }

  VAR_15->active = VAR_3;
  return (VAR_2);
 }


 if (FUNC_16(VAR_15->subsys->param[3]) & 0x300000) {
  VAR_15->last_ffdc = FUNC_15();
  VAR_15->reset_count++;
  FUNC_6(VAR_15, VAR_5);
 }


 FUNC_1(1, "(%s%d) Failing active commands", VAR_11, VAR_15->host_num);

 while ((VAR_16 = FUNC_11(&VAR_15->scb_activelist))) {
  VAR_16->scsi_cmd->result = VAR_1 << 16;
  VAR_16->scsi_cmd->scsi_done(VAR_16->scsi_cmd);
  FUNC_7(VAR_15, VAR_16);
 }


 for (VAR_14 = 1; VAR_14 < VAR_15->nbus; VAR_14++)
  VAR_15->dcdb_active[VAR_14 - 1] = 0;


 VAR_15->num_ioctl = 0;

 FUNC_9(VAR_15, VAR_5);

 return (VAR_9);


}

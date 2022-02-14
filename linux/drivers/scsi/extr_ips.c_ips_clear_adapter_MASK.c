
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ reserved3; scalar_t__ reserved2; scalar_t__ reserved; int control; scalar_t__ log_drv; void* command_id; void* op_code; } ;
struct TYPE_13__ {scalar_t__ reserved3; scalar_t__ reserved2; scalar_t__ reserved; int source_target; scalar_t__ channel; void* command_id; void* op_code; } ;
struct TYPE_15__ {TYPE_2__ unlock_stripe; TYPE_1__ config_sync; } ;
struct TYPE_16__ {int basic_status; TYPE_3__ cmd; void* timeout; void** cdb; } ;
typedef TYPE_4__ ips_scb_t ;
struct TYPE_17__ {int max_cmds; TYPE_4__* scbs; } ;
typedef TYPE_5__ ips_ha_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (TYPE_5__*,TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int) ;
 void* VAR_7 ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*) ;
 void* VAR_8 ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*,void*,int) ;

__attribute__((used)) static int
FUNC_4(ips_ha_t * VAR_9, int VAR_10)
{
 ips_scb_t *VAR_11;
 int VAR_12;

 FUNC_1("ips_clear_adapter", 1);

 VAR_11 = &VAR_9->scbs[VAR_9->max_cmds - 1];

 FUNC_2(VAR_9, VAR_11);

 VAR_11->timeout = VAR_8;
 VAR_11->cdb[0] = VAR_0;

 VAR_11->cmd.config_sync.op_code = VAR_0;
 VAR_11->cmd.config_sync.command_id = FUNC_0(VAR_9, VAR_11);
 VAR_11->cmd.config_sync.channel = 0;
 VAR_11->cmd.config_sync.source_target = VAR_5;
 VAR_11->cmd.config_sync.reserved = 0;
 VAR_11->cmd.config_sync.reserved2 = 0;
 VAR_11->cmd.config_sync.reserved3 = 0;


 if (((VAR_12 =
       FUNC_3(VAR_9, VAR_11, VAR_8, VAR_10)) == VAR_3)
     || (VAR_12 == VAR_6)
     || ((VAR_11->basic_status & VAR_4) > 1))
  return (0);


 FUNC_2(VAR_9, VAR_11);

 VAR_11->cdb[0] = VAR_1;
 VAR_11->timeout = VAR_8;

 VAR_11->cmd.unlock_stripe.op_code = VAR_1;
 VAR_11->cmd.unlock_stripe.command_id = FUNC_0(VAR_9, VAR_11);
 VAR_11->cmd.unlock_stripe.log_drv = 0;
 VAR_11->cmd.unlock_stripe.control = VAR_2;
 VAR_11->cmd.unlock_stripe.reserved = 0;
 VAR_11->cmd.unlock_stripe.reserved2 = 0;
 VAR_11->cmd.unlock_stripe.reserved3 = 0;


 if (((VAR_12 =
       FUNC_3(VAR_9, VAR_11, VAR_7, VAR_10)) == VAR_3)
     || (VAR_12 == VAR_6)
     || ((VAR_11->basic_status & VAR_4) > 1))
  return (0);

 return (1);
}

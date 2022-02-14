
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int reset_type; int reset_count; int command_id; void* op_code; } ;
struct TYPE_15__ {TYPE_1__ ffdc; } ;
struct TYPE_16__ {TYPE_2__ cmd; void** cdb; int timeout; } ;
typedef TYPE_3__ ips_scb_t ;
struct TYPE_17__ {int max_cmds; int last_ffdc; int reset_count; TYPE_3__* scbs; } ;
typedef TYPE_4__ ips_ha_t ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*,int ,int) ;

__attribute__((used)) static void
FUNC_5(ips_ha_t * VAR_2, int VAR_3)
{
 ips_scb_t *VAR_4;

 FUNC_1("ips_ffdc_reset", 1);

 VAR_4 = &VAR_2->scbs[VAR_2->max_cmds - 1];

 FUNC_3(VAR_2, VAR_4);

 VAR_4->timeout = VAR_1;
 VAR_4->cdb[0] = VAR_0;
 VAR_4->cmd.ffdc.op_code = VAR_0;
 VAR_4->cmd.ffdc.command_id = FUNC_0(VAR_2, VAR_4);
 VAR_4->cmd.ffdc.reset_count = VAR_2->reset_count;
 VAR_4->cmd.ffdc.reset_type = 0x80;


 FUNC_2(VAR_2, VAR_4, VAR_2->last_ffdc);


 FUNC_4(VAR_2, VAR_4, VAR_1, VAR_3);
}

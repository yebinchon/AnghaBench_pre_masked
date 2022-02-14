
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ScsiReqBlk {int state; void* end_message; void* target_status; TYPE_2__* cmd; } ;
struct AdapterCtlBlk {int dummy; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {scalar_t__ lun; int id; } ;


 int VAR_0 ;
 void* FUNC_0 (struct AdapterCtlBlk*,int ) ;
 int FUNC_1 (struct AdapterCtlBlk*,int ,int ) ;
 int FUNC_2 (struct AdapterCtlBlk*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,char*,TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct AdapterCtlBlk *VAR_8, struct ScsiReqBlk *VAR_9,
  u16 *VAR_10)
{
 FUNC_3(VAR_0, "status_phase0: (0x%p) <%02i-%i>\n",
  VAR_9->cmd, VAR_9->cmd->device->id, (u8)VAR_9->cmd->device->lun);
 VAR_9->target_status = FUNC_0(VAR_8, VAR_7);
 VAR_9->end_message = FUNC_0(VAR_8, VAR_7);
 VAR_9->state = VAR_4;
 *VAR_10 = VAR_2;
 FUNC_1(VAR_8, VAR_6, VAR_1);
 FUNC_2(VAR_8, VAR_5, VAR_3);
}

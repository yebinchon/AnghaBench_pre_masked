
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ScsiReqBlk {int state; TYPE_2__* cmd; } ;
struct AdapterCtlBlk {int dummy; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {scalar_t__ lun; int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct AdapterCtlBlk*,int ,int ) ;
 int FUNC_1 (struct AdapterCtlBlk*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct AdapterCtlBlk *VAR_6, struct ScsiReqBlk *VAR_7,
  u16 *VAR_8)
{
 FUNC_2(VAR_0, "status_phase1: (0x%p) <%02i-%i>\n",
  VAR_7->cmd, VAR_7->cmd->device->id, (u8)VAR_7->cmd->device->lun);
 VAR_7->state = VAR_3;
 FUNC_0(VAR_6, VAR_5, VAR_1);
 FUNC_1(VAR_6, VAR_4, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ScsiReqBlk {TYPE_2__* cmd; } ;
struct AdapterCtlBlk {int dummy; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {scalar_t__ lun; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct AdapterCtlBlk*,struct ScsiReqBlk*,int ) ;
 int FUNC_1 (int ,char*,TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct AdapterCtlBlk *VAR_2, struct ScsiReqBlk *VAR_3,
  u16 *VAR_4)
{
 FUNC_1(VAR_0, "data_in_phase1: (0x%p) <%02i-%i>\n",
  VAR_3->cmd, VAR_3->cmd->device->id, (u8)VAR_3->cmd->device->lun);
 FUNC_0(VAR_2, VAR_3, VAR_1);
}

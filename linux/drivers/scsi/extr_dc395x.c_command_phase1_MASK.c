
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct ScsiReqBlk {int flag; int state; TYPE_1__* cmd; } ;
struct DeviceCtlBlk {int target_lun; } ;
struct AdapterCtlBlk {struct DeviceCtlBlk* active_dcb; } ;
struct TYPE_2__ {scalar_t__ cmd_len; scalar_t__ cmnd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct AdapterCtlBlk*,int ,int ) ;
 int FUNC_1 (struct AdapterCtlBlk*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct AdapterCtlBlk*,char*) ;
 int FUNC_3 (int ,char*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct AdapterCtlBlk *VAR_11, struct ScsiReqBlk *VAR_12,
  u16 *VAR_13)
{
 struct DeviceCtlBlk *VAR_14;
 u8 *VAR_15;
 u16 VAR_16;
 FUNC_3(VAR_1, "command_phase1: (0x%p)\n", VAR_12->cmd);

 FUNC_2(VAR_11, "command_phase1");
 FUNC_0(VAR_11, VAR_9, VAR_2);
 if (!(VAR_12->flag & VAR_0)) {
  VAR_15 = (u8 *)VAR_12->cmd->cmnd;
  for (VAR_16 = 0; VAR_16 < VAR_12->cmd->cmd_len; VAR_16++) {
   FUNC_1(VAR_11, VAR_10, *VAR_15);
   VAR_15++;
  }
 } else {
  FUNC_1(VAR_11, VAR_10, VAR_4);
  VAR_14 = VAR_11->active_dcb;

  FUNC_1(VAR_11, VAR_10, (VAR_14->target_lun << 5));
  FUNC_1(VAR_11, VAR_10, 0);
  FUNC_1(VAR_11, VAR_10, 0);
  FUNC_1(VAR_11, VAR_10, VAR_6);
  FUNC_1(VAR_11, VAR_10, 0);
 }
 VAR_12->state |= VAR_7;

 FUNC_0(VAR_11, VAR_9, VAR_3);

 FUNC_1(VAR_11, VAR_8, VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct ScsiReqBlk {int state; scalar_t__ msg_count; scalar_t__* msgout_buf; int cmd; } ;
struct AdapterCtlBlk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct AdapterCtlBlk*,int ,int ) ;
 int FUNC_1 (struct AdapterCtlBlk*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct AdapterCtlBlk*,char*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_5(struct AdapterCtlBlk *VAR_11, struct ScsiReqBlk *VAR_12,
  u16 *VAR_13)
{
 u16 VAR_14;
 u8 *VAR_15;
 FUNC_3(VAR_0, "msgout_phase1: (0x%p)\n", VAR_12->cmd);

 FUNC_2(VAR_11, "msgout_phase1");
 if (!(VAR_12->state & VAR_7)) {
  VAR_12->state |= VAR_7;
  FUNC_4(VAR_2,
   "msgout_phase1: (0x%p) Phase unexpected\n",
   VAR_12->cmd);
 }
 if (!VAR_12->msg_count) {
  FUNC_3(VAR_0, "msgout_phase1: (0x%p) NOP msg\n",
   VAR_12->cmd);
  FUNC_1(VAR_11, VAR_10, VAR_4);
  FUNC_0(VAR_11, VAR_9, VAR_1);
  FUNC_1(VAR_11, VAR_8, VAR_5);
  return;
 }
 VAR_15 = (u8 *)VAR_12->msgout_buf;
 for (VAR_14 = 0; VAR_14 < VAR_12->msg_count; VAR_14++)
  FUNC_1(VAR_11, VAR_10, *VAR_15++);
 VAR_12->msg_count = 0;
 if (VAR_12->msgout_buf[0] == VAR_3)
  VAR_12->state = VAR_6;

 FUNC_1(VAR_11, VAR_8, VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ScsiReqBlk {int state; int cmd; } ;
struct AdapterCtlBlk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct AdapterCtlBlk*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct AdapterCtlBlk *VAR_7, struct ScsiReqBlk *VAR_8,
  u16 *VAR_9)
{
 FUNC_1(VAR_0, "msgout_phase0: (0x%p)\n", VAR_8->cmd);
 if (VAR_8->state & (VAR_5 + VAR_3))
  *VAR_9 = VAR_2;

 FUNC_0(VAR_7, VAR_6, VAR_1);
 VAR_8->state &= ~VAR_4;
}

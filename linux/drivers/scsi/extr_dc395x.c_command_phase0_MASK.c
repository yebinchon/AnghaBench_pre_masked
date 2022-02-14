
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ScsiReqBlk {int cmd; } ;
struct AdapterCtlBlk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct AdapterCtlBlk*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct AdapterCtlBlk *VAR_3, struct ScsiReqBlk *VAR_4,
  u16 *VAR_5)
{
 FUNC_1(VAR_0, "command_phase0: (0x%p)\n", VAR_4->cmd);
 FUNC_0(VAR_3, VAR_2, VAR_1);
}

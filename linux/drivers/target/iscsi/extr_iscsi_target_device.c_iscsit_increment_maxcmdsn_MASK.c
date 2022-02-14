
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iscsi_session {int max_cmd_sn; } ;
struct iscsi_cmd {int maxcmdsn_inc; scalar_t__ immediate_cmd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;

void FUNC_2(struct iscsi_cmd *VAR_0, struct iscsi_session *VAR_1)
{
 u32 VAR_2;

 if (VAR_0->immediate_cmd || VAR_0->maxcmdsn_inc)
  return;

 VAR_0->maxcmdsn_inc = 1;

 VAR_2 = FUNC_0(&VAR_1->max_cmd_sn);
 FUNC_1("Updated MaxCmdSN to 0x%08x\n", VAR_2);
}

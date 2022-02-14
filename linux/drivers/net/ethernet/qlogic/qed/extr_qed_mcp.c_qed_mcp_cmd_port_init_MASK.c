
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {TYPE_1__* mcp_info; } ;
struct TYPE_2__ {int port_addr; int public_base; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int ,int ) ;
 int FUNC_1 (struct qed_hwfn*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,int ) ;

void FUNC_5(struct qed_hwfn *VAR_2, struct qed_ptt *VAR_3)
{
 u32 VAR_4 = FUNC_3(VAR_2->mcp_info->public_base,
     VAR_0);
 u32 VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_4);

 VAR_2->mcp_info->port_addr = FUNC_2(VAR_5,
         FUNC_1(VAR_2));
 FUNC_0(VAR_2, VAR_1,
     "port_addr = 0x%x, port_id 0x%02x\n",
     VAR_2->mcp_info->port_addr, FUNC_1(VAR_2));
}

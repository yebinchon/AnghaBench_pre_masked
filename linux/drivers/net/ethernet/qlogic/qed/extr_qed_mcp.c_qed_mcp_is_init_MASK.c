
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_hwfn {TYPE_1__* mcp_info; } ;
struct TYPE_2__ {int public_base; } ;



bool FUNC_0(struct qed_hwfn *VAR_0)
{
 if (!VAR_0->mcp_info || !VAR_0->mcp_info->public_base)
  return 0;
 return 1;
}

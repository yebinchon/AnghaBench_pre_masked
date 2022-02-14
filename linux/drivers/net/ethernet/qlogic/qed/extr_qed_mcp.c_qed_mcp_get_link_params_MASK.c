
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_mcp_link_params {int dummy; } ;
struct qed_hwfn {TYPE_1__* mcp_info; } ;
struct TYPE_2__ {struct qed_mcp_link_params link_input; } ;



struct qed_mcp_link_params
*FUNC_0(struct qed_hwfn *VAR_0)
{
 if (!VAR_0 || !VAR_0->mcp_info)
  return ((void*)0);
 return &VAR_0->mcp_info->link_input;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_hwfn {int dummy; } ;
struct dbg_tools_user_data {int const* mcp_trace_user_meta_buf; } ;


 struct dbg_tools_user_data* FUNC_0 (struct qed_hwfn*) ;

void FUNC_1(struct qed_hwfn *VAR_0,
         const u32 *VAR_1)
{
 struct dbg_tools_user_data *VAR_2 =
  FUNC_0(VAR_0);

 VAR_2->mcp_trace_user_meta_buf = VAR_1;
}

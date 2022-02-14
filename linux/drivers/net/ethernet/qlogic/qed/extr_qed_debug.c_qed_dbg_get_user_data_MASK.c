
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {scalar_t__ dbg_user_info; } ;
struct dbg_tools_user_data {int dummy; } ;



__attribute__((used)) static struct dbg_tools_user_data *
FUNC_0(struct qed_hwfn *VAR_0)
{
 return (struct dbg_tools_user_data *)VAR_0->dbg_user_info;
}

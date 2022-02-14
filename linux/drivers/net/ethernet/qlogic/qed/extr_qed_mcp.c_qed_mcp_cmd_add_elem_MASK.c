
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct qed_mcp_mb_params {int dummy; } ;
struct qed_mcp_cmd_elem {int list; int expected_seq_num; struct qed_mcp_mb_params* p_mb_params; } ;
struct qed_hwfn {TYPE_1__* mcp_info; } ;
struct TYPE_2__ {int cmd_list; } ;


 int VAR_0 ;
 struct qed_mcp_cmd_elem* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static struct qed_mcp_cmd_elem *
FUNC_2(struct qed_hwfn *VAR_1,
       struct qed_mcp_mb_params *VAR_2,
       u16 VAR_3)
{
 struct qed_mcp_cmd_elem *VAR_4 = ((void*)0);

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  goto out;

 VAR_4->p_mb_params = VAR_2;
 VAR_4->expected_seq_num = VAR_3;
 FUNC_1(&VAR_4->list, &VAR_1->mcp_info->cmd_list);
out:
 return VAR_4;
}

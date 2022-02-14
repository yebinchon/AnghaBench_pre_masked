
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_mcp_info {void* mfw_mb_shadow; void* mfw_mb_cur; int mfw_mb_length; int cmd_list; int link_lock; int cmd_lock; } ;
struct qed_hwfn {struct qed_mcp_info* mcp_info; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_5 (struct qed_hwfn*) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct qed_hwfn *VAR_2, struct qed_ptt *VAR_3)
{
 struct qed_mcp_info *VAR_4;
 u32 VAR_5;


 VAR_2->mcp_info = FUNC_3(sizeof(*VAR_2->mcp_info), VAR_1);
 if (!VAR_2->mcp_info)
  goto err;
 VAR_4 = VAR_2->mcp_info;


 FUNC_6(&VAR_4->cmd_lock);
 FUNC_6(&VAR_4->link_lock);

 FUNC_1(&VAR_4->cmd_list);

 if (FUNC_4(VAR_2, VAR_3) != 0) {
  FUNC_0(VAR_2, "MCP is not initialized\n");



  return 0;
 }

 VAR_5 = FUNC_2(VAR_4->mfw_mb_length) * sizeof(u32);
 VAR_4->mfw_mb_cur = FUNC_3(VAR_5, VAR_1);
 VAR_4->mfw_mb_shadow = FUNC_3(VAR_5, VAR_1);
 if (!VAR_4->mfw_mb_cur || !VAR_4->mfw_mb_shadow)
  goto err;

 return 0;

err:
 FUNC_5(VAR_2);
 return -VAR_0;
}

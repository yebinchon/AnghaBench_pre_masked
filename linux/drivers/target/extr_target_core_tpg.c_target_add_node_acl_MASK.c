
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_portal_group {TYPE_1__* se_tpg_tfo; int acl_node_mutex; int acl_node_list; } ;
struct se_node_acl {int initiatorname; int queue_depth; scalar_t__ dynamic_node_acl; int acl_list; struct se_portal_group* se_tpg; } ;
struct TYPE_2__ {int fabric_name; int (* tpg_get_tag ) (struct se_portal_group*) ;} ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ,char*,int ,int ,int ) ;
 int FUNC_4 (struct se_portal_group*) ;

__attribute__((used)) static void FUNC_5(struct se_node_acl *VAR_0)
{
 struct se_portal_group *VAR_1 = VAR_0->se_tpg;

 FUNC_1(&VAR_1->acl_node_mutex);
 FUNC_0(&VAR_0->acl_list, &VAR_1->acl_node_list);
 FUNC_2(&VAR_1->acl_node_mutex);

 FUNC_3("%s_TPG[%hu] - Added %s ACL with TCQ Depth: %d for %s"
  " Initiator Node: %s\n",
  VAR_1->se_tpg_tfo->fabric_name,
  VAR_1->se_tpg_tfo->tpg_get_tag(VAR_1),
  VAR_0->dynamic_node_acl ? "DYNAMIC" : "",
  VAR_0->queue_depth,
  VAR_1->se_tpg_tfo->fabric_name,
  VAR_0->initiatorname);
}

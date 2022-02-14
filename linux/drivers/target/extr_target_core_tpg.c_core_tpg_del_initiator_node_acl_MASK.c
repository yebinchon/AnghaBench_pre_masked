
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_portal_group {TYPE_1__* se_tpg_tfo; int acl_node_mutex; } ;
struct se_node_acl {int initiatorname; int queue_depth; int acl_free_comp; int acl_list; scalar_t__ dynamic_node_acl; struct se_portal_group* se_tpg; } ;
struct TYPE_2__ {int fabric_name; int (* tpg_get_tag ) (struct se_portal_group*) ;} ;


 int FUNC_0 (struct se_node_acl*,struct se_portal_group*) ;
 int FUNC_1 (struct se_node_acl*) ;
 int FUNC_2 (struct se_node_acl*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_7 (struct se_portal_group*) ;
 int FUNC_8 (struct se_node_acl*) ;
 int FUNC_9 (struct se_node_acl*) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct se_node_acl *VAR_0)
{
 struct se_portal_group *VAR_1 = VAR_0->se_tpg;

 FUNC_4(&VAR_1->acl_node_mutex);
 if (VAR_0->dynamic_node_acl)
  VAR_0->dynamic_node_acl = 0;
 FUNC_3(&VAR_0->acl_list);
 FUNC_5(&VAR_1->acl_node_mutex);

 FUNC_9(VAR_0);

 FUNC_8(VAR_0);




 FUNC_10(&VAR_0->acl_free_comp);

 FUNC_1(VAR_0);
 FUNC_0(VAR_0, VAR_1);

 FUNC_6("%s_TPG[%hu] - Deleted ACL with TCQ Depth: %d for %s"
  " Initiator Node: %s\n", VAR_1->se_tpg_tfo->fabric_name,
  VAR_1->se_tpg_tfo->tpg_get_tag(VAR_1), VAR_0->queue_depth,
  VAR_1->se_tpg_tfo->fabric_name, VAR_0->initiatorname);

 FUNC_2(VAR_0);
}

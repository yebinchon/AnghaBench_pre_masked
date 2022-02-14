
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct se_node_acl {int initiatorname; int queue_depth; struct se_portal_group* se_tpg; } ;
struct TYPE_2__ {int (* tpg_get_tag ) (struct se_portal_group*) ;int fabric_name; } ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (struct se_portal_group*) ;
 int FUNC_2 (struct se_portal_group*,struct se_node_acl*,int ) ;
 int FUNC_3 (struct se_node_acl*) ;

int FUNC_4(
 struct se_node_acl *VAR_0,
 u32 VAR_1)
{
 struct se_portal_group *VAR_2 = VAR_0->se_tpg;






 if (VAR_0->queue_depth == VAR_1)
  return 0;





 FUNC_2(VAR_2, VAR_0, VAR_1);




 FUNC_3(VAR_0);

 FUNC_0("Successfully changed queue depth to: %d for Initiator"
  " Node: %s on %s Target Portal Group: %u\n", VAR_0->queue_depth,
  VAR_0->initiatorname, VAR_2->se_tpg_tfo->fabric_name,
  VAR_2->se_tpg_tfo->tpg_get_tag(VAR_2));

 return 0;
}

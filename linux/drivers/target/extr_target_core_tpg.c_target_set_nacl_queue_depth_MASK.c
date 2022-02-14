
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct se_node_acl {int queue_depth; int initiatorname; } ;
struct TYPE_2__ {int fabric_name; } ;


 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct se_portal_group *VAR_0,
       struct se_node_acl *VAR_1, u32 VAR_2)
{
 VAR_1->queue_depth = VAR_2;

 if (!VAR_1->queue_depth) {
  FUNC_0("Queue depth for %s Initiator Node: %s is 0,"
   "defaulting to 1.\n", VAR_0->se_tpg_tfo->fabric_name,
   VAR_1->initiatorname);
  VAR_1->queue_depth = 1;
 }
}

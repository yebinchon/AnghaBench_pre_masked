
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_portal_group {int acl_node_mutex; TYPE_1__* se_tpg_tfo; } ;
struct se_node_acl {scalar_t__ dynamic_node_acl; } ;
struct TYPE_2__ {int (* tpg_get_tag ) (struct se_portal_group*) ;int fabric_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct se_node_acl* FUNC_0 (int ) ;
 struct se_node_acl* FUNC_1 (struct se_portal_group*,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int ,char const*) ;
 int FUNC_5 (char*,int ,char const*,int ) ;
 int FUNC_6 (struct se_portal_group*) ;
 int FUNC_7 (struct se_portal_group*) ;
 int FUNC_8 (struct se_node_acl*) ;
 struct se_node_acl* FUNC_9 (struct se_portal_group*,char const*) ;

struct se_node_acl *FUNC_10(
 struct se_portal_group *VAR_2,
 const char *VAR_3)
{
 struct se_node_acl *VAR_4;

 FUNC_2(&VAR_2->acl_node_mutex);
 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4) {
  if (VAR_4->dynamic_node_acl) {
   VAR_4->dynamic_node_acl = 0;
   FUNC_4("%s_TPG[%u] - Replacing dynamic ACL"
    " for %s\n", VAR_2->se_tpg_tfo->fabric_name,
    VAR_2->se_tpg_tfo->tpg_get_tag(VAR_2), VAR_3);
   FUNC_3(&VAR_2->acl_node_mutex);
   return VAR_4;
  }

  FUNC_5("ACL entry for %s Initiator"
   " Node %s already exists for TPG %u, ignoring"
   " request.\n", VAR_2->se_tpg_tfo->fabric_name,
   VAR_3, VAR_2->se_tpg_tfo->tpg_get_tag(VAR_2));
  FUNC_3(&VAR_2->acl_node_mutex);
  return FUNC_0(-VAR_0);
 }
 FUNC_3(&VAR_2->acl_node_mutex);

 VAR_4 = FUNC_9(VAR_2, VAR_3);
 if (!VAR_4)
  return FUNC_0(-VAR_1);

 FUNC_8(VAR_4);
 return VAR_4;
}

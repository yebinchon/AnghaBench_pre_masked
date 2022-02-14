
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_core_fabric_ops {int (* tpg_check_demo_mode_cache ) (struct se_portal_group*) ;} ;
struct se_session {int cmd_count; scalar_t__ sess_cmd_map; int sess_tag_pool; struct se_node_acl* se_node_acl; } ;
struct se_portal_group {int acl_node_mutex; struct target_core_fabric_ops* se_tpg_tfo; } ;
struct se_node_acl {int dynamic_stop; int acl_list; int nacl_sess_lock; int acl_sess_list; scalar_t__ dynamic_node_acl; struct se_portal_group* se_tpg; } ;


 int FUNC_0 (int ,struct se_session*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct se_portal_group*) ;
 int FUNC_11 (struct se_node_acl*) ;

void FUNC_12(struct se_session *VAR_1)
{
 struct se_node_acl *VAR_2 = VAR_1->se_node_acl;





 if (VAR_2) {
  struct se_portal_group *VAR_3 = VAR_2->se_tpg;
  const struct target_core_fabric_ops *VAR_4 = VAR_3->se_tpg_tfo;
  unsigned long VAR_5;

  VAR_1->se_node_acl = ((void*)0);






  FUNC_4(&VAR_3->acl_node_mutex);
  if (VAR_2->dynamic_node_acl &&
      !VAR_4->tpg_check_demo_mode_cache(VAR_3)) {
   FUNC_8(&VAR_2->nacl_sess_lock, VAR_5);
   if (FUNC_3(&VAR_2->acl_sess_list))
    VAR_2->dynamic_stop = 1;
   FUNC_9(&VAR_2->nacl_sess_lock, VAR_5);

   if (VAR_2->dynamic_stop)
    FUNC_2(&VAR_2->acl_list);
  }
  FUNC_5(&VAR_3->acl_node_mutex);

  if (VAR_2->dynamic_stop)
   FUNC_11(VAR_2);

  FUNC_11(VAR_2);
 }
 if (VAR_1->sess_cmd_map) {
  FUNC_7(&VAR_1->sess_tag_pool);
  FUNC_1(VAR_1->sess_cmd_map);
 }
 FUNC_6(&VAR_1->cmd_count);
 FUNC_0(VAR_0, VAR_1);
}

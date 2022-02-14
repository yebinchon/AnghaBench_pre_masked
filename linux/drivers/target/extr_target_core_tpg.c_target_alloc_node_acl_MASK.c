
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct se_node_acl {int acl_index; struct se_portal_group* se_tpg; int initiatorname; int acl_pr_ref_count; int lun_entry_mutex; int nacl_sess_lock; int acl_free_comp; int acl_kref; int lun_entry_hlist; int acl_sess_list; int acl_list; } ;
struct TYPE_2__ {int (* tpg_get_default_depth ) (struct se_portal_group*) ;int (* set_default_node_attributes ) (struct se_node_acl*) ;int node_acl_size; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct se_node_acl* FUNC_5 (int ,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,char*,unsigned char const*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct se_portal_group*) ;
 int FUNC_12 (struct se_node_acl*) ;
 int FUNC_13 (struct se_portal_group*,struct se_node_acl*,int) ;

__attribute__((used)) static struct se_node_acl *FUNC_14(struct se_portal_group *VAR_3,
  const unsigned char *VAR_4)
{
 struct se_node_acl *VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_5(FUNC_6(sizeof(*VAR_5), VAR_3->se_tpg_tfo->node_acl_size),
   VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_1(&VAR_5->acl_list);
 FUNC_1(&VAR_5->acl_sess_list);
 FUNC_0(&VAR_5->lun_entry_hlist);
 FUNC_4(&VAR_5->acl_kref);
 FUNC_3(&VAR_5->acl_free_comp);
 FUNC_10(&VAR_5->nacl_sess_lock);
 FUNC_7(&VAR_5->lun_entry_mutex);
 FUNC_2(&VAR_5->acl_pr_ref_count, 0);

 if (VAR_3->se_tpg_tfo->tpg_get_default_depth)
  VAR_6 = VAR_3->se_tpg_tfo->tpg_get_default_depth(VAR_3);
 else
  VAR_6 = 1;
 FUNC_13(VAR_3, VAR_5, VAR_6);

 FUNC_9(VAR_5->initiatorname, VAR_2, "%s", VAR_4);
 VAR_5->se_tpg = VAR_3;
 VAR_5->acl_index = FUNC_8(VAR_1);

 VAR_3->se_tpg_tfo->set_default_node_attributes(VAR_5);

 return VAR_5;
}

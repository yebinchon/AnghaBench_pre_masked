
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct se_wwn {TYPE_1__* wwn_tf; } ;
struct se_portal_group {int proto_id; TYPE_2__* se_tpg_tfo; int se_tpg_node; int tpg_virt_lun0; int acl_node_mutex; int tpg_lun_mutex; int session_lock; int tpg_sess_list; int acl_node_list; int tpg_pr_ref_count; struct se_wwn* se_tpg_wwn; int tpg_lun_hlist; } ;
struct TYPE_4__ {int (* tpg_get_tag ) (struct se_portal_group*) ;int * (* tpg_get_wwn ) (struct se_portal_group*) ;int fabric_name; } ;
struct TYPE_3__ {TYPE_2__* tf_ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct se_portal_group*,int ,int,int ) ;
 int FUNC_6 (struct se_portal_group*,int ) ;
 int VAR_1 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int ,int *,int,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (struct se_portal_group*) ;
 int * FUNC_16 (struct se_portal_group*) ;
 int FUNC_17 (struct se_portal_group*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_18(
 struct se_wwn *VAR_4,
 struct se_portal_group *VAR_5,
 int VAR_6)
{
 int VAR_7;

 if (!VAR_5)
  return -VAR_0;
 if (VAR_4)
  VAR_5->se_tpg_tfo = VAR_4->wwn_tf->tf_ops;

 if (!VAR_5->se_tpg_tfo) {
  FUNC_11("Unable to locate se_tpg->se_tpg_tfo pointer\n");
  return -VAR_0;
 }

 FUNC_0(&VAR_5->tpg_lun_hlist);
 VAR_5->proto_id = VAR_6;
 VAR_5->se_tpg_wwn = VAR_4;
 FUNC_4(&VAR_5->tpg_pr_ref_count, 0);
 FUNC_1(&VAR_5->acl_node_list);
 FUNC_1(&VAR_5->se_tpg_node);
 FUNC_1(&VAR_5->tpg_sess_list);
 FUNC_13(&VAR_5->session_lock);
 FUNC_9(&VAR_5->tpg_lun_mutex);
 FUNC_9(&VAR_5->acl_node_mutex);

 if (VAR_5->proto_id >= 0) {
  VAR_5->tpg_virt_lun0 = FUNC_6(VAR_5, 0);
  if (FUNC_2(VAR_5->tpg_virt_lun0))
   return FUNC_3(VAR_5->tpg_virt_lun0);

  VAR_7 = FUNC_5(VAR_5, VAR_5->tpg_virt_lun0,
    1, VAR_1);
  if (VAR_7 < 0) {
   FUNC_7(VAR_5->tpg_virt_lun0);
   return VAR_7;
  }
 }

 FUNC_12(&VAR_3);
 FUNC_8(&VAR_5->se_tpg_node, &VAR_2);
 FUNC_14(&VAR_3);

 FUNC_10("TARGET_CORE[%s]: Allocated portal_group for endpoint: %s, "
   "Proto: %d, Portal Tag: %u\n", VAR_5->se_tpg_tfo->fabric_name,
  VAR_5->se_tpg_tfo->tpg_get_wwn(VAR_5) ?
  VAR_5->se_tpg_tfo->tpg_get_wwn(VAR_5) : ((void*)0),
  VAR_5->proto_id, VAR_5->se_tpg_tfo->tpg_get_tag(VAR_5));

 return 0;
}

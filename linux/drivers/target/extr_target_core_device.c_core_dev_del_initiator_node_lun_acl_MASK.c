
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct se_node_acl {int initiatorname; int lun_entry_mutex; } ;
struct se_lun_acl {int mapped_lun; struct se_node_acl* se_lun_nacl; } ;
struct se_lun {int unpacked_lun; struct se_portal_group* lun_tpg; } ;
struct se_dev_entry {int dummy; } ;
struct TYPE_2__ {int (* tpg_get_tag ) (struct se_portal_group*) ;int fabric_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct se_lun*,struct se_dev_entry*,struct se_node_acl*,struct se_portal_group*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct se_portal_group*) ;
 struct se_dev_entry* FUNC_5 (struct se_node_acl*,int ) ;

int FUNC_6(
 struct se_lun *VAR_1,
 struct se_lun_acl *VAR_2)
{
 struct se_portal_group *VAR_3 = VAR_1->lun_tpg;
 struct se_node_acl *VAR_4;
 struct se_dev_entry *VAR_5;

 VAR_4 = VAR_2->se_lun_nacl;
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(&VAR_4->lun_entry_mutex);
 VAR_5 = FUNC_5(VAR_4, VAR_2->mapped_lun);
 if (VAR_5)
  FUNC_0(VAR_1, VAR_5, VAR_4, VAR_3);
 FUNC_2(&VAR_4->lun_entry_mutex);

 FUNC_3("%s_TPG[%hu]_LUN[%llu] - Removed ACL for"
  " InitiatorNode: %s Mapped LUN: %llu\n",
  VAR_3->se_tpg_tfo->fabric_name,
  VAR_3->se_tpg_tfo->tpg_get_tag(VAR_3), VAR_1->unpacked_lun,
  VAR_4->initiatorname, VAR_2->mapped_lun);

 return 0;
}

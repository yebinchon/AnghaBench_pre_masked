
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct se_node_acl {int initiatorname; } ;
struct se_lun_acl {int mapped_lun; struct se_lun* se_lun; struct se_node_acl* se_lun_nacl; } ;
struct se_lun {int unpacked_lun; scalar_t__ lun_access_ro; int lun_se_dev; } ;
struct se_device {int dummy; } ;
struct TYPE_2__ {int (* tpg_get_tag ) (struct se_portal_group*) ;int fabric_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct se_lun*,struct se_lun_acl*,int ,int,struct se_node_acl*,struct se_portal_group*) ;
 int FUNC_1 (struct se_device*,struct se_portal_group*,struct se_lun*,struct se_node_acl*,int ) ;
 int FUNC_2 (char*,int ,int ,int ,int ,char*,int ) ;
 struct se_device* FUNC_3 (int ) ;
 int FUNC_4 (struct se_portal_group*) ;

int FUNC_5(
 struct se_portal_group *VAR_1,
 struct se_lun_acl *VAR_2,
 struct se_lun *VAR_3,
 bool VAR_4)
{
 struct se_node_acl *VAR_5 = VAR_2->se_lun_nacl;




 struct se_device *VAR_6 = FUNC_3(VAR_3->lun_se_dev);

 if (!VAR_5)
  return -VAR_0;

 if (VAR_3->lun_access_ro)
  VAR_4 = 1;

 VAR_2->se_lun = VAR_3;

 if (FUNC_0(VAR_3, VAR_2, VAR_2->mapped_lun,
   VAR_4, VAR_5, VAR_1) < 0)
  return -VAR_0;

 FUNC_2("%s_TPG[%hu]_LUN[%llu->%llu] - Added %s ACL for "
  " InitiatorNode: %s\n", VAR_1->se_tpg_tfo->fabric_name,
  VAR_1->se_tpg_tfo->tpg_get_tag(VAR_1), VAR_3->unpacked_lun, VAR_2->mapped_lun,
  VAR_4 ? "RO" : "RW",
  VAR_5->initiatorname);




 FUNC_1(VAR_6, VAR_1, VAR_3, VAR_5,
         VAR_2->mapped_lun);
 return 0;
}

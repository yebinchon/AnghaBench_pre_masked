
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct se_node_acl {int initiatorname; struct se_portal_group* se_tpg; } ;
struct se_lun_acl {int mapped_lun; struct se_node_acl* se_lun_nacl; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int fabric_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long,struct se_node_acl*) ;
 struct se_lun_acl* FUNC_1 (struct config_item*) ;
 int FUNC_2 (char const*,int ,unsigned long*) ;
 int FUNC_3 (char*,int ,int ,int ,char*) ;

__attribute__((used)) static ssize_t FUNC_4(
  struct config_item *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct se_lun_acl *VAR_4 = FUNC_1(VAR_1);
 struct se_node_acl *VAR_5 = VAR_4->se_lun_nacl;
 struct se_portal_group *VAR_6 = VAR_5->se_tpg;
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_2, 0, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if ((VAR_7 != 1) && (VAR_7 != 0))
  return -VAR_0;


 FUNC_0(VAR_4->mapped_lun, VAR_7, VAR_4->se_lun_nacl);

 FUNC_3("%s_ConfigFS: Changed Initiator ACL: %s"
  " Mapped LUN: %llu Write Protect bit to %s\n",
  VAR_6->se_tpg_tfo->fabric_name,
  VAR_5->initiatorname, VAR_4->mapped_lun, (VAR_7) ? "ON" : "OFF");

 return VAR_3;

}

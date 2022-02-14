
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct se_node_acl {struct se_portal_group* se_tpg; } ;
struct se_lun_acl {int mapped_lun; struct se_node_acl* se_lun_nacl; } ;
struct se_dev_entry {int dummy; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* tpg_get_tag ) (struct se_portal_group*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct se_lun_acl* FUNC_0 (struct config_item*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,char*,int) ;
 int FUNC_4 (struct se_portal_group*) ;
 int FUNC_5 (struct se_portal_group*) ;
 struct se_dev_entry* FUNC_6 (struct se_node_acl*,int ) ;

__attribute__((used)) static ssize_t FUNC_7(struct config_item *VAR_2,
  char *VAR_3)
{
 struct se_lun_acl *VAR_4 = FUNC_0(VAR_2);
 struct se_node_acl *VAR_5 = VAR_4->se_lun_nacl;
 struct se_dev_entry *VAR_6;
 struct se_portal_group *VAR_7;
 ssize_t VAR_8;

 FUNC_1();
 VAR_6 = FUNC_6(VAR_5, VAR_4->mapped_lun);
 if (!VAR_6) {
  FUNC_2();
  return -VAR_0;
 }
 VAR_7 = VAR_5->se_tpg;

 VAR_8 = FUNC_3(VAR_3, VAR_1, "%u\n", VAR_7->se_tpg_tfo->tpg_get_tag(VAR_7));
 FUNC_2();
 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_node_acl {int dummy; } ;
struct se_lun_acl {int mapped_lun; struct se_node_acl* se_lun_nacl; } ;
struct se_dev_entry {int lun_access_ro; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 struct se_lun_acl* FUNC_0 (struct config_item*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,int) ;
 struct se_dev_entry* FUNC_4 (struct se_node_acl*,int ) ;

__attribute__((used)) static ssize_t FUNC_5(
  struct config_item *VAR_0, char *VAR_1)
{
 struct se_lun_acl *VAR_2 = FUNC_0(VAR_0);
 struct se_node_acl *VAR_3 = VAR_2->se_lun_nacl;
 struct se_dev_entry *VAR_4;
 ssize_t VAR_5 = 0;

 FUNC_1();
 VAR_4 = FUNC_4(VAR_3, VAR_2->mapped_lun);
 if (VAR_4) {
  VAR_5 = FUNC_3(VAR_1, "%d\n", VAR_4->lun_access_ro);
 }
 FUNC_2();

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_node_acl {int dummy; } ;
struct se_lun_acl {int mapped_lun; struct se_node_acl* se_lun_nacl; } ;
struct se_lun {int lun_index; } ;
struct se_dev_entry {int se_lun; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct se_lun_acl* FUNC_0 (struct config_item*) ;
 struct se_lun* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ,char*,int) ;
 struct se_dev_entry* FUNC_5 (struct se_node_acl*,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct config_item *VAR_2,
  char *VAR_3)
{
 struct se_lun_acl *VAR_4 = FUNC_0(VAR_2);
 struct se_node_acl *VAR_5 = VAR_4->se_lun_nacl;
 struct se_dev_entry *VAR_6;
 struct se_lun *VAR_7;
 ssize_t VAR_8;

 FUNC_2();
 VAR_6 = FUNC_5(VAR_5, VAR_4->mapped_lun);
 if (!VAR_6) {
  FUNC_3();
  return -VAR_0;
 }
 VAR_7 = FUNC_1(VAR_6->se_lun);

 VAR_8 = FUNC_4(VAR_3, VAR_1, "%u\n", VAR_7->lun_index);
 FUNC_3();
 return VAR_8;
}

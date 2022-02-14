
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct se_node_acl {int dummy; } ;
struct se_lun_acl {int mapped_lun; struct se_node_acl* se_lun_nacl; } ;
struct se_dev_entry {int write_bytes; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct se_lun_acl* FUNC_1 (struct config_item*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ,char*,int) ;
 struct se_dev_entry* FUNC_5 (struct se_node_acl*,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct config_item *VAR_2,
  char *VAR_3)
{
 struct se_lun_acl *VAR_4 = FUNC_1(VAR_2);
 struct se_node_acl *VAR_5 = VAR_4->se_lun_nacl;
 struct se_dev_entry *VAR_6;
 ssize_t VAR_7;

 FUNC_2();
 VAR_6 = FUNC_5(VAR_5, VAR_4->mapped_lun);
 if (!VAR_6) {
  FUNC_3();
  return -VAR_0;
 }

 VAR_7 = FUNC_4(VAR_3, VAR_1, "%u\n",
        (u32)(FUNC_0(&VAR_6->write_bytes) >> 20));
 FUNC_3();
 return VAR_7;
}

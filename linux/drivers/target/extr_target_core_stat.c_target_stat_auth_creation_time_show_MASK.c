
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct se_node_acl {int dummy; } ;
struct se_lun_acl {int mapped_lun; struct se_node_acl* se_lun_nacl; } ;
struct se_dev_entry {scalar_t__ creation_time; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct se_lun_acl* FUNC_0 (struct config_item*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,char*,int) ;
 struct se_dev_entry* FUNC_4 (struct se_node_acl*,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_4,
  char *VAR_5)
{
 struct se_lun_acl *VAR_6 = FUNC_0(VAR_4);
 struct se_node_acl *VAR_7 = VAR_6->se_lun_nacl;
 struct se_dev_entry *VAR_8;
 ssize_t VAR_9;

 FUNC_1();
 VAR_8 = FUNC_4(VAR_7, VAR_6->mapped_lun);
 if (!VAR_8) {
  FUNC_2();
  return -VAR_0;
 }

 VAR_9 = FUNC_3(VAR_5, VAR_3, "%u\n", (u32)(((u32)VAR_8->creation_time -
    VAR_2) * 100 / VAR_1));
 FUNC_2();
 return VAR_9;
}

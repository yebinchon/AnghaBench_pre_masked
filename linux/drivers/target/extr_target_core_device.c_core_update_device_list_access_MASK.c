
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct se_node_acl {int lun_entry_mutex; } ;
struct se_dev_entry {int lun_access_ro; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct se_dev_entry* FUNC_2 (struct se_node_acl*,int ) ;

void FUNC_3(
 u64 VAR_0,
 bool VAR_1,
 struct se_node_acl *VAR_2)
{
 struct se_dev_entry *VAR_3;

 FUNC_0(&VAR_2->lun_entry_mutex);
 VAR_3 = FUNC_2(VAR_2, VAR_0);
 if (VAR_3)
  VAR_3->lun_access_ro = VAR_1;
 FUNC_1(&VAR_2->lun_entry_mutex);
}

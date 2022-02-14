
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct se_node_acl {int dummy; } ;
struct se_dev_entry {int dummy; } ;


 int FUNC_0 (struct se_dev_entry*,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct se_dev_entry* FUNC_3 (struct se_node_acl*,int ) ;

void FUNC_4(struct se_node_acl *VAR_0,
       u32 VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct se_dev_entry *VAR_4;

 if (!VAR_0)
  return;

 FUNC_1();
 VAR_4 = FUNC_3(VAR_0, VAR_1);
 if (!VAR_4) {
  FUNC_2();
  return;
 }

 FUNC_0(VAR_4, VAR_2, VAR_3);
 FUNC_2();
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct t10_pr_registration {int dummy; } ;
struct se_node_acl {int dummy; } ;
struct se_lun {int dummy; } ;
struct se_device {int dummy; } ;
struct se_dev_entry {int dummy; } ;
typedef enum register_type { ____Placeholder_register_type } register_type ;


 int VAR_0 ;
 int FUNC_0 (struct se_device*,struct se_node_acl*,struct t10_pr_registration*,int,int) ;
 struct t10_pr_registration* FUNC_1 (struct se_device*,struct se_node_acl*,struct se_lun*,struct se_dev_entry*,int ,unsigned char*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(
 struct se_device *VAR_1,
 struct se_node_acl *VAR_2,
 struct se_lun *VAR_3,
 struct se_dev_entry *VAR_4,
 u64 VAR_5,
 unsigned char *VAR_6,
 u64 VAR_7,
 int VAR_8,
 int VAR_9,
 enum register_type VAR_10,
 int VAR_11)
{
 struct t10_pr_registration *VAR_12;

 VAR_12 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
       VAR_6, VAR_7, VAR_8,
       VAR_9);
 if (!VAR_12)
  return -VAR_0;

 FUNC_0(VAR_1, VAR_2, VAR_12,
   VAR_10, VAR_11);
 return 0;
}

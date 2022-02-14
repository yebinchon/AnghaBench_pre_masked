
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_rule_info {int act_block; } ;
struct mlxsw_sp2_acl_tcam_region {int aregion; } ;
struct mlxsw_sp2_acl_tcam_entry {int aentry; int act_block; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,int *,int *,struct mlxsw_sp_acl_rule_info*) ;

__attribute__((used)) static int
FUNC_1(struct mlxsw_sp *VAR_0,
     void *VAR_1, void *VAR_2,
     struct mlxsw_sp_acl_rule_info *VAR_3)
{
 struct mlxsw_sp2_acl_tcam_region *VAR_4 = VAR_1;
 struct mlxsw_sp2_acl_tcam_entry *VAR_5 = VAR_2;

 VAR_5->act_block = VAR_3->act_block;
 return FUNC_0(VAR_0,
             &VAR_4->aregion,
             &VAR_5->aentry, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_rule_info {int dummy; } ;
struct mlxsw_sp1_acl_tcam_region {int cregion; } ;
struct mlxsw_sp1_acl_tcam_entry {int centry; } ;
struct mlxsw_sp1_acl_tcam_chunk {int cchunk; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,int *,int *,int *,struct mlxsw_sp_acl_rule_info*,int) ;

__attribute__((used)) static int FUNC_1(struct mlxsw_sp *VAR_0,
     void *VAR_1, void *VAR_2,
     void *VAR_3,
     struct mlxsw_sp_acl_rule_info *VAR_4)
{
 struct mlxsw_sp1_acl_tcam_region *VAR_5 = VAR_1;
 struct mlxsw_sp1_acl_tcam_chunk *VAR_6 = VAR_2;
 struct mlxsw_sp1_acl_tcam_entry *VAR_7 = VAR_3;

 return FUNC_0(VAR_0, &VAR_5->cregion,
         &VAR_6->cchunk, &VAR_7->centry,
         VAR_4, 0);
}

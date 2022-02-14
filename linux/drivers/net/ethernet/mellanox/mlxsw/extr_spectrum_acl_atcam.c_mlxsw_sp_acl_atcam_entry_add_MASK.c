
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_rule_info {int dummy; } ;
struct mlxsw_sp_acl_atcam_region {int cregion; } ;
struct mlxsw_sp_acl_atcam_entry {int centry; } ;
struct mlxsw_sp_acl_atcam_chunk {int cchunk; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_acl_atcam_region*,struct mlxsw_sp_acl_atcam_entry*,struct mlxsw_sp_acl_rule_info*) ;
 int FUNC_1 (struct mlxsw_sp*,int *,int *,int *,struct mlxsw_sp_acl_rule_info*,int) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_acl_atcam_region*) ;

int FUNC_3(struct mlxsw_sp *VAR_0,
     struct mlxsw_sp_acl_atcam_region *VAR_1,
     struct mlxsw_sp_acl_atcam_chunk *VAR_2,
     struct mlxsw_sp_acl_atcam_entry *VAR_3,
     struct mlxsw_sp_acl_rule_info *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4);
 if (!VAR_5)
  return 0;




 FUNC_2(VAR_0, VAR_1);
 VAR_5 = FUNC_1(VAR_0, &VAR_1->cregion,
        &VAR_2->cchunk, &VAR_3->centry,
        VAR_4, 1);
 if (!VAR_5)
  return 0;

 return VAR_5;
}

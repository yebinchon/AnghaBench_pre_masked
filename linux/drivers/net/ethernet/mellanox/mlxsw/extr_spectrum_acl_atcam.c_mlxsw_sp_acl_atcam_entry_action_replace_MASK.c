
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_rule_info {int dummy; } ;
struct mlxsw_sp_acl_atcam_region {int cregion; } ;
struct mlxsw_sp_acl_atcam_entry {int centry; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_acl_atcam_region*,struct mlxsw_sp_acl_atcam_entry*,struct mlxsw_sp_acl_rule_info*) ;
 scalar_t__ FUNC_1 (struct mlxsw_sp_acl_atcam_entry*) ;
 int FUNC_2 (struct mlxsw_sp*,int *,int *,struct mlxsw_sp_acl_rule_info*) ;

int
FUNC_3(struct mlxsw_sp *VAR_0,
     struct mlxsw_sp_acl_atcam_region *VAR_1,
     struct mlxsw_sp_acl_atcam_entry *VAR_2,
     struct mlxsw_sp_acl_rule_info *VAR_3)
{
 int VAR_4;

 if (FUNC_1(VAR_2))
  VAR_4 = FUNC_2(VAR_0,
             &VAR_1->cregion,
             &VAR_2->centry,
             VAR_3);
 else
  VAR_4 = FUNC_0(VAR_0,
        VAR_1, VAR_2,
        VAR_3);

 return VAR_4;
}

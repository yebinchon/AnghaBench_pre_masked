
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_erp_mask {int dummy; } ;
struct mlxsw_sp_acl_ctcam_region {int dummy; } ;
struct mlxsw_sp_acl_ctcam_entry {int dummy; } ;
struct mlxsw_sp_acl_atcam_region {int dummy; } ;
struct mlxsw_sp_acl_atcam_entry {struct mlxsw_sp_acl_erp_mask* erp_mask; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp_acl_erp_mask*) ;
 int FUNC_1 (struct mlxsw_sp_acl_erp_mask*) ;
 struct mlxsw_sp_acl_erp_mask* FUNC_2 (struct mlxsw_sp_acl_atcam_region*,char const*,int) ;
 struct mlxsw_sp_acl_atcam_entry* FUNC_3 (struct mlxsw_sp_acl_ctcam_entry*) ;
 struct mlxsw_sp_acl_atcam_region* FUNC_4 (struct mlxsw_sp_acl_ctcam_region*) ;

__attribute__((used)) static int
FUNC_5(struct mlxsw_sp_acl_ctcam_region *VAR_0,
     struct mlxsw_sp_acl_ctcam_entry *VAR_1,
     const char *VAR_2)
{
 struct mlxsw_sp_acl_atcam_region *VAR_3;
 struct mlxsw_sp_acl_atcam_entry *VAR_4;
 struct mlxsw_sp_acl_erp_mask *VAR_5;

 VAR_3 = FUNC_4(VAR_0);
 VAR_4 = FUNC_3(VAR_1);

 VAR_5 = FUNC_2(VAR_3, VAR_2, 1);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 VAR_4->erp_mask = VAR_5;

 return 0;
}

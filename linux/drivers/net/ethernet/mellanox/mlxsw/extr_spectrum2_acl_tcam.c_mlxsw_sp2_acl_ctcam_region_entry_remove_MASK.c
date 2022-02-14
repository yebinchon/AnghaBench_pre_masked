
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_ctcam_region {int dummy; } ;
struct mlxsw_sp_acl_ctcam_entry {int dummy; } ;
struct mlxsw_sp_acl_atcam_region {int dummy; } ;
struct mlxsw_sp_acl_atcam_entry {int erp_mask; } ;


 int FUNC_0 (struct mlxsw_sp_acl_atcam_region*,int ) ;
 struct mlxsw_sp_acl_atcam_entry* FUNC_1 (struct mlxsw_sp_acl_ctcam_entry*) ;
 struct mlxsw_sp_acl_atcam_region* FUNC_2 (struct mlxsw_sp_acl_ctcam_region*) ;

__attribute__((used)) static void
FUNC_3(struct mlxsw_sp_acl_ctcam_region *VAR_0,
     struct mlxsw_sp_acl_ctcam_entry *VAR_1)
{
 struct mlxsw_sp_acl_atcam_region *VAR_2;
 struct mlxsw_sp_acl_atcam_entry *VAR_3;

 VAR_2 = FUNC_2(VAR_0);
 VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_2, VAR_3->erp_mask);
}

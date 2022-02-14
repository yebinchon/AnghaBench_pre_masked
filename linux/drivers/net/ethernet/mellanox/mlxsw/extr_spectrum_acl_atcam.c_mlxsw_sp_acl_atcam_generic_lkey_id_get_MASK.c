
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxsw_sp_acl_atcam_lkey_id {int dummy; } ;
struct mlxsw_sp_acl_atcam_region_generic {struct mlxsw_sp_acl_atcam_lkey_id dummy_lkey_id; } ;
struct mlxsw_sp_acl_atcam_region {struct mlxsw_sp_acl_atcam_region_generic* priv; } ;



__attribute__((used)) static struct mlxsw_sp_acl_atcam_lkey_id *
FUNC_0(struct mlxsw_sp_acl_atcam_region *VAR_0,
           char *VAR_1, u8 VAR_2)
{
 struct mlxsw_sp_acl_atcam_region_generic *VAR_3;

 VAR_3 = VAR_0->priv;
 return &VAR_3->dummy_lkey_id;
}

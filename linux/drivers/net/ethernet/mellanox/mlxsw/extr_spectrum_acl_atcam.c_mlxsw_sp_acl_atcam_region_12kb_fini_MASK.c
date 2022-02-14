
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_atcam_region_12kb {struct mlxsw_sp_acl_atcam_region_12kb* used_lkey_id; int lkey_ht; } ;
struct mlxsw_sp_acl_atcam_region {struct mlxsw_sp_acl_atcam_region_12kb* priv; } ;


 int FUNC_0 (struct mlxsw_sp_acl_atcam_region_12kb*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct mlxsw_sp_acl_atcam_region *VAR_0)
{
 struct mlxsw_sp_acl_atcam_region_12kb *VAR_1 = VAR_0->priv;

 FUNC_1(&VAR_1->lkey_ht);
 FUNC_0(VAR_1->used_lkey_id);
 FUNC_0(VAR_1);
}

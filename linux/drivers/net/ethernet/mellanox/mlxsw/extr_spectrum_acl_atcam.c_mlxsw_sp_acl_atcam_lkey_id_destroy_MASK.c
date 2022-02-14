
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_sp_acl_atcam_region_12kb {int used_lkey_id; int lkey_ht; } ;
struct mlxsw_sp_acl_atcam_region {struct mlxsw_sp_acl_atcam_region_12kb* priv; } ;
struct mlxsw_sp_acl_atcam_lkey_id {int ht_node; int id; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mlxsw_sp_acl_atcam_lkey_id*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct mlxsw_sp_acl_atcam_region *VAR_1,
       struct mlxsw_sp_acl_atcam_lkey_id *VAR_2)
{
 struct mlxsw_sp_acl_atcam_region_12kb *VAR_3 = VAR_1->priv;
 u32 VAR_4 = VAR_2->id;

 FUNC_2(&VAR_3->lkey_ht, &VAR_2->ht_node,
          VAR_0);
 FUNC_1(VAR_2);
 FUNC_0(VAR_4, VAR_3->used_lkey_id);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlxsw_sp_acl_atcam_region_12kb {scalar_t__ max_lkey_id; int used_lkey_id; int lkey_ht; } ;
struct mlxsw_sp_acl_atcam_region {struct mlxsw_sp_acl_atcam_region_12kb* priv; } ;
struct mlxsw_sp_acl_atcam_lkey_id_ht_key {int dummy; } ;
struct mlxsw_sp_acl_atcam_lkey_id {int ht_node; int refcnt; int ht_key; scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlxsw_sp_acl_atcam_lkey_id* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct mlxsw_sp_acl_atcam_lkey_id*) ;
 struct mlxsw_sp_acl_atcam_lkey_id* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,struct mlxsw_sp_acl_atcam_lkey_id_ht_key*,int) ;
 int VAR_3 ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int *,int ) ;

__attribute__((used)) static struct mlxsw_sp_acl_atcam_lkey_id *
FUNC_9(struct mlxsw_sp_acl_atcam_region *VAR_4,
      struct mlxsw_sp_acl_atcam_lkey_id_ht_key *VAR_5)
{
 struct mlxsw_sp_acl_atcam_region_12kb *VAR_6 = VAR_4->priv;
 struct mlxsw_sp_acl_atcam_lkey_id *VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(VAR_6->used_lkey_id,
     VAR_6->max_lkey_id);
 if (VAR_8 < VAR_6->max_lkey_id)
  FUNC_2(VAR_8, VAR_6->used_lkey_id);
 else
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  VAR_9 = -VAR_1;
  goto err_lkey_id_alloc;
 }

 VAR_7->id = VAR_8;
 FUNC_6(&VAR_7->ht_key, VAR_5, sizeof(*VAR_5));
 FUNC_7(&VAR_7->refcnt, 1);

 VAR_9 = FUNC_8(&VAR_6->lkey_ht,
         &VAR_7->ht_node,
         VAR_3);
 if (VAR_9)
  goto err_rhashtable_insert;

 return VAR_7;

err_rhashtable_insert:
 FUNC_4(VAR_7);
err_lkey_id_alloc:
 FUNC_1(VAR_8, VAR_6->used_lkey_id);
 return FUNC_0(VAR_9);
}

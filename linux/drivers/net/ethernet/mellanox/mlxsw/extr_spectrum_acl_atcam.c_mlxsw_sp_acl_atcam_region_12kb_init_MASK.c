
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mlxsw_sp_acl_atcam_region_12kb {struct mlxsw_sp_acl_atcam_region_12kb* used_lkey_id; int max_lkey_id; int lkey_ht; } ;
struct mlxsw_sp_acl_atcam_region {struct mlxsw_sp_acl_atcam_region_12kb* priv; TYPE_1__* region; } ;
struct mlxsw_sp {int core; } ;
struct TYPE_2__ {struct mlxsw_sp* mlxsw_sp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mlxsw_sp_acl_atcam_region_12kb*) ;
 void* FUNC_4 (size_t,int ) ;
 int VAR_4 ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int
FUNC_6(struct mlxsw_sp_acl_atcam_region *VAR_5)
{
 struct mlxsw_sp *VAR_6 = VAR_5->region->mlxsw_sp;
 struct mlxsw_sp_acl_atcam_region_12kb *VAR_7;
 size_t VAR_8;
 u64 VAR_9;
 int VAR_10;

 if (!FUNC_2(VAR_6->core, VAR_0))
  return -VAR_1;

 VAR_9 = FUNC_1(VAR_6->core, VAR_0);
 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_8 = FUNC_0(VAR_9) * sizeof(unsigned long);
 VAR_7->used_lkey_id = FUNC_4(VAR_8, VAR_3);
 if (!VAR_7->used_lkey_id) {
  VAR_10 = -VAR_2;
  goto err_used_lkey_id_alloc;
 }

 VAR_10 = FUNC_5(&VAR_7->lkey_ht,
         &VAR_4);
 if (VAR_10)
  goto err_rhashtable_init;

 VAR_7->max_lkey_id = VAR_9;
 VAR_5->priv = VAR_7;

 return 0;

err_rhashtable_init:
 FUNC_3(VAR_7->used_lkey_id);
err_used_lkey_id_alloc:
 FUNC_3(VAR_7);
 return VAR_10;
}

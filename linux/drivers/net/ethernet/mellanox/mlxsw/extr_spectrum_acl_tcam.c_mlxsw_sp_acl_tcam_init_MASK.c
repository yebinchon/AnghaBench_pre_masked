
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct mlxsw_sp_acl_tcam_ops {int (* init ) (struct mlxsw_sp*,int ,struct mlxsw_sp_acl_tcam*) ;} ;
struct mlxsw_sp_acl_tcam {void* used_regions; void* used_groups; int priv; void* max_group_size; scalar_t__ max_groups; scalar_t__ max_regions; int vregion_list; int vregion_rehash_intrvl; int lock; } ;
struct mlxsw_sp {int core; struct mlxsw_sp_acl_tcam_ops* acl_tcam_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (size_t,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mlxsw_sp*,int ,struct mlxsw_sp_acl_tcam*) ;

int FUNC_7(struct mlxsw_sp *VAR_7,
      struct mlxsw_sp_acl_tcam *VAR_8)
{
 const struct mlxsw_sp_acl_tcam_ops *VAR_9 = VAR_7->acl_tcam_ops;
 u64 VAR_10;
 u64 VAR_11;
 u64 VAR_12;
 size_t VAR_13;
 int VAR_14;

 FUNC_5(&VAR_8->lock);
 VAR_8->vregion_rehash_intrvl =
   VAR_6;
 FUNC_1(&VAR_8->vregion_list);

 VAR_10 = FUNC_2(VAR_7->core,
           VAR_3);
 VAR_11 = FUNC_2(VAR_7->core, VAR_2);


 if (VAR_10 < VAR_11)
  VAR_11 = VAR_10;

 VAR_13 = sizeof(VAR_8->used_regions[0]) * FUNC_0(VAR_11);
 VAR_8->used_regions = FUNC_4(VAR_13, VAR_5);
 if (!VAR_8->used_regions)
  return -VAR_4;
 VAR_8->max_regions = VAR_11;

 VAR_12 = FUNC_2(VAR_7->core, VAR_0);
 VAR_13 = sizeof(VAR_8->used_groups[0]) * FUNC_0(VAR_12);
 VAR_8->used_groups = FUNC_4(VAR_13, VAR_5);
 if (!VAR_8->used_groups) {
  VAR_14 = -VAR_4;
  goto err_alloc_used_groups;
 }
 VAR_8->max_groups = VAR_12;
 VAR_8->max_group_size = FUNC_2(VAR_7->core,
       VAR_1);

 VAR_14 = VAR_9->init(VAR_7, VAR_8->priv, VAR_8);
 if (VAR_14)
  goto err_tcam_init;

 return 0;

err_tcam_init:
 FUNC_3(VAR_8->used_groups);
err_alloc_used_groups:
 FUNC_3(VAR_8->used_regions);
 return VAR_14;
}

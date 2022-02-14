
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_acl_tcam_vregion {TYPE_1__* region2; TYPE_1__* region; int tcam; } ;
struct mlxsw_sp_acl_tcam_rehash_ctx {int this_is_rollback; void* hints_priv; } ;
typedef void mlxsw_sp_acl_tcam_region ;
struct mlxsw_sp_acl_tcam_ops {int (* region_rehash_hints_put ) (void*) ;void* (* region_rehash_hints_get ) (int ) ;} ;
struct mlxsw_sp {struct mlxsw_sp_acl_tcam_ops* acl_tcam_ops; } ;
struct TYPE_2__ {int group; int priv; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct mlxsw_sp*,int ,void*,unsigned int,TYPE_1__*) ;
 void* FUNC_3 (struct mlxsw_sp*,int ,struct mlxsw_sp_acl_tcam_vregion*,void*) ;
 int FUNC_4 (struct mlxsw_sp*,void*) ;
 unsigned int FUNC_5 (struct mlxsw_sp_acl_tcam_vregion*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_vregion*) ;

__attribute__((used)) static int
FUNC_9(struct mlxsw_sp *VAR_0,
           struct mlxsw_sp_acl_tcam_vregion *VAR_1,
           struct mlxsw_sp_acl_tcam_rehash_ctx *VAR_2)
{
 const struct mlxsw_sp_acl_tcam_ops *VAR_3 = VAR_0->acl_tcam_ops;
 unsigned int VAR_4 = FUNC_5(VAR_1);
 struct mlxsw_sp_acl_tcam_region *VAR_5;
 void *VAR_6;
 int VAR_7;

 FUNC_8(VAR_0, VAR_1);

 VAR_6 = VAR_3->region_rehash_hints_get(VAR_1->region->priv);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_5 = FUNC_3(VAR_0, VAR_1->tcam,
           VAR_1, VAR_6);
 if (FUNC_0(VAR_5)) {
  VAR_7 = FUNC_1(VAR_5);
  goto err_region_create;
 }




 VAR_1->region2 = VAR_1->region;
 VAR_1->region = VAR_5;
 VAR_7 = FUNC_2(VAR_0,
          VAR_1->region2->group,
          VAR_5, VAR_4,
          VAR_1->region2);
 if (VAR_7)
  goto err_group_region_attach;

 VAR_2->hints_priv = VAR_6;
 VAR_2->this_is_rollback = 0;

 return 0;

err_group_region_attach:
 VAR_1->region = VAR_1->region2;
 VAR_1->region2 = ((void*)0);
 FUNC_4(VAR_0, VAR_5);
err_region_create:
 VAR_3->region_rehash_hints_put(VAR_6);
 return VAR_7;
}

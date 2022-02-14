
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_vregion {struct mlxsw_sp_acl_tcam_region* region2; } ;
struct mlxsw_sp_acl_tcam_rehash_ctx {int * hints_priv; } ;
struct mlxsw_sp_acl_tcam_region {int dummy; } ;
struct mlxsw_sp_acl_tcam_ops {int (* region_rehash_hints_put ) (int *) ;} ;
struct mlxsw_sp {struct mlxsw_sp_acl_tcam_ops* acl_tcam_ops; } ;


 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_region*) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_region*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct mlxsw_sp *VAR_0,
         struct mlxsw_sp_acl_tcam_vregion *VAR_1,
         struct mlxsw_sp_acl_tcam_rehash_ctx *VAR_2)
{
 struct mlxsw_sp_acl_tcam_region *VAR_3 = VAR_1->region2;
 const struct mlxsw_sp_acl_tcam_ops *VAR_4 = VAR_0->acl_tcam_ops;

 VAR_1->region2 = ((void*)0);
 FUNC_0(VAR_0, VAR_3);
 FUNC_1(VAR_0, VAR_3);
 VAR_4->region_rehash_hints_put(VAR_2->hints_priv);
 VAR_2->hints_priv = ((void*)0);
}

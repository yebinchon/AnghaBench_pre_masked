
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_sp_acl_tcam_ops {int region_rehash_hints_get; } ;
struct mlxsw_sp_acl_tcam {int vregion_rehash_intrvl; } ;
struct mlxsw_sp {struct mlxsw_sp_acl_tcam_ops* acl_tcam_ops; } ;


 scalar_t__ FUNC_0 (int) ;

u32 FUNC_1(struct mlxsw_sp *VAR_0,
      struct mlxsw_sp_acl_tcam *VAR_1)
{
 const struct mlxsw_sp_acl_tcam_ops *VAR_2 = VAR_0->acl_tcam_ops;
 u32 VAR_3;

 if (FUNC_0(!VAR_2->region_rehash_hints_get))
  return 0;
 VAR_3 = VAR_1->vregion_rehash_intrvl;
 return VAR_3;
}

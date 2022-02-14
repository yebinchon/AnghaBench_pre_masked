
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_ops {size_t priv_size; } ;
struct mlxsw_sp {struct mlxsw_sp_acl_tcam_ops* acl_tcam_ops; } ;



size_t FUNC_0(struct mlxsw_sp *VAR_0)
{
 const struct mlxsw_sp_acl_tcam_ops *VAR_1 = VAR_0->acl_tcam_ops;

 return VAR_1->priv_size;
}

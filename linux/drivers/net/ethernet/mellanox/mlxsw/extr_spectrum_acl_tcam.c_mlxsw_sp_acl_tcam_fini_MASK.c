
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_ops {int (* fini ) (struct mlxsw_sp*,int ) ;} ;
struct mlxsw_sp_acl_tcam {int used_regions; int used_groups; int priv; int lock; } ;
struct mlxsw_sp {struct mlxsw_sp_acl_tcam_ops* acl_tcam_ops; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlxsw_sp*,int ) ;

void FUNC_3(struct mlxsw_sp *VAR_0,
       struct mlxsw_sp_acl_tcam *VAR_1)
{
 const struct mlxsw_sp_acl_tcam_ops *VAR_2 = VAR_0->acl_tcam_ops;

 FUNC_1(&VAR_1->lock);
 VAR_2->fini(VAR_0, VAR_1->priv);
 FUNC_0(VAR_1->used_groups);
 FUNC_0(VAR_1->used_regions);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_mr_tcam_ops {int (* fini ) (int ) ;} ;
struct mlxsw_sp_mr_tcam {int priv; } ;
struct mlxsw_sp {struct mlxsw_sp_mr_tcam_ops* mr_tcam_ops; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp *VAR_0, void *VAR_1)
{
 const struct mlxsw_sp_mr_tcam_ops *VAR_2 = VAR_0->mr_tcam_ops;
 struct mlxsw_sp_mr_tcam *VAR_3 = VAR_1;

 VAR_2->fini(VAR_3->priv);
 FUNC_0(VAR_3->priv);
}

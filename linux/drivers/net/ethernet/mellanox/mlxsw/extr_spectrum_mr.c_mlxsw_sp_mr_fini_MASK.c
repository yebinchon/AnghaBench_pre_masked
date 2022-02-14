
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_mr {int priv; TYPE_1__* mr_ops; int stats_update_dw; } ;
struct mlxsw_sp {struct mlxsw_sp_mr* mr; } ;
struct TYPE_2__ {int (* fini ) (struct mlxsw_sp*,int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlxsw_sp_mr*) ;
 int FUNC_2 (struct mlxsw_sp*,int ) ;

void FUNC_3(struct mlxsw_sp *VAR_0)
{
 struct mlxsw_sp_mr *VAR_1 = VAR_0->mr;

 FUNC_0(&VAR_1->stats_update_dw);
 VAR_1->mr_ops->fini(VAR_0, VAR_1->priv);
 FUNC_1(VAR_1);
}

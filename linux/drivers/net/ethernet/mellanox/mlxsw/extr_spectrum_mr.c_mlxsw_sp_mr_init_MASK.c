
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_mr_ops {int (* init ) (struct mlxsw_sp*,int ) ;scalar_t__ priv_size; } ;
struct mlxsw_sp_mr {int stats_update_dw; int priv; int table_list; struct mlxsw_sp_mr_ops const* mr_ops; } ;
struct mlxsw_sp {struct mlxsw_sp_mr* mr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct mlxsw_sp_mr*) ;
 struct mlxsw_sp_mr* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_3 ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (struct mlxsw_sp*,int ) ;

int FUNC_7(struct mlxsw_sp *VAR_4,
       const struct mlxsw_sp_mr_ops *VAR_5)
{
 struct mlxsw_sp_mr *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(sizeof(*VAR_6) + VAR_5->priv_size, VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_6->mr_ops = VAR_5;
 VAR_4->mr = VAR_6;
 FUNC_1(&VAR_6->table_list);

 VAR_8 = VAR_5->init(VAR_4, VAR_6->priv);
 if (VAR_8)
  goto err;


 FUNC_0(&VAR_6->stats_update_dw, VAR_3);
 VAR_7 = FUNC_5(VAR_2);
 FUNC_4(&VAR_6->stats_update_dw, VAR_7);
 return 0;
err:
 FUNC_2(VAR_6);
 return VAR_8;
}

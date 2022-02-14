
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_mr_tcam_ops {int (* init ) (struct mlxsw_sp*,int ) ;int priv_size; } ;
struct mlxsw_sp_mr_tcam {int priv; } ;
struct mlxsw_sp {int core; struct mlxsw_sp_mr_tcam_ops* mr_tcam_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mlxsw_sp*,int ) ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp *VAR_4, void *VAR_5)
{
 const struct mlxsw_sp_mr_tcam_ops *VAR_6 = VAR_4->mr_tcam_ops;
 struct mlxsw_sp_mr_tcam *VAR_7 = VAR_5;
 int VAR_8;

 if (!FUNC_0(VAR_4->core, VAR_3))
  return -VAR_0;

 VAR_7->priv = FUNC_2(VAR_6->priv_size, VAR_2);
 if (!VAR_7->priv)
  return -VAR_1;

 VAR_8 = VAR_6->init(VAR_4, VAR_7->priv);
 if (VAR_8)
  goto err_init;
 return 0;

err_init:
 FUNC_1(VAR_7->priv);
 return VAR_8;
}

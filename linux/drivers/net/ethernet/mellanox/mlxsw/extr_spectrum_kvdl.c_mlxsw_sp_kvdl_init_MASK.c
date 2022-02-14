
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_kvdl_ops {int (* init ) (struct mlxsw_sp*,int ) ;scalar_t__ priv_size; } ;
struct mlxsw_sp_kvdl {int priv; struct mlxsw_sp_kvdl_ops const* kvdl_ops; } ;
struct mlxsw_sp {struct mlxsw_sp_kvdl* kvdl; struct mlxsw_sp_kvdl_ops* kvdl_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlxsw_sp_kvdl*) ;
 struct mlxsw_sp_kvdl* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct mlxsw_sp*,int ) ;

int FUNC_3(struct mlxsw_sp *VAR_2)
{
 const struct mlxsw_sp_kvdl_ops *VAR_3 = VAR_2->kvdl_ops;
 struct mlxsw_sp_kvdl *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(sizeof(*VAR_2->kvdl) + VAR_3->priv_size,
         VAR_1);
 if (!VAR_4)
  return -VAR_0;
 VAR_4->kvdl_ops = VAR_3;
 VAR_2->kvdl = VAR_4;

 VAR_5 = VAR_3->init(VAR_2, VAR_4->priv);
 if (VAR_5)
  goto err_init;
 return 0;

err_init:
 FUNC_0(VAR_4);
 return VAR_5;
}

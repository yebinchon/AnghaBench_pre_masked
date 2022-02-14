
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_nve_ops {int (* init ) (struct mlxsw_sp_nve*,struct mlxsw_sp_nve_config*) ;} ;
struct mlxsw_sp_nve_config {size_t type; } ;
struct mlxsw_sp_nve {int num_nve_tunnels; int tunnel_index; struct mlxsw_sp_nve_ops** nve_ops_arr; } ;
struct mlxsw_sp {struct mlxsw_sp_nve* nve; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp*,int ,int,int *) ;
 int FUNC_1 (struct mlxsw_sp*,int ,int,int ) ;
 int FUNC_2 (struct mlxsw_sp_nve*,struct mlxsw_sp_nve_config*) ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sp *VAR_1,
        struct mlxsw_sp_nve_config *VAR_2)
{
 struct mlxsw_sp_nve *VAR_3 = VAR_1->nve;
 const struct mlxsw_sp_nve_ops *VAR_4;
 int VAR_5;

 if (VAR_3->num_nve_tunnels++ != 0)
  return 0;

 VAR_5 = FUNC_0(VAR_1, VAR_0, 1,
      &VAR_3->tunnel_index);
 if (VAR_5)
  goto err_kvdl_alloc;

 VAR_4 = VAR_3->nve_ops_arr[VAR_2->type];
 VAR_5 = VAR_4->init(VAR_3, VAR_2);
 if (VAR_5)
  goto err_ops_init;

 return 0;

err_ops_init:
 FUNC_1(VAR_1, VAR_0, 1,
      VAR_3->tunnel_index);
err_kvdl_alloc:
 VAR_3->num_nve_tunnels--;
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_nve_ops {int (* fini ) (struct mlxsw_sp_nve*) ;} ;
struct TYPE_2__ {size_t type; } ;
struct mlxsw_sp_nve {int num_nve_tunnels; TYPE_1__ config; int tunnel_index; struct mlxsw_sp_nve_ops** nve_ops_arr; } ;
struct mlxsw_sp {struct mlxsw_sp_nve* nve; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (struct mlxsw_sp*,int ,int,int ) ;
 int FUNC_2 (struct mlxsw_sp_nve*) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_sp *VAR_1)
{
 struct mlxsw_sp_nve *VAR_2 = VAR_1->nve;
 const struct mlxsw_sp_nve_ops *VAR_3;

 VAR_3 = VAR_2->nve_ops_arr[VAR_2->config.type];

 if (VAR_1->nve->num_nve_tunnels == 1) {
  VAR_3->fini(VAR_2);
  FUNC_1(VAR_1, VAR_0, 1,
       VAR_2->tunnel_index);
  FUNC_0(&VAR_2->config, 0, sizeof(VAR_2->config));
 }
 VAR_2->num_nve_tunnels--;
}

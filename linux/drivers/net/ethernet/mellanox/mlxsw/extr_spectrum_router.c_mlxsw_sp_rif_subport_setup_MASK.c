
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_rif_subport {int system_port; int lag_id; scalar_t__ lag; int vid; int ref_count; } ;
struct mlxsw_sp_rif_params {int system_port; int lag_id; scalar_t__ lag; int vid; } ;
struct mlxsw_sp_rif {int dummy; } ;


 struct mlxsw_sp_rif_subport* FUNC_0 (struct mlxsw_sp_rif*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp_rif *VAR_0,
           const struct mlxsw_sp_rif_params *VAR_1)
{
 struct mlxsw_sp_rif_subport *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 FUNC_1(&VAR_2->ref_count, 1);
 VAR_2->vid = VAR_1->vid;
 VAR_2->lag = VAR_1->lag;
 if (VAR_1->lag)
  VAR_2->lag_id = VAR_1->lag_id;
 else
  VAR_2->system_port = VAR_1->system_port;
}

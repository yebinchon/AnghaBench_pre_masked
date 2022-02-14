
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_nve_config {int ul_sip; int ul_proto; int ul_tb_id; } ;
struct mlxsw_sp_nve {struct mlxsw_sp* mlxsw_sp; struct mlxsw_sp_nve_config config; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,int ) ;
 int FUNC_1 (struct mlxsw_sp*) ;
 int FUNC_2 (struct mlxsw_sp*,int ,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_sp_nve *VAR_0)
{
 struct mlxsw_sp_nve_config *VAR_1 = &VAR_0->config;
 struct mlxsw_sp *VAR_2 = VAR_0->mlxsw_sp;

 FUNC_2(VAR_2, VAR_1->ul_tb_id,
      VAR_1->ul_proto, &VAR_1->ul_sip);
 FUNC_1(VAR_2);
 FUNC_0(VAR_2, 0);
}

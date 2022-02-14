
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_rif_ipip_lb {int ul_rif_id; } ;
struct mlxsw_sp_rif {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int dummy; } ;


 struct mlxsw_sp_rif* FUNC_0 (struct mlxsw_sp*,int ) ;
 int FUNC_1 (struct mlxsw_sp_rif_ipip_lb*,int ,int ,int) ;
 struct mlxsw_sp_rif_ipip_lb* FUNC_2 (struct mlxsw_sp_rif*) ;
 int FUNC_3 (struct mlxsw_sp_rif*) ;

__attribute__((used)) static void FUNC_4(struct mlxsw_sp_rif *VAR_0)
{
 struct mlxsw_sp_rif_ipip_lb *VAR_1 = FUNC_2(VAR_0);
 struct mlxsw_sp *VAR_2 = VAR_0->mlxsw_sp;
 struct mlxsw_sp_rif *VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1->ul_rif_id);
 FUNC_1(VAR_1, 0, VAR_1->ul_rif_id, 0);
 FUNC_3(VAR_3);
}

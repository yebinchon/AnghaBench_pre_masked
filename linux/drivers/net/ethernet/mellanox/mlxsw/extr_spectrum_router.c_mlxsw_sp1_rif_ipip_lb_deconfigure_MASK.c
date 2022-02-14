
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_vr {int rif_count; int id; } ;
struct mlxsw_sp_rif_ipip_lb {size_t ul_vr_id; } ;
struct mlxsw_sp_rif {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {TYPE_1__* router; } ;
struct TYPE_2__ {struct mlxsw_sp_vr* vrs; } ;


 int FUNC_0 (struct mlxsw_sp_rif_ipip_lb*,int ,int ,int) ;
 struct mlxsw_sp_rif_ipip_lb* FUNC_1 (struct mlxsw_sp_rif*) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_vr*) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_sp_rif *VAR_0)
{
 struct mlxsw_sp_rif_ipip_lb *VAR_1 = FUNC_1(VAR_0);
 struct mlxsw_sp *VAR_2 = VAR_0->mlxsw_sp;
 struct mlxsw_sp_vr *VAR_3;

 VAR_3 = &VAR_2->router->vrs[VAR_1->ul_vr_id];
 FUNC_0(VAR_1, VAR_3->id, 0, 0);

 --VAR_3->rif_count;
 FUNC_2(VAR_2, VAR_3);
}

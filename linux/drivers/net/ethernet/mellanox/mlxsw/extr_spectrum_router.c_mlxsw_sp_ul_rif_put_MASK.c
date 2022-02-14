
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_vr {int rif_count; int ul_rif_refcnt; } ;
struct mlxsw_sp_rif {size_t vr_id; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {TYPE_1__* router; } ;
struct TYPE_2__ {struct mlxsw_sp_vr* vrs; } ;


 int FUNC_0 (struct mlxsw_sp_rif*) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_vr*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_sp_rif *VAR_0)
{
 struct mlxsw_sp *VAR_1 = VAR_0->mlxsw_sp;
 struct mlxsw_sp_vr *VAR_2;

 VAR_2 = &VAR_1->router->vrs[VAR_0->vr_id];

 if (!FUNC_2(&VAR_2->ul_rif_refcnt))
  return;

 VAR_2->rif_count--;
 FUNC_0(VAR_0);
 FUNC_1(VAR_1, VAR_2);
}

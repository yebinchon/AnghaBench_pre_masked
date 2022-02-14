
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_vr {int rif_count; int * mr_table; } ;
struct mlxsw_sp_rif_ops {int (* deconfigure ) (struct mlxsw_sp_rif*) ;} ;
struct mlxsw_sp_rif {size_t vr_id; size_t rif_index; int dev; struct mlxsw_sp_fid* fid; struct mlxsw_sp* mlxsw_sp; struct mlxsw_sp_rif_ops* ops; } ;
struct mlxsw_sp_fid {int dummy; } ;
struct mlxsw_sp {TYPE_1__* router; } ;
struct TYPE_2__ {int ** rifs; struct mlxsw_sp_vr* vrs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlxsw_sp_rif*) ;
 int FUNC_2 (struct mlxsw_sp_fid*) ;
 int FUNC_3 (int ,struct mlxsw_sp_rif*) ;
 int FUNC_4 (struct mlxsw_sp_rif*) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_rif*) ;
 int FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_vr*) ;
 int FUNC_7 (struct mlxsw_sp_rif*) ;

__attribute__((used)) static void FUNC_8(struct mlxsw_sp_rif *VAR_1)
{
 const struct mlxsw_sp_rif_ops *VAR_2 = VAR_1->ops;
 struct mlxsw_sp *VAR_3 = VAR_1->mlxsw_sp;
 struct mlxsw_sp_fid *VAR_4 = VAR_1->fid;
 struct mlxsw_sp_vr *VAR_5;
 int VAR_6;

 FUNC_5(VAR_3, VAR_1);
 VAR_5 = &VAR_3->router->vrs[VAR_1->vr_id];

 FUNC_4(VAR_1);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_3(VAR_5->mr_table[VAR_6], VAR_1);
 VAR_2->deconfigure(VAR_1);
 if (VAR_4)

  FUNC_2(VAR_4);
 VAR_3->router->rifs[VAR_1->rif_index] = ((void*)0);
 FUNC_0(VAR_1->dev);
 FUNC_1(VAR_1);
 VAR_5->rif_count--;
 FUNC_6(VAR_3, VAR_5);
}

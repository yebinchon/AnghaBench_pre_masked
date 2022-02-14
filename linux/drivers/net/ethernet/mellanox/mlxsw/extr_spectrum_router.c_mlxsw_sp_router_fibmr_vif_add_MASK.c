
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int family; } ;
struct vif_entry_notifier_info {int vif_flags; int vif_index; int dev; TYPE_2__ info; int tb_id; } ;
struct mlxsw_sp_vr {int dummy; } ;
struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp_mr_table {int dummy; } ;
struct mlxsw_sp {TYPE_1__* router; } ;
struct TYPE_3__ {scalar_t__ aborted; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp_vr*) ;
 int FUNC_1 (struct mlxsw_sp_vr*) ;
 int FUNC_2 (struct mlxsw_sp_mr_table*,int ,int ,int ,struct mlxsw_sp_rif*) ;
 struct mlxsw_sp_rif* FUNC_3 (struct mlxsw_sp*,int ) ;
 struct mlxsw_sp_mr_table* FUNC_4 (struct mlxsw_sp_vr*,int ) ;
 struct mlxsw_sp_vr* FUNC_5 (struct mlxsw_sp*,int ,int *) ;

__attribute__((used)) static int
FUNC_6(struct mlxsw_sp *VAR_0,
         struct vif_entry_notifier_info *VAR_1)
{
 struct mlxsw_sp_mr_table *VAR_2;
 struct mlxsw_sp_rif *VAR_3;
 struct mlxsw_sp_vr *VAR_4;

 if (VAR_0->router->aborted)
  return 0;

 VAR_4 = FUNC_5(VAR_0, VAR_1->tb_id, ((void*)0));
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_2 = FUNC_4(VAR_4, VAR_1->info.family);
 VAR_3 = FUNC_3(VAR_0, VAR_1->dev);
 return FUNC_2(VAR_2, VAR_1->dev,
       VAR_1->vif_index,
       VAR_1->vif_flags, VAR_3);
}

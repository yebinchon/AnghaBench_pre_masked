
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_vr {int dummy; } ;
struct mlxsw_sp_mr_table {int dummy; } ;
struct mlxsw_sp {TYPE_1__* router; } ;
struct TYPE_4__ {int family; } ;
struct mfc_entry_notifier_info {int mfc; TYPE_2__ info; int tb_id; } ;
struct TYPE_3__ {scalar_t__ aborted; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp_mr_table*,int ) ;
 struct mlxsw_sp_mr_table* FUNC_2 (struct mlxsw_sp_vr*,int ) ;
 struct mlxsw_sp_vr* FUNC_3 (struct mlxsw_sp*,int ) ;
 int FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_vr*) ;

__attribute__((used)) static void FUNC_5(struct mlxsw_sp *VAR_0,
          struct mfc_entry_notifier_info *VAR_1)
{
 struct mlxsw_sp_mr_table *VAR_2;
 struct mlxsw_sp_vr *VAR_3;

 if (VAR_0->router->aborted)
  return;

 VAR_3 = FUNC_3(VAR_0, VAR_1->tb_id);
 if (FUNC_0(!VAR_3))
  return;

 VAR_2 = FUNC_2(VAR_3, VAR_1->info.family);
 FUNC_1(VAR_2, VAR_1->mfc);
 FUNC_4(VAR_0, VAR_3);
}

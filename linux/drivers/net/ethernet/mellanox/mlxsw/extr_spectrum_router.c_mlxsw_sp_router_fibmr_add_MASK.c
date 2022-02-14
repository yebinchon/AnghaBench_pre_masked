
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


 scalar_t__ FUNC_0 (struct mlxsw_sp_vr*) ;
 int FUNC_1 (struct mlxsw_sp_vr*) ;
 int FUNC_2 (struct mlxsw_sp_mr_table*,int ,int) ;
 struct mlxsw_sp_mr_table* FUNC_3 (struct mlxsw_sp_vr*,int ) ;
 struct mlxsw_sp_vr* FUNC_4 (struct mlxsw_sp*,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp *VAR_0,
         struct mfc_entry_notifier_info *VAR_1,
         bool VAR_2)
{
 struct mlxsw_sp_mr_table *VAR_3;
 struct mlxsw_sp_vr *VAR_4;

 if (VAR_0->router->aborted)
  return 0;

 VAR_4 = FUNC_4(VAR_0, VAR_1->tb_id, ((void*)0));
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_3 = FUNC_3(VAR_4, VAR_1->info.family);
 return FUNC_2(VAR_3, VAR_1->mfc, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mr_mfc {int dummy; } ;
struct mlxsw_sp_mr_table {int route_ht; TYPE_1__* ops; } ;
struct mlxsw_sp_mr_route_key {int dummy; } ;
struct mlxsw_sp_mr_route {int dummy; } ;
struct TYPE_2__ {int (* key_create ) (struct mlxsw_sp_mr_table*,struct mlxsw_sp_mr_route_key*,struct mr_mfc*) ;} ;


 int FUNC_0 (struct mlxsw_sp_mr_table*,struct mlxsw_sp_mr_route*) ;
 int VAR_0 ;
 struct mlxsw_sp_mr_route* FUNC_1 (int *,struct mlxsw_sp_mr_route_key*,int ) ;
 int FUNC_2 (struct mlxsw_sp_mr_table*,struct mlxsw_sp_mr_route_key*,struct mr_mfc*) ;

void FUNC_3(struct mlxsw_sp_mr_table *VAR_1,
      struct mr_mfc *VAR_2)
{
 struct mlxsw_sp_mr_route *VAR_3;
 struct mlxsw_sp_mr_route_key VAR_4;

 VAR_1->ops->key_create(VAR_1, &VAR_4, VAR_2);
 VAR_3 = FUNC_1(&VAR_1->route_ht, &VAR_4,
       VAR_0);
 if (VAR_3)
  FUNC_0(VAR_1, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp {int core; } ;
struct devlink {int dummy; } ;


 int FUNC_0 (struct devlink*,int *) ;
 int FUNC_1 (struct devlink*) ;
 int FUNC_2 (struct mlxsw_sp*) ;
 int FUNC_3 (struct mlxsw_sp*) ;
 int FUNC_4 (struct mlxsw_sp*) ;
 int VAR_0 ;
 int FUNC_5 (struct mlxsw_sp*) ;
 int FUNC_6 (struct mlxsw_sp*) ;
 int FUNC_7 (struct mlxsw_sp*) ;
 int FUNC_8 (struct mlxsw_sp*) ;
 struct devlink* FUNC_9 (int ) ;

int FUNC_10(struct mlxsw_sp *VAR_1)
{
 struct devlink *VAR_2 = FUNC_9(VAR_1->core);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2,
          &VAR_0);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3)
  goto err_erif_table_init;

 VAR_3 = FUNC_6(VAR_1);
 if (VAR_3)
  goto err_host4_table_init;

 VAR_3 = FUNC_8(VAR_1);
 if (VAR_3)
  goto err_host6_table_init;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3)
  goto err_adj_table_init;

 return 0;
err_adj_table_init:
 FUNC_7(VAR_1);
err_host6_table_init:
 FUNC_5(VAR_1);
err_host4_table_init:
 FUNC_3(VAR_1);
err_erif_table_init:
 FUNC_1(FUNC_9(VAR_1->core));
 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_erp_core {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_acl_atcam {struct mlxsw_sp_acl_erp_core* erp_core; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlxsw_sp_acl_erp_core*) ;
 struct mlxsw_sp_acl_erp_core* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_acl_erp_core*) ;

int FUNC_3(struct mlxsw_sp *VAR_2,
      struct mlxsw_sp_acl_atcam *VAR_3)
{
 struct mlxsw_sp_acl_erp_core *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;
 VAR_4->mlxsw_sp = VAR_2;
 VAR_3->erp_core = VAR_4;

 VAR_5 = FUNC_2(VAR_2, VAR_4);
 if (VAR_5)
  goto err_erp_tables_init;

 return 0;

err_erp_tables_init:
 FUNC_0(VAR_4);
 return VAR_5;
}

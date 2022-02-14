
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_port {int dummy; } ;
struct mlxsw_sp_acl_block_binding {int list; } ;
struct mlxsw_sp_acl_block {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp_acl_block_binding*) ;
 int FUNC_1 (int *) ;
 struct mlxsw_sp_acl_block_binding* FUNC_2 (struct mlxsw_sp_acl_block*,struct mlxsw_sp_port*,int) ;
 scalar_t__ FUNC_3 (struct mlxsw_sp_acl_block*) ;
 int FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_acl_block*,struct mlxsw_sp_acl_block_binding*) ;

int FUNC_5(struct mlxsw_sp *VAR_1,
         struct mlxsw_sp_acl_block *VAR_2,
         struct mlxsw_sp_port *VAR_3,
         bool VAR_4)
{
 struct mlxsw_sp_acl_block_binding *VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (!VAR_5)
  return -VAR_0;

 FUNC_1(&VAR_5->list);

 if (FUNC_3(VAR_2))
  FUNC_4(VAR_1, VAR_2, VAR_5);

 FUNC_0(VAR_5);
 return 0;
}

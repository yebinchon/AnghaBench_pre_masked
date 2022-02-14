
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp2_mr_tcam {int acl_block; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp2_mr_tcam*) ;
 int FUNC_1 (struct mlxsw_sp2_mr_tcam*) ;
 int FUNC_2 (struct mlxsw_sp2_mr_tcam*) ;
 int FUNC_3 (struct mlxsw_sp*,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp *VAR_1, void *VAR_2)
{
 struct mlxsw_sp2_mr_tcam *VAR_3 = VAR_2;
 int VAR_4;

 VAR_3->mlxsw_sp = VAR_1;
 VAR_3->acl_block = FUNC_3(VAR_1, ((void*)0));
 if (!VAR_3->acl_block)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  goto err_ipv4_init;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  goto err_ipv6_init;

 return 0;

err_ipv6_init:
 FUNC_0(VAR_3);
err_ipv4_init:
 FUNC_4(VAR_3->acl_block);
 return VAR_4;
}

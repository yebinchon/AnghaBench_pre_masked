
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_mr_route_key {int dummy; } ;
struct mlxsw_sp1_mr_tcam_route {int parman_item; } ;
struct mlxsw_sp1_mr_tcam {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct mlxsw_afa_block {int dummy; } ;
typedef enum mlxsw_sp_mr_route_prio { ____Placeholder_mlxsw_sp_mr_route_prio } mlxsw_sp_mr_route_prio ;


 int FUNC_0 (struct mlxsw_sp1_mr_tcam*,struct mlxsw_sp1_mr_tcam_route*,struct mlxsw_sp_mr_route_key*,int) ;
 int FUNC_1 (struct mlxsw_sp1_mr_tcam*,struct mlxsw_sp1_mr_tcam_route*,struct mlxsw_sp_mr_route_key*) ;
 int FUNC_2 (struct mlxsw_sp*,int *,struct mlxsw_sp_mr_route_key*,struct mlxsw_afa_block*) ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sp *VAR_0, void *VAR_1,
          void *VAR_2,
          struct mlxsw_sp_mr_route_key *VAR_3,
          struct mlxsw_afa_block *VAR_4,
          enum mlxsw_sp_mr_route_prio VAR_5)
{
 struct mlxsw_sp1_mr_tcam_route *VAR_6 = VAR_2;
 struct mlxsw_sp1_mr_tcam *VAR_7 = VAR_1;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_6,
            VAR_3, VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_0, &VAR_6->parman_item,
           VAR_3, VAR_4);
 if (VAR_8)
  goto err_route_replace;
 return 0;

err_route_replace:
 FUNC_1(VAR_7, VAR_6, VAR_3);
 return VAR_8;
}

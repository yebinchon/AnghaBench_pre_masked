
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_mr_route_key {int dummy; } ;
struct mlxsw_sp1_mr_tcam_route {int parman_item; } ;
struct mlxsw_sp1_mr_tcam {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp1_mr_tcam*,struct mlxsw_sp1_mr_tcam_route*,struct mlxsw_sp_mr_route_key*) ;
 int FUNC_1 (struct mlxsw_sp*,int *,struct mlxsw_sp_mr_route_key*) ;

__attribute__((used)) static void
FUNC_2(struct mlxsw_sp *VAR_0, void *VAR_1,
    void *VAR_2,
    struct mlxsw_sp_mr_route_key *VAR_3)
{
 struct mlxsw_sp1_mr_tcam_route *VAR_4 = VAR_2;
 struct mlxsw_sp1_mr_tcam *VAR_5 = VAR_1;

 FUNC_1(VAR_0, &VAR_4->parman_item, VAR_3);
 FUNC_0(VAR_5, VAR_4, VAR_3);
}

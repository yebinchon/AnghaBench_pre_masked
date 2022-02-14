
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_mr_route_key {int dummy; } ;
struct mlxsw_sp1_mr_tcam_route {int parman_item; } ;
struct mlxsw_sp {int dummy; } ;
struct mlxsw_afa_block {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,int *,struct mlxsw_sp_mr_route_key*,struct mlxsw_afa_block*) ;

__attribute__((used)) static int
FUNC_1(struct mlxsw_sp *VAR_0,
          void *VAR_1,
          struct mlxsw_sp_mr_route_key *VAR_2,
          struct mlxsw_afa_block *VAR_3)
{
 struct mlxsw_sp1_mr_tcam_route *VAR_4 = VAR_1;

 return FUNC_0(VAR_0, &VAR_4->parman_item,
            VAR_2, VAR_3);
}

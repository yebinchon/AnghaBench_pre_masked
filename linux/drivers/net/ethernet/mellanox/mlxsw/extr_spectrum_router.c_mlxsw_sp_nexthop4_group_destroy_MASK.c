
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_nexthop_group {int count; int adj_index_valid; struct mlxsw_sp_nexthop* nexthops; } ;
struct mlxsw_sp_nexthop {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlxsw_sp_nexthop_group*) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_nexthop*) ;
 int FUNC_4 (struct mlxsw_sp_nexthop_group*) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_nexthop_group*) ;
 int FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_nexthop_group*) ;

__attribute__((used)) static void
FUNC_7(struct mlxsw_sp *VAR_0,
    struct mlxsw_sp_nexthop_group *VAR_1)
{
 struct mlxsw_sp_nexthop *VAR_2;
 int VAR_3;

 FUNC_6(VAR_0, VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_1->count; VAR_3++) {
  VAR_2 = &VAR_1->nexthops[VAR_3];
  FUNC_3(VAR_0, VAR_2);
 }
 FUNC_5(VAR_0, VAR_1);
 FUNC_0(VAR_1->adj_index_valid);
 FUNC_1(FUNC_4(VAR_1));
 FUNC_2(VAR_1);
}

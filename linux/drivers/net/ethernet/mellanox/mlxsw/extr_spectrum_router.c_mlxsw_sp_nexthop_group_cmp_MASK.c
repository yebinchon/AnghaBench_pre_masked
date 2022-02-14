
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhashtable_compare_arg {struct mlxsw_sp_nexthop_group_cmp_arg* key; } ;
struct mlxsw_sp_nexthop_group_cmp_arg {int proto; int fib6_entry; int fi; } ;
struct mlxsw_sp_nexthop_group {int dummy; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp_nexthop_group const*) ;
 int FUNC_2 (struct mlxsw_sp_nexthop_group const*,int ) ;

__attribute__((used)) static int
FUNC_3(struct rhashtable_compare_arg *VAR_0, const void *VAR_1)
{
 const struct mlxsw_sp_nexthop_group_cmp_arg *VAR_2 = VAR_0->key;
 const struct mlxsw_sp_nexthop_group *VAR_3 = VAR_1;

 switch (VAR_2->proto) {
 case 129:
  return VAR_2->fi != FUNC_1(VAR_3);
 case 128:
  return !FUNC_2(VAR_3,
          VAR_2->fib6_entry);
 default:
  FUNC_0(1);
  return 1;
 }
}

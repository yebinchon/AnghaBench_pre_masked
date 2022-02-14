
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_nexthop_group {int count; struct mlxsw_sp_nexthop* nexthops; } ;
struct mlxsw_sp_nexthop {int ifindex; int nh_weight; scalar_t__ gw_addr; } ;
struct in6_addr {int dummy; } ;


 scalar_t__ FUNC_0 (struct in6_addr const*,struct in6_addr*) ;

__attribute__((used)) static bool
FUNC_1(const struct mlxsw_sp_nexthop_group *VAR_0,
        const struct in6_addr *VAR_1, int VAR_2,
        int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->count; VAR_4++) {
  const struct mlxsw_sp_nexthop *VAR_5;

  VAR_5 = &VAR_0->nexthops[VAR_4];
  if (VAR_5->ifindex == VAR_2 && VAR_5->nh_weight == VAR_3 &&
      FUNC_0(VAR_1, (struct in6_addr *) VAR_5->gw_addr))
   return 1;
 }

 return 0;
}

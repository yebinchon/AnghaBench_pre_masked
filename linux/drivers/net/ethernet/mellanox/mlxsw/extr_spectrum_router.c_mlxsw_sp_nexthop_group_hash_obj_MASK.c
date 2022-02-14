
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef unsigned int u32 ;
struct mlxsw_sp_nexthop_group {unsigned int count; struct mlxsw_sp_nexthop* nexthops; } ;
struct mlxsw_sp_nexthop {unsigned int ifindex; } ;
struct fib_info {int dummy; } ;
typedef int fi ;




 int FUNC_0 (int) ;
 unsigned int FUNC_1 (unsigned int*,int,unsigned int) ;
 struct fib_info* FUNC_2 (struct mlxsw_sp_nexthop_group const*) ;
 int FUNC_3 (struct mlxsw_sp_nexthop_group const*) ;

__attribute__((used)) static u32 FUNC_4(const void *VAR_0, u32 VAR_1, u32 VAR_2)
{
 const struct mlxsw_sp_nexthop_group *VAR_3 = VAR_0;
 const struct mlxsw_sp_nexthop *VAR_4;
 struct fib_info *VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 switch (FUNC_3(VAR_3)) {
 case 129:
  VAR_5 = FUNC_2(VAR_3);
  return FUNC_1(&VAR_5, sizeof(VAR_5), VAR_2);
 case 128:
  VAR_6 = VAR_3->count;
  for (VAR_7 = 0; VAR_7 < VAR_3->count; VAR_7++) {
   VAR_4 = &VAR_3->nexthops[VAR_7];
   VAR_6 ^= FUNC_1(&VAR_4->ifindex, sizeof(VAR_4->ifindex), VAR_2);
  }
  return FUNC_1(&VAR_6, sizeof(VAR_6), VAR_2);
 default:
  FUNC_0(1);
  return 0;
 }
}

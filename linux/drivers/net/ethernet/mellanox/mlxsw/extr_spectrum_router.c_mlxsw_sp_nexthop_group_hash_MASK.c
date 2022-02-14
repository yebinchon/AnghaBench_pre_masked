
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_sp_nexthop_group_cmp_arg {int proto; int fib6_entry; int fi; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static u32
FUNC_3(const void *VAR_0, u32 VAR_1, u32 VAR_2)
{
 const struct mlxsw_sp_nexthop_group_cmp_arg *VAR_3 = VAR_0;

 switch (VAR_3->proto) {
 case 129:
  return FUNC_1(&VAR_3->fi, sizeof(VAR_3->fi), VAR_2);
 case 128:
  return FUNC_2(VAR_3->fib6_entry, VAR_2);
 default:
  FUNC_0(1);
  return 0;
 }
}

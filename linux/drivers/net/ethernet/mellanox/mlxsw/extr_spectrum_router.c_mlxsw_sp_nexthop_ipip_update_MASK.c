
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlxsw_sp_nexthop {int num_adj_entries; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,scalar_t__,struct mlxsw_sp_nexthop*) ;

__attribute__((used)) static int FUNC_1(struct mlxsw_sp *VAR_0,
     u32 VAR_1,
     struct mlxsw_sp_nexthop *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_adj_entries; VAR_3++) {
  int VAR_4;

  VAR_4 = FUNC_0(VAR_0, VAR_1 + VAR_3,
           VAR_2);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}

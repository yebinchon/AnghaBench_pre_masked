
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_nexthop {struct mlxsw_sp_ipip_entry* ipip_entry; } ;
struct mlxsw_sp_ipip_entry {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp_nexthop*,int) ;

__attribute__((used)) static void FUNC_1(struct mlxsw_sp *VAR_0,
           struct mlxsw_sp_nexthop *VAR_1)
{
 struct mlxsw_sp_ipip_entry *VAR_2 = VAR_1->ipip_entry;

 if (!VAR_2)
  return;

 FUNC_0(VAR_1, 1);
 VAR_1->ipip_entry = ((void*)0);
}

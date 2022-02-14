
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_neigh_entry {int counter_valid; int counter_index; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,int ) ;

__attribute__((used)) static void
FUNC_1(struct mlxsw_sp *VAR_0,
       struct mlxsw_sp_neigh_entry *VAR_1)
{
 if (!VAR_1->counter_valid)
  return;
 FUNC_0(VAR_0,
       VAR_1->counter_index);
 VAR_1->counter_valid = 0;
}

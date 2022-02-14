
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_neigh_entry {int counter_valid; int counter_index; } ;
struct mlxsw_sp {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp*,int *) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_neigh_entry*) ;

__attribute__((used)) static void
FUNC_2(struct mlxsw_sp *VAR_0,
        struct mlxsw_sp_neigh_entry *VAR_1)
{
 if (!FUNC_1(VAR_0, VAR_1))
  return;

 if (FUNC_0(VAR_0, &VAR_1->counter_index))
  return;

 VAR_1->counter_valid = 1;
}

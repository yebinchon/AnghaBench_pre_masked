
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_nve_mc_list {int records_list; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_nve_mc_list*) ;

__attribute__((used)) static void
FUNC_2(struct mlxsw_sp *VAR_0,
    struct mlxsw_sp_nve_mc_list *VAR_1)
{
 if (!FUNC_0(&VAR_1->records_list))
  return;
 FUNC_1(VAR_0, VAR_1);
}

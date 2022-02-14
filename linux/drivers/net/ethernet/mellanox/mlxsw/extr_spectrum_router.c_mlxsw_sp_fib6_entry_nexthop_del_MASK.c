
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_rt6 {int list; } ;
struct mlxsw_sp_fib6_entry {int nrt6; } ;
struct mlxsw_sp {int dummy; } ;
struct fib6_info {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct mlxsw_sp_rt6* FUNC_2 (struct mlxsw_sp_fib6_entry*,struct fib6_info*) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_fib6_entry*) ;
 int FUNC_4 (struct mlxsw_sp_rt6*) ;

__attribute__((used)) static void
FUNC_5(struct mlxsw_sp *VAR_0,
    struct mlxsw_sp_fib6_entry *VAR_1,
    struct fib6_info **VAR_2, unsigned int VAR_3)
{
 struct mlxsw_sp_rt6 *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4 = FUNC_2(VAR_1,
          VAR_2[VAR_5]);
  if (FUNC_0(!VAR_4))
   continue;

  VAR_1->nrt6--;
  FUNC_1(&VAR_4->list);
  FUNC_4(VAR_4);
 }

 FUNC_3(VAR_0, VAR_1);
}

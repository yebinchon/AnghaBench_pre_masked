
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
struct mlxsw_sp_fib4_entry {TYPE_1__ common; } ;
struct mlxsw_sp {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlxsw_sp_fib4_entry*) ;
 int FUNC_1 (struct mlxsw_sp*,TYPE_1__*) ;
 int FUNC_2 (struct mlxsw_sp*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(struct mlxsw_sp *VAR_1,
    struct mlxsw_sp_fib4_entry *VAR_2)
{
 FUNC_2(VAR_1, &VAR_2->common);
 FUNC_0(VAR_2);

 if (VAR_2->common.type == VAR_0)
  FUNC_1(VAR_1, &VAR_2->common);
}

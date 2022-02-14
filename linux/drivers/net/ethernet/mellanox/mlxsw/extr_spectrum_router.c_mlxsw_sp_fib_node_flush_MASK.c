
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_fib_node {TYPE_1__* fib; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_2__ {int proto; } ;




 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_fib_node*) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_fib_node*) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp *VAR_0,
        struct mlxsw_sp_fib_node *VAR_1)
{
 switch (VAR_1->fib->proto) {
 case 129:
  FUNC_0(VAR_0, VAR_1);
  break;
 case 128:
  FUNC_1(VAR_0, VAR_1);
  break;
 }
}

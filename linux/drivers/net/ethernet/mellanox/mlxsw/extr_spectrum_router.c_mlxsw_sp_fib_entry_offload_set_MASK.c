
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_fib_entry {TYPE_2__* fib_node; } ;
struct TYPE_4__ {TYPE_1__* fib; } ;
struct TYPE_3__ {int proto; } ;




 int FUNC_0 (struct mlxsw_sp_fib_entry*) ;
 int FUNC_1 (struct mlxsw_sp_fib_entry*) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp_fib_entry *VAR_0)
{
 switch (VAR_0->fib_node->fib->proto) {
 case 129:
  FUNC_0(VAR_0);
  break;
 case 128:
  FUNC_1(VAR_0);
  break;
 }
}

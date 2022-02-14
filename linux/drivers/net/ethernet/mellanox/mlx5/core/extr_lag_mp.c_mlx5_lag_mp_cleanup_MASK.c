
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * notifier_call; } ;
struct lag_mp {TYPE_1__ fib_nb; } ;
struct mlx5_lag {struct lag_mp lag_mp; } ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct mlx5_lag *VAR_0)
{
 struct lag_mp *VAR_1 = &VAR_0->lag_mp;

 if (!VAR_1->fib_nb.notifier_call)
  return;

 FUNC_0(&VAR_1->fib_nb);
 VAR_1->fib_nb.notifier_call = ((void*)0);
}

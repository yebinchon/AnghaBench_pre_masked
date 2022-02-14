
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * notifier_call; } ;
struct lag_mp {TYPE_1__ fib_nb; } ;
struct mlx5_lag {struct lag_mp lag_mp; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;

int FUNC_1(struct mlx5_lag *VAR_2)
{
 struct lag_mp *VAR_3 = &VAR_2->lag_mp;
 int VAR_4;

 if (VAR_3->fib_nb.notifier_call)
  return 0;

 VAR_3->fib_nb.notifier_call = VAR_0;
 VAR_4 = FUNC_0(&VAR_3->fib_nb,
        VAR_1);
 if (VAR_4)
  VAR_3->fib_nb.notifier_call = ((void*)0);

 return VAR_4;
}

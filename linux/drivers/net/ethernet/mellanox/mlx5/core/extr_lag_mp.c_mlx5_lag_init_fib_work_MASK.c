
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_lag {int dummy; } ;
struct mlx5_fib_event_work {unsigned long event; struct mlx5_lag* ldev; int work; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct mlx5_fib_event_work* FUNC_2 (int,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct mlx5_fib_event_work *
FUNC_3(struct mlx5_lag *VAR_2, unsigned long VAR_3)
{
 struct mlx5_fib_event_work *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (FUNC_1(!VAR_4))
  return ((void*)0);

 FUNC_0(&VAR_4->work, VAR_1);
 VAR_4->ldev = VAR_2;
 VAR_4->event = VAR_3;

 return VAR_4;
}

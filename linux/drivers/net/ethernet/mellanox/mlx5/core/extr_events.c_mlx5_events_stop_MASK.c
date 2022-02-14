
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_events {int wq; TYPE_2__* notifiers; } ;
struct TYPE_3__ {struct mlx5_events* events; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;
struct TYPE_4__ {int nb; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx5_core_dev*,int *) ;

void FUNC_3(struct mlx5_core_dev *VAR_1)
{
 struct mlx5_events *VAR_2 = VAR_1->priv.events;
 int VAR_3;

 for (VAR_3 = FUNC_0(VAR_0) - 1; VAR_3 >= 0 ; VAR_3--)
  FUNC_2(VAR_1, &VAR_2->notifiers[VAR_3].nb);
 FUNC_1(VAR_2->wq);
}

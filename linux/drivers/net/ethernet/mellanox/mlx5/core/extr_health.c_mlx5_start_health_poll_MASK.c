
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int expires; } ;
struct mlx5_core_health {TYPE_3__ timer; int * health_counter; int * health; int flags; int fatal_error; } ;
struct TYPE_6__ {struct mlx5_core_health health; } ;
struct mlx5_core_dev {TYPE_1__* iseg; TYPE_2__ priv; } ;
struct TYPE_5__ {int health_counter; int health; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;

void FUNC_4(struct mlx5_core_dev *VAR_5)
{
 struct mlx5_core_health *VAR_6 = &VAR_5->priv.health;

 FUNC_3(&VAR_6->timer, VAR_4, 0);
 VAR_6->fatal_error = VAR_2;
 FUNC_1(VAR_0, &VAR_6->flags);
 VAR_6->health = &VAR_5->iseg->health;
 VAR_6->health_counter = &VAR_5->iseg->health_counter;

 VAR_6->timer.expires = FUNC_2(VAR_3 + VAR_1);
 FUNC_0(&VAR_6->timer);
}

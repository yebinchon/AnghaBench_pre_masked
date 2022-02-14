
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int notifier_call; } ;
struct mlx5e_priv {TYPE_1__ events_nb; int mdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct mlx5e_priv *VAR_1)
{
 VAR_1->events_nb.notifier_call = VAR_0;
 FUNC_0(VAR_1->mdev, &VAR_1->events_nb);
}

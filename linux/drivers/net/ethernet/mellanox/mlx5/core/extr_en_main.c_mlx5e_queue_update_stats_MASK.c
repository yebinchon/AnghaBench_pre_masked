
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_priv {int update_stats_work; int wq; int state; TYPE_1__* profile; } ;
struct TYPE_2__ {int update_stats; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct mlx5e_priv *VAR_1)
{
 if (!VAR_1->profile->update_stats)
  return;

 if (FUNC_2(FUNC_1(VAR_0, &VAR_1->state)))
  return;

 FUNC_0(VAR_1->wq, &VAR_1->update_stats_work);
}

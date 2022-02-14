
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlx5e_channel {TYPE_1__* stats; int netdev; } ;
struct TYPE_4__ {int eqn; int irqn; int cons_index; } ;
struct mlx5_eq_comp {TYPE_2__ core; } ;
struct TYPE_3__ {int eq_rearm; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_eq_comp*) ;
 int FUNC_1 (int ,char*,int ,int ,...) ;

int FUNC_2(struct mlx5_eq_comp *VAR_1, struct mlx5e_channel *VAR_2)
{
 u32 VAR_3;

 FUNC_1(VAR_2->netdev, "EQ 0x%x: Cons = 0x%x, irqn = 0x%x\n",
     VAR_1->core.eqn, VAR_1->core.cons_index, VAR_1->core.irqn);

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_1(VAR_2->netdev, "Recovered %d eqes on EQ 0x%x\n",
     VAR_3, VAR_1->core.eqn);

 VAR_2->stats->eq_rearm++;
 return 0;
}

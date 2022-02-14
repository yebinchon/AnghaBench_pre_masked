
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_8__ {TYPE_2__* netdev_state; } ;
struct mlx5_lag {TYPE_3__ tracker; TYPE_1__* pf; } ;
struct TYPE_9__ {struct mlx5_lag* lag; } ;
struct mlx5_core_dev {TYPE_4__ priv; TYPE_5__* pdev; } ;
struct TYPE_10__ {int devfn; } ;
struct TYPE_7__ {scalar_t__ tx_enabled; scalar_t__ link_up; } ;
struct TYPE_6__ {struct net_device* netdev; struct mlx5_core_dev* dev; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mlx5_lag *VAR_2,
    struct mlx5_core_dev *VAR_3,
    struct net_device *VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_3->pdev->devfn);

 if (VAR_5 >= VAR_0)
  return;

 FUNC_1(&VAR_1);
 VAR_2->pf[VAR_5].dev = VAR_3;
 VAR_2->pf[VAR_5].netdev = VAR_4;
 VAR_2->tracker.netdev_state[VAR_5].link_up = 0;
 VAR_2->tracker.netdev_state[VAR_5].tx_enabled = 0;

 VAR_3->priv.lag = VAR_2;

 FUNC_2(&VAR_1);
}

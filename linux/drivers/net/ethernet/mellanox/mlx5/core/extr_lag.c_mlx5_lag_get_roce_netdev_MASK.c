
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ tx_type; TYPE_1__* netdev_state; } ;
struct mlx5_lag {TYPE_3__* pf; TYPE_2__ tracker; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_6__ {struct net_device* netdev; } ;
struct TYPE_4__ {scalar_t__ tx_enabled; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_lag*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_1 ;
 struct mlx5_lag* FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct net_device *FUNC_5(struct mlx5_core_dev *VAR_2)
{
 struct net_device *VAR_3 = ((void*)0);
 struct mlx5_lag *VAR_4;

 FUNC_3(&VAR_1);
 VAR_4 = FUNC_2(VAR_2);

 if (!(VAR_4 && FUNC_0(VAR_4)))
  goto unlock;

 if (VAR_4->tracker.tx_type == VAR_0) {
  VAR_3 = VAR_4->tracker.netdev_state[0].tx_enabled ?
         VAR_4->pf[0].netdev : VAR_4->pf[1].netdev;
 } else {
  VAR_3 = VAR_4->pf[0].netdev;
 }
 if (VAR_3)
  FUNC_1(VAR_3);

unlock:
 FUNC_4(&VAR_1);

 return VAR_3;
}

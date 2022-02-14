
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_notifier_changelowerstate_info {struct netdev_lag_lower_state_info* lower_state_info; } ;
struct netdev_lag_lower_state_info {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5_lag {int dummy; } ;
struct lag_tracker {struct netdev_lag_lower_state_info* netdev_state; } ;


 int FUNC_0 (struct mlx5_lag*,struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct mlx5_lag *VAR_0,
           struct lag_tracker *VAR_1,
           struct net_device *VAR_2,
           struct netdev_notifier_changelowerstate_info *VAR_3)
{
 struct netdev_lag_lower_state_info *VAR_4;
 int VAR_5;

 if (!FUNC_1(VAR_2))
  return 0;

 VAR_5 = FUNC_0(VAR_0, VAR_2);
 if (VAR_5 == -1)
  return 0;




 VAR_4 = VAR_3->lower_state_info;
 if (!VAR_4)
  return 0;

 VAR_1->netdev_state[VAR_5] = *VAR_4;

 return 1;
}

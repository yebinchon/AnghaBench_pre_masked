
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_lag_lower_state_info {int link_up; int tx_enabled; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,struct netdev_lag_lower_state_info*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0,
          struct net_device *VAR_1,
          struct net_device *VAR_2)
{
 struct netdev_lag_lower_state_info VAR_3;

 if (FUNC_1(VAR_0))
  VAR_3.link_up = 1;
 else
  VAR_3.link_up = 0;

 if (VAR_0 == VAR_1) {
  if (FUNC_2(VAR_1))
   VAR_3.tx_enabled = 1;
  else
   VAR_3.tx_enabled = 0;
 } else {
  if ((VAR_1 && FUNC_2(VAR_1)) ||
      (!FUNC_2(VAR_2)))
   VAR_3.tx_enabled = 0;
  else
   VAR_3.tx_enabled = 1;
 }

 FUNC_0(VAR_0, &VAR_3);
}

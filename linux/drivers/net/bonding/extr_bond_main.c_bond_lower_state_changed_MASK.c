
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slave {scalar_t__ link; int dev; } ;
struct netdev_lag_lower_state_info {int link_up; int tx_enabled; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct slave*) ;
 int FUNC_1 (int ,struct netdev_lag_lower_state_info*) ;

void FUNC_2(struct slave *VAR_2)
{
 struct netdev_lag_lower_state_info VAR_3;

 VAR_3.link_up = VAR_2->link == VAR_1 ||
         VAR_2->link == VAR_0;
 VAR_3.tx_enabled = FUNC_0(VAR_2);
 FUNC_1(VAR_2->dev, &VAR_3);
}

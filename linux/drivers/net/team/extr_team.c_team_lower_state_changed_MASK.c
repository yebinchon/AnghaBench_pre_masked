
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct team_port {int dev; int linkup; } ;
struct netdev_lag_lower_state_info {int tx_enabled; int link_up; } ;


 int FUNC_0 (int ,struct netdev_lag_lower_state_info*) ;
 int FUNC_1 (struct team_port*) ;

__attribute__((used)) static void FUNC_2(struct team_port *VAR_0)
{
 struct netdev_lag_lower_state_info VAR_1;

 VAR_1.link_up = VAR_0->linkup;
 VAR_1.tx_enabled = FUNC_1(VAR_0);
 FUNC_0(VAR_0->dev, &VAR_1);
}

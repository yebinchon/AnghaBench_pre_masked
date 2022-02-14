
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {int link_up; int state; int flags2; scalar_t__ link_speed; struct ixgbe_hw hw; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct ixgbe_adapter *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->netdev;
 struct ixgbe_hw *VAR_6 = &VAR_4->hw;

 VAR_4->link_up = 0;
 VAR_4->link_speed = 0;


 if (!FUNC_5(VAR_5))
  return;


 if (FUNC_1(VAR_6) && VAR_6->mac.type == VAR_3)
  VAR_4->flags2 |= VAR_0;

 if (FUNC_6(VAR_1, &VAR_4->state))
  FUNC_3(VAR_4);

 FUNC_0(VAR_2, "NIC Link is Down\n");
 FUNC_4(VAR_5);


 FUNC_2(VAR_4);
}

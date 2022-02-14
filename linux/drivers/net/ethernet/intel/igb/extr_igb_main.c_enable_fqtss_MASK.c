
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {int reset_task; int flags; struct e1000_hw hw; struct net_device* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct igb_adapter *VAR_2, bool VAR_3)
{
 struct net_device *VAR_4 = VAR_2->netdev;
 struct e1000_hw *VAR_5 = &VAR_2->hw;

 FUNC_0(VAR_5->mac.type != VAR_1);

 if (VAR_3)
  VAR_2->flags |= VAR_0;
 else
  VAR_2->flags &= ~VAR_0;

 if (FUNC_1(VAR_4))
  FUNC_2(&VAR_2->reset_task);
}

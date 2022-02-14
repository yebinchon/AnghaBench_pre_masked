
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* netdev_ops; } ;
struct ixgbe_adapter {int state; } ;
struct TYPE_2__ {int (* ndo_open ) (struct net_device*) ;int (* ndo_stop ) (struct net_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 struct ixgbe_adapter* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_1)
{
 struct ixgbe_adapter *VAR_2 = FUNC_3(VAR_1);

 while (FUNC_7(VAR_0, &VAR_2->state))
  FUNC_8(1000, 2000);

 if (FUNC_4(VAR_1))
  VAR_1->netdev_ops->ndo_stop(VAR_1);

 FUNC_1(VAR_2);
 FUNC_2(VAR_2);

 if (FUNC_4(VAR_1))
  VAR_1->netdev_ops->ndo_open(VAR_1);

 FUNC_0(VAR_0, &VAR_2->state);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ixgbe_adapter {int dummy; } ;


 int FUNC_0 (struct ixgbe_adapter*) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 struct ixgbe_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

void FUNC_4(struct net_device *VAR_0)
{
 struct ixgbe_adapter *VAR_1 = FUNC_2(VAR_0);

 if (FUNC_3(VAR_0))
  FUNC_0(VAR_1);
 else
  FUNC_1(VAR_1);
}

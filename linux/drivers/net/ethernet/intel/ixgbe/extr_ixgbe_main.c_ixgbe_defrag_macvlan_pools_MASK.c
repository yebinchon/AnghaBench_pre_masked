
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ixgbe_adapter {int fwd_bitmask; } ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ,struct ixgbe_adapter*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct ixgbe_adapter *VAR_2 = FUNC_1(VAR_1);


 FUNC_0(VAR_2->fwd_bitmask, 1, 63);


 FUNC_2(VAR_1, VAR_0,
          VAR_2);
}

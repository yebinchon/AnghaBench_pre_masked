
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ixgbe_fwd_adapter {int dummy; } ;
struct ixgbe_adapter {int dummy; } ;


 int FUNC_0 (struct ixgbe_adapter*,struct ixgbe_fwd_adapter*) ;
 struct ixgbe_fwd_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, void *VAR_1)
{
 struct ixgbe_adapter *VAR_2 = VAR_1;
 struct ixgbe_fwd_adapter *VAR_3;

 if (!FUNC_2(VAR_0))
  return 0;

 VAR_3 = FUNC_1(VAR_0);
 if (!VAR_3)
  return 0;

 FUNC_0(VAR_2, VAR_3);

 return 0;
}

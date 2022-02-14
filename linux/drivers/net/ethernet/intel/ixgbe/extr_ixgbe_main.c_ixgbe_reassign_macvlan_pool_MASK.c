
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ixgbe_fwd_adapter {int pool; } ;
struct ixgbe_adapter {int num_rx_pools; int netdev; int fwd_bitmask; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct ixgbe_fwd_adapter*) ;
 struct ixgbe_fwd_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,char*) ;
 int FUNC_5 (struct net_device*,int ) ;
 int FUNC_6 (int ,struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_0, void *VAR_1)
{
 struct ixgbe_adapter *VAR_2 = VAR_1;
 struct ixgbe_fwd_adapter *VAR_3;
 int VAR_4;


 if (!FUNC_7(VAR_0))
  return 0;


 VAR_3 = FUNC_2(VAR_0);
 if (!VAR_3)
  return 0;


 VAR_4 = FUNC_0(VAR_2->fwd_bitmask, VAR_2->num_rx_pools);
 if (VAR_4 < VAR_2->num_rx_pools) {
  FUNC_8(VAR_4, VAR_2->fwd_bitmask);
  VAR_3->pool = VAR_4;
  return 0;
 }


 FUNC_4(VAR_0, "L2FW offload disabled due to lack of queue resources\n");
 FUNC_3(VAR_0);


 FUNC_6(VAR_2->netdev, VAR_0);
 FUNC_5(VAR_0, 0);

 FUNC_1(VAR_3);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct lan743x_adapter {int * tx; } ;
typedef int netdev_tx_t ;


 int FUNC_0 (int *,struct sk_buff*) ;
 struct lan743x_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static netdev_tx_t FUNC_2(struct sk_buff *VAR_0,
          struct net_device *VAR_1)
{
 struct lan743x_adapter *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(&VAR_2->tx[0], VAR_0);
}

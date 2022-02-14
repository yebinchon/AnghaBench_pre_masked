
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct port_info {int eth_flags; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 struct port_info* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int) ;

netdev_tx_t FUNC_4(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct port_info *VAR_3 = FUNC_2(VAR_2);

 if (FUNC_3(VAR_3->eth_flags & VAR_0))
  return FUNC_1(VAR_1, VAR_2);

 return FUNC_0(VAR_1, VAR_2);
}

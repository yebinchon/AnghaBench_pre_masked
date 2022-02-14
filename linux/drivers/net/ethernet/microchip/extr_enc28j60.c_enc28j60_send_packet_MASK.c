
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct enc28j60_net {int tx_work; struct sk_buff* tx_skb; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 struct enc28j60_net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static netdev_tx_t FUNC_3(struct sk_buff *VAR_1,
     struct net_device *VAR_2)
{
 struct enc28j60_net *VAR_3 = FUNC_0(VAR_2);
 FUNC_1(VAR_2);


 VAR_3->tx_skb = VAR_1;
 FUNC_2(&VAR_3->tx_work);

 return VAR_0;
}

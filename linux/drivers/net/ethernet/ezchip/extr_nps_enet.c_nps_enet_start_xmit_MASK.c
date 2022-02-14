
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nps_enet_priv {struct sk_buff* tx_skb; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 struct nps_enet_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct sk_buff*) ;
 int FUNC_3 () ;

__attribute__((used)) static netdev_tx_t FUNC_4(struct sk_buff *VAR_1,
           struct net_device *VAR_2)
{
 struct nps_enet_priv *VAR_3 = FUNC_0(VAR_2);


 FUNC_1(VAR_2);

 VAR_3->tx_skb = VAR_1;




 FUNC_3();

 FUNC_2(VAR_2, VAR_1);

 return VAR_0;
}

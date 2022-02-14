
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct encx24j600_priv {int tx_work; int kworker; struct sk_buff* tx_skb; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct encx24j600_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static netdev_tx_t FUNC_4(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct encx24j600_priv *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_2);


 FUNC_3(VAR_2);


 VAR_3->tx_skb = VAR_1;

 FUNC_0(&VAR_3->kworker, &VAR_3->tx_work);

 return VAR_0;
}

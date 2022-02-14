
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w5100_priv {int tx_work; int xfer_wq; struct sk_buff* tx_skb; TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {scalar_t__ may_sleep; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct w5100_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct net_device*,struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_5(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct w5100_priv *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_2);

 if (VAR_3->ops->may_sleep) {
  FUNC_0(VAR_3->tx_skb);
  VAR_3->tx_skb = VAR_1;
  FUNC_3(VAR_3->xfer_wq, &VAR_3->tx_work);
 } else {
  FUNC_4(VAR_2, VAR_1);
 }

 return VAR_0;
}

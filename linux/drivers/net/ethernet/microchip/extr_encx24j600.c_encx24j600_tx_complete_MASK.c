
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_bytes; int tx_packets; int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct encx24j600_priv {int lock; TYPE_2__* tx_skb; struct net_device* ndev; } ;
struct TYPE_4__ {scalar_t__ len; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct encx24j600_priv*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct encx24j600_priv*,int ,struct net_device*,char*,char*) ;
 int FUNC_6 (struct net_device*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(struct encx24j600_priv *VAR_4, bool VAR_5)
{
 struct net_device *VAR_6 = VAR_4->ndev;

 if (!VAR_4->tx_skb) {
  FUNC_0();
  return;
 }

 FUNC_3(&VAR_4->lock);

 if (VAR_5)
  VAR_6->stats.tx_errors++;
 else
  VAR_6->stats.tx_packets++;

 VAR_6->stats.tx_bytes += VAR_4->tx_skb->len;

 FUNC_2(VAR_4, VAR_0, VAR_2 | VAR_1);

 FUNC_5(VAR_4, VAR_3, VAR_6, "TX Done%s\n", VAR_5 ? ": Err" : "");

 FUNC_1(VAR_4->tx_skb);
 VAR_4->tx_skb = ((void*)0);

 FUNC_6(VAR_6);

 FUNC_4(&VAR_4->lock);
}

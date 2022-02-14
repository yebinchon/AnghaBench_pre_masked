
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct net_device {int dummy; } ;
struct gve_tx_ring {int req; int q_resources; int netdev_txq; } ;
struct TYPE_3__ {size_t num_queues; } ;
struct gve_priv {TYPE_2__* pdev; struct gve_tx_ring* tx; TYPE_1__ tx_cfg; } ;
typedef int netdev_tx_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct gve_tx_ring*,struct sk_buff*) ;
 int FUNC_3 (struct gve_tx_ring*,struct sk_buff*,int *) ;
 int FUNC_4 (struct gve_priv*,int ,int) ;
 struct gve_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ) ;
 size_t FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (int ) ;

netdev_tx_t FUNC_12(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct gve_priv *VAR_4 = FUNC_5(VAR_3);
 struct gve_tx_ring *VAR_5;
 int VAR_6;

 FUNC_0(FUNC_9(VAR_2) > VAR_4->tx_cfg.num_queues,
      "skb queue index out of range");
 VAR_5 = &VAR_4->tx[FUNC_9(VAR_2)];
 if (FUNC_11(FUNC_2(VAR_5, VAR_2))) {
  FUNC_1();
  FUNC_4(VAR_4, VAR_5->q_resources, VAR_5->req);
  return VAR_0;
 }
 VAR_6 = FUNC_3(VAR_5, VAR_2, &VAR_4->pdev->dev);

 FUNC_6(VAR_5->netdev_txq, VAR_2->len);
 FUNC_10(VAR_2);


 VAR_5->req += VAR_6;

 if (!FUNC_8(VAR_5->netdev_txq) && FUNC_7())
  return VAR_1;


 FUNC_1();
 FUNC_4(VAR_4, VAR_5->q_resources, VAR_5->req);
 return VAR_1;
}

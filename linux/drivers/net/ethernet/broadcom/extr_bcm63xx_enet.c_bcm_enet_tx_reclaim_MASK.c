
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct TYPE_4__ {int tx_errors; } ;
struct net_device {TYPE_2__ stats; } ;
struct bcm_enet_priv {size_t tx_desc_count; size_t tx_ring_size; size_t tx_dirty_desc; int tx_lock; TYPE_1__* pdev; struct sk_buff** tx_skb; struct bcm_enet_desc* tx_desc_cpu; } ;
struct bcm_enet_desc {int len_stat; int address; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 struct bcm_enet_priv* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_3, int VAR_4)
{
 struct bcm_enet_priv *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_3);
 VAR_6 = 0;

 while (VAR_5->tx_desc_count < VAR_5->tx_ring_size) {
  struct bcm_enet_desc *VAR_7;
  struct sk_buff *VAR_8;



  FUNC_6(&VAR_5->tx_lock);

  VAR_7 = &VAR_5->tx_desc_cpu[VAR_5->tx_dirty_desc];

  if (!VAR_4 && (VAR_7->len_stat & VAR_0)) {
   FUNC_7(&VAR_5->tx_lock);
   break;
  }



  FUNC_5();

  VAR_8 = VAR_5->tx_skb[VAR_5->tx_dirty_desc];
  VAR_5->tx_skb[VAR_5->tx_dirty_desc] = ((void*)0);
  FUNC_1(&VAR_5->pdev->dev, VAR_7->address, VAR_8->len,
     VAR_2);

  VAR_5->tx_dirty_desc++;
  if (VAR_5->tx_dirty_desc == VAR_5->tx_ring_size)
   VAR_5->tx_dirty_desc = 0;
  VAR_5->tx_desc_count++;

  FUNC_7(&VAR_5->tx_lock);

  if (VAR_7->len_stat & VAR_1)
   VAR_3->stats.tx_errors++;

  FUNC_0(VAR_8);
  VAR_6++;
 }

 if (FUNC_3(VAR_3) && VAR_6)
  FUNC_4(VAR_3);

 return VAR_6;
}

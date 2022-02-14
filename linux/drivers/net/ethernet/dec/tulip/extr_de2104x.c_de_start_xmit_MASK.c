
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct net_device {int dummy; } ;
struct de_private {unsigned int tx_head; int lock; TYPE_1__* tx_skb; int pdev; struct de_desc* tx_ring; } ;
struct de_desc {void* opts1; void* addr1; void* opts2; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {int mapping; struct sk_buff* skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_1 (struct de_private*) ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 struct de_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct de_private*,int ,struct net_device*,char*,unsigned int,int) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int ,int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_11 ;
 int FUNC_10 () ;

__attribute__((used)) static netdev_tx_t FUNC_11 (struct sk_buff *VAR_12,
     struct net_device *VAR_13)
{
 struct de_private *VAR_14 = FUNC_4(VAR_13);
 unsigned int VAR_15, VAR_16;
 u32 VAR_17, VAR_18, VAR_19 = VAR_2 | VAR_3;
 struct de_desc *VAR_20;

 FUNC_8(&VAR_14->lock);

 VAR_16 = FUNC_1(VAR_14);
 if (VAR_16 == 0) {
  FUNC_6(VAR_13);
  FUNC_9(&VAR_14->lock);
  return VAR_4;
 }
 VAR_16--;

 VAR_15 = VAR_14->tx_head;

 VAR_20 = &VAR_14->tx_ring[VAR_15];

 VAR_18 = VAR_12->len;
 VAR_17 = FUNC_7(VAR_14->pdev, VAR_12->data, VAR_18, VAR_7);
 if (VAR_15 == (VAR_0 - 1))
  VAR_19 |= VAR_8;
 if (!VAR_16 || (VAR_16 == (VAR_0 / 2)))
  VAR_19 |= VAR_10;
 VAR_19 |= VAR_18;
 VAR_20->opts2 = FUNC_2(VAR_19);
 VAR_20->addr1 = FUNC_2(VAR_17);

 VAR_14->tx_skb[VAR_15].skb = VAR_12;
 VAR_14->tx_skb[VAR_15].mapping = VAR_17;
 FUNC_10();

 VAR_20->opts1 = FUNC_2(VAR_1);
 FUNC_10();

 VAR_14->tx_head = FUNC_0(VAR_15);
 FUNC_5(VAR_14, VAR_11, VAR_13, "tx queued, slot %d, skblen %d\n",
    VAR_15, VAR_12->len);

 if (VAR_16 == 0)
  FUNC_6(VAR_13);

 FUNC_9(&VAR_14->lock);


 FUNC_3(VAR_9, VAR_6);

 return VAR_5;
}

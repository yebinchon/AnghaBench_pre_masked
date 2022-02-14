
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_6__ {int cntinfo; int pbuf; } ;
struct sgiseeq_tx_desc {TYPE_3__ tdma; struct sk_buff* skb; } ;
struct sgiseeq_private {int tx_new; int tx_old; int tx_lock; struct sgiseeq_tx_desc* tx_desc; struct hpc3_ethregs* hregs; } ;
struct TYPE_5__ {int parent; } ;
struct TYPE_4__ {int tx_bytes; } ;
struct net_device {TYPE_2__ dev; TYPE_1__ stats; } ;
struct hpc3_ethregs {int tx_ctrl; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (struct sgiseeq_private*) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (struct net_device*,struct sgiseeq_tx_desc*) ;
 int FUNC_5 (struct net_device*,struct sgiseeq_tx_desc*) ;
 int FUNC_6 (struct net_device*,struct sgiseeq_private*,struct hpc3_ethregs*) ;
 struct sgiseeq_private* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static netdev_tx_t
FUNC_12(struct sk_buff *VAR_9, struct net_device *VAR_10)
{
 struct sgiseeq_private *VAR_11 = FUNC_7(VAR_10);
 struct hpc3_ethregs *VAR_12 = VAR_11->hregs;
 unsigned long VAR_13;
 struct sgiseeq_tx_desc *VAR_14;
 int VAR_15, VAR_16;

 FUNC_10(&VAR_11->tx_lock, VAR_13);


 VAR_15 = VAR_9->len;
 if (VAR_15 < VAR_1) {
  if (FUNC_9(VAR_9, VAR_1)) {
   FUNC_11(&VAR_11->tx_lock, VAR_13);
   return VAR_8;
  }
  VAR_15 = VAR_1;
 }

 VAR_10->stats.tx_bytes += VAR_15;
 VAR_16 = VAR_11->tx_new;
 VAR_14 = &VAR_11->tx_desc[VAR_16];
 FUNC_4(VAR_10, VAR_14);
 VAR_14->skb = VAR_9;
 VAR_14->tdma.pbuf = FUNC_3(VAR_10->dev.parent, VAR_9->data,
           VAR_15, VAR_0);
 VAR_14->tdma.cntinfo = (VAR_15 & VAR_3) |
                    VAR_7 | VAR_5 | VAR_6 | VAR_4;
 FUNC_5(VAR_10, VAR_14);
 if (VAR_11->tx_old != VAR_11->tx_new) {
  struct sgiseeq_tx_desc *VAR_17;

  VAR_17 = &VAR_11->tx_desc[FUNC_1(VAR_11->tx_new)];
  FUNC_4(VAR_10, VAR_17);
  VAR_17->tdma.cntinfo &= ~VAR_4;
  FUNC_5(VAR_10, VAR_17);
 }
 VAR_11->tx_new = FUNC_0(VAR_11->tx_new);


 if (!(VAR_12->tx_ctrl & VAR_2))
  FUNC_6(VAR_10, VAR_11, VAR_12);

 if (!FUNC_2(VAR_11))
  FUNC_8(VAR_10);
 FUNC_11(&VAR_11->tx_lock, VAR_13);

 return VAR_8;
}

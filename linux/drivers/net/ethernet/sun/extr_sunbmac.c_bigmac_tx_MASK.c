
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_5__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_2__ stats; } ;
struct bigmac {int tx_old; int tx_new; int lock; struct net_device* dev; struct sk_buff** tx_skbs; TYPE_3__* bigmac_op; TYPE_1__* bmac_block; } ;
struct be_txd {int tx_flags; int tx_addr; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {struct be_txd* be_txd; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct bigmac*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct bigmac *VAR_2)
{
 struct be_txd *VAR_3 = &VAR_2->bmac_block->be_txd[0];
 struct net_device *VAR_4 = VAR_2->dev;
 int VAR_5;

 FUNC_7(&VAR_2->lock);

 VAR_5 = VAR_2->tx_old;
 FUNC_0(("bigmac_tx: tx_old[%d] ", VAR_5));
 while (VAR_5 != VAR_2->tx_new) {
  struct sk_buff *VAR_6;
  struct be_txd *VAR_7 = &VAR_3[VAR_5];

  FUNC_0(("this(%p) [flags(%08x)addr(%08x)]",
       VAR_7, VAR_7->tx_flags, VAR_7->tx_addr));

  if (VAR_7->tx_flags & VAR_1)
   break;
  VAR_6 = VAR_2->tx_skbs[VAR_5];
  VAR_4->stats.tx_packets++;
  VAR_4->stats.tx_bytes += VAR_6->len;
  FUNC_4(&VAR_2->bigmac_op->dev,
     VAR_7->tx_addr, VAR_6->len,
     VAR_0);

  FUNC_0(("skb(%p) ", VAR_6));
  VAR_2->tx_skbs[VAR_5] = ((void*)0);
  FUNC_3(VAR_6);

  VAR_5 = FUNC_1(VAR_5);
 }
 FUNC_0((" DONE, tx_old=%d\n", VAR_5));
 VAR_2->tx_old = VAR_5;

 if (FUNC_5(VAR_4) &&
     FUNC_2(VAR_2) > 0)
  FUNC_6(VAR_2->dev);

 FUNC_8(&VAR_2->lock);
}

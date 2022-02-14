
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct sk_buff {int len; int data; } ;
struct net_device {int base_addr; int name; } ;
struct TYPE_4__ {scalar_t__ lock; int queue; } ;
struct TYPE_3__ {int tx_bytes; } ;
struct de4x5_private {size_t tx_new; int txRingSize; TYPE_2__ cache; int lock; TYPE_1__ stats; scalar_t__* tx_skb; scalar_t__ interrupt; int tx_enable; } ;
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
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 struct sk_buff* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,struct sk_buff*) ;
 int FUNC_2 (struct net_device*,struct sk_buff*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct net_device*,int ,int,struct sk_buff*) ;
 struct de4x5_private* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char*,int ,int ,scalar_t__,int ,int ,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;
 scalar_t__ FUNC_16 (int ,void*) ;

__attribute__((used)) static netdev_tx_t
FUNC_17(struct sk_buff *VAR_12, struct net_device *VAR_13)
{
    struct de4x5_private *VAR_14 = FUNC_7(VAR_13);
    u_long VAR_15 = VAR_13->base_addr;
    u_long VAR_16 = 0;

    FUNC_10(VAR_13);
    if (!VAR_14->tx_enable)
  goto tx_err;






    FUNC_14(&VAR_14->lock, VAR_16);
    FUNC_3(VAR_13);
    FUNC_15(&VAR_14->lock, VAR_16);


    if (FUNC_16(0, (void *)&VAR_14->cache.lock) && !VAR_14->interrupt)
  goto tx_err;


    if (FUNC_8(VAR_13) || (u_long) VAR_14->tx_skb[VAR_14->tx_new] > 1) {
 if (VAR_14->interrupt) {
     FUNC_2(VAR_13, VAR_12);
 } else {
     FUNC_1(VAR_13, VAR_12);
 }
 if (VAR_11 & VAR_4) {
     FUNC_12("%s: transmit busy, lost media or stale skb found:\n  STS:%08x\n  tbusy:%d\n  IMR:%08x\n  OMR:%08x\n Stale skb: %s\n",VAR_13->name, FUNC_5(VAR_2), FUNC_8(VAR_13), FUNC_5(VAR_0), FUNC_5(VAR_1), ((u_long) VAR_14->tx_skb[VAR_14->tx_new] > 1) ? "YES" : "NO");
 }
    } else if (VAR_12->len > 0) {

 if (!FUNC_13(&VAR_14->cache.queue) && !VAR_14->interrupt) {
     FUNC_1(VAR_13, VAR_12);
     VAR_12 = FUNC_0(VAR_13);
 }

 while (VAR_12 && !FUNC_8(VAR_13) &&
        (u_long) VAR_14->tx_skb[VAR_14->tx_new] <= 1) {
     FUNC_14(&VAR_14->lock, VAR_16);
     FUNC_10(VAR_13);
     FUNC_6(VAR_13, VAR_12->data, VAR_8 | VAR_9 | VAR_7 | VAR_12->len, VAR_12);
      VAR_14->stats.tx_bytes += VAR_12->len;
     FUNC_11(VAR_6, VAR_3);

     VAR_14->tx_new = (VAR_14->tx_new + 1) % VAR_14->txRingSize;

     if (VAR_10) {
  FUNC_9(VAR_13);
     }
     VAR_12 = FUNC_0(VAR_13);
     FUNC_15(&VAR_14->lock, VAR_16);
 }
 if (VAR_12) FUNC_2(VAR_13, VAR_12);
    }

    VAR_14->cache.lock = 0;

    return VAR_5;
tx_err:
 FUNC_4(VAR_12);
 return VAR_5;
}

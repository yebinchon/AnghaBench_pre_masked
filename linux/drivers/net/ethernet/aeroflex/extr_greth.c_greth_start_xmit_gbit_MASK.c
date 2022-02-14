
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ ip_summed; int data; } ;
struct TYPE_3__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct greth_private {size_t tx_next; int dev; struct greth_bd* tx_bd_base; int devlock; struct sk_buff** tx_skbuff; int tx_last; } ;
struct greth_bd {int stat; int addr; } ;
typedef int skb_frag_t ;
typedef int netdev_tx_t ;
struct TYPE_4__ {int nr_frags; int * frags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,int,int ) ;
 int FUNC_6 (struct greth_private*) ;
 int FUNC_7 (int ,size_t) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 () ;
 struct greth_private* FUNC_12 (struct net_device*) ;
 scalar_t__ FUNC_13 (struct greth_private*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int *,int ,int,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct sk_buff*) ;
 TYPE_2__* FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (int *,unsigned long) ;
 scalar_t__ FUNC_22 (int) ;
 int FUNC_23 () ;

__attribute__((used)) static netdev_tx_t
FUNC_24(struct sk_buff *VAR_12, struct net_device *VAR_13)
{
 struct greth_private *VAR_14 = FUNC_12(VAR_13);
 struct greth_bd *VAR_15;
 u32 VAR_16, VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21 = VAR_11;
 unsigned long VAR_22;
 u16 VAR_23;

 VAR_19 = FUNC_19(VAR_12)->nr_frags;
 VAR_23 = VAR_14->tx_last;
 FUNC_15();

 if (FUNC_7(VAR_23, VAR_14->tx_next) < VAR_19 + 1) {
  FUNC_14(VAR_13);
  VAR_21 = VAR_10;
  goto out;
 }

 if (FUNC_13(VAR_14))
  FUNC_8(VAR_12);

 if (FUNC_22(VAR_12->len > VAR_9)) {
  VAR_13->stats.tx_errors++;
  goto out;
 }


 VAR_14->tx_skbuff[VAR_14->tx_next] = VAR_12;


 if (VAR_19 != 0)
  VAR_16 = VAR_7;
 else
  VAR_16 = VAR_3;

 if (VAR_12->ip_summed == VAR_0)
  VAR_16 |= VAR_6;
 VAR_16 |= FUNC_18(VAR_12) & VAR_4;
 if (VAR_14->tx_next == VAR_8)
  VAR_16 |= VAR_5;


 VAR_15 = VAR_14->tx_bd_base + VAR_14->tx_next;
 FUNC_10(&VAR_15->stat, VAR_16);
 VAR_17 = FUNC_3(VAR_14->dev, VAR_12->data, FUNC_18(VAR_12), VAR_1);

 if (FUNC_22(FUNC_4(VAR_14->dev, VAR_17)))
  goto map_error;

 FUNC_10(&VAR_15->addr, VAR_17);

 VAR_18 = FUNC_0(VAR_14->tx_next);


 for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
  skb_frag_t *VAR_24 = &FUNC_19(VAR_12)->frags[VAR_20];
  VAR_14->tx_skbuff[VAR_18] = ((void*)0);
  VAR_15 = VAR_14->tx_bd_base + VAR_18;

  VAR_16 = VAR_2;
  if (VAR_12->ip_summed == VAR_0)
   VAR_16 |= VAR_6;
  VAR_16 |= FUNC_17(VAR_24) & VAR_4;


  if (VAR_18 == VAR_8)
   VAR_16 |= VAR_5;


  if (VAR_20 < VAR_19 - 1)
   VAR_16 |= VAR_7;
  else
   VAR_16 |= VAR_3;

  FUNC_10(&VAR_15->stat, VAR_16);

  VAR_17 = FUNC_16(VAR_14->dev, VAR_24, 0, FUNC_17(VAR_24),
         VAR_1);

  if (FUNC_22(FUNC_4(VAR_14->dev, VAR_17)))
   goto frag_map_error;

  FUNC_10(&VAR_15->addr, VAR_17);

  VAR_18 = FUNC_0(VAR_18);
 }

 FUNC_23();


 VAR_15 = VAR_14->tx_bd_base + VAR_14->tx_next;
 FUNC_10(&VAR_15->stat,
         FUNC_9(&VAR_15->stat) | VAR_2);

 FUNC_20(&VAR_14->devlock, VAR_22);
 VAR_14->tx_next = VAR_18;
 FUNC_6(VAR_14);
 FUNC_21(&VAR_14->devlock, VAR_22);

 return VAR_11;

frag_map_error:

 for (VAR_20 = 0; VAR_14->tx_next + VAR_20 != VAR_18; VAR_20++) {
  VAR_15 = VAR_14->tx_bd_base + VAR_14->tx_next + VAR_20;
  FUNC_5(VAR_14->dev,
     FUNC_9(&VAR_15->addr),
     FUNC_9(&VAR_15->stat) & VAR_4,
     VAR_1);
  FUNC_10(&VAR_15->stat, 0);
 }
map_error:
 if (FUNC_11())
  FUNC_2(VAR_14->dev, "Could not create TX DMA mapping\n");
 FUNC_1(VAR_12);
out:
 return VAR_21;
}

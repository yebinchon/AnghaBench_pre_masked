
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ ip_summed; int len; int data; } ;
struct net_device {int dummy; } ;
struct iphdr {scalar_t__ protocol; } ;
struct cp_private {unsigned int tx_head; int* tx_opts; TYPE_4__* dev; int lock; struct cp_desc* tx_ring; struct sk_buff** tx_skb; TYPE_2__* pdev; } ;
struct cp_desc {void* opts1; void* addr; void* opts2; } ;
typedef int skb_frag_t ;
typedef int netdev_tx_t ;
typedef int dma_addr_t ;
typedef void* __le32 ;
struct TYPE_5__ {int tx_dropped; } ;
struct TYPE_8__ {TYPE_1__ stats; } ;
struct TYPE_7__ {int nr_frags; int gso_size; int * frags; } ;
struct TYPE_6__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_0 (unsigned int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_1 (struct cp_private*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct sk_buff*) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *,int ,int,int ) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 struct iphdr* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct net_device*,char*,int) ;
 int FUNC_12 (struct net_device*,char*) ;
 struct cp_private* FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*,int) ;
 int FUNC_15 (struct cp_private*,int ,TYPE_4__*,char*,int,unsigned int,...) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (int const*) ;
 int FUNC_18 (int const*) ;
 int FUNC_19 (struct sk_buff*) ;
 TYPE_3__* FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (int *,unsigned long) ;
 int FUNC_22 (int *,unsigned long) ;
 int VAR_20 ;
 int FUNC_23 (struct cp_private*,struct sk_buff*,int,unsigned int) ;
 int FUNC_24 () ;

__attribute__((used)) static netdev_tx_t FUNC_25 (struct sk_buff *VAR_21,
     struct net_device *VAR_22)
{
 struct cp_private *VAR_23 = FUNC_13(VAR_22);
 unsigned VAR_24;
 u32 VAR_25, VAR_26;
 unsigned long VAR_27;
 __le32 VAR_28;
 int VAR_29 = 0;

 FUNC_21(&VAR_23->lock, VAR_27);


 if (FUNC_1(VAR_23) <= (FUNC_20(VAR_21)->nr_frags + 1)) {
  FUNC_16(VAR_22);
  FUNC_22(&VAR_23->lock, VAR_27);
  FUNC_12(VAR_22, "BUG! Tx Ring full when queue awake!\n");
  return VAR_12;
 }

 VAR_24 = VAR_23->tx_head;
 VAR_25 = (VAR_24 == (VAR_1 - 1)) ? VAR_16 : 0;
 VAR_29 = FUNC_20(VAR_21)->gso_size;

 if (VAR_29 > VAR_10) {
  FUNC_11(VAR_22, "Net bug: GSO size %d too large for 8139CP\n",
     VAR_29);
  goto out_dma_error;
 }

 VAR_28 = FUNC_4(FUNC_3(VAR_21));
 VAR_26 = VAR_2;
 if (VAR_29)
  VAR_26 |= VAR_7 | (VAR_29 << VAR_11);
 else if (VAR_21->ip_summed == VAR_0) {
  const struct iphdr *VAR_30 = FUNC_10(VAR_21);
  if (VAR_30->protocol == VAR_5)
   VAR_26 |= VAR_4 | VAR_17;
  else if (VAR_30->protocol == VAR_6)
   VAR_26 |= VAR_4 | VAR_19;
  else {
   FUNC_2(1,
      "Net bug: asked to checksum invalid Legacy IP packet\n");
   goto out_dma_error;
  }
 }

 if (FUNC_20(VAR_21)->nr_frags == 0) {
  struct cp_desc *VAR_31 = &VAR_23->tx_ring[VAR_24];
  u32 VAR_32;
  dma_addr_t VAR_33;

  VAR_32 = VAR_21->len;
  VAR_33 = FUNC_8(&VAR_23->pdev->dev, VAR_21->data, VAR_32, VAR_15);
  if (FUNC_9(&VAR_23->pdev->dev, VAR_33))
   goto out_dma_error;

  VAR_31->opts2 = VAR_28;
  VAR_31->addr = FUNC_5(VAR_33);
  FUNC_24();

  VAR_26 |= VAR_25 | VAR_32 | VAR_3 | VAR_8;

  VAR_31->opts1 = FUNC_4(VAR_26);
  FUNC_24();

  VAR_23->tx_skb[VAR_24] = VAR_21;
  VAR_23->tx_opts[VAR_24] = VAR_26;
  FUNC_15(VAR_23, VAR_20, VAR_23->dev, "tx queued, slot %d, skblen %d\n",
     VAR_24, VAR_21->len);
 } else {
  struct cp_desc *VAR_34;
  u32 VAR_35, VAR_36, VAR_37;
  dma_addr_t VAR_38;
  int VAR_39, VAR_40 = VAR_24;




  VAR_36 = VAR_25;
  VAR_35 = FUNC_19(VAR_21);
  VAR_38 = FUNC_8(&VAR_23->pdev->dev, VAR_21->data,
            VAR_35, VAR_15);
  if (FUNC_9(&VAR_23->pdev->dev, VAR_38))
   goto out_dma_error;

  VAR_23->tx_skb[VAR_24] = VAR_21;

  for (VAR_39 = 0; VAR_39 < FUNC_20(VAR_21)->nr_frags; VAR_39++) {
   const skb_frag_t *VAR_41 = &FUNC_20(VAR_21)->frags[VAR_39];
   u32 VAR_42;
   dma_addr_t VAR_43;

   VAR_24 = FUNC_0(VAR_24);

   VAR_42 = FUNC_18(VAR_41);
   VAR_43 = FUNC_8(&VAR_23->pdev->dev,
       FUNC_17(VAR_41),
       VAR_42, VAR_15);
   if (FUNC_9(&VAR_23->pdev->dev, VAR_43)) {
    FUNC_23(VAR_23, VAR_21, VAR_40, VAR_24);
    goto out_dma_error;
   }

   VAR_25 = (VAR_24 == (VAR_1 - 1)) ? VAR_16 : 0;

   VAR_37 = VAR_26 | VAR_25 | VAR_42;

   if (VAR_39 == FUNC_20(VAR_21)->nr_frags - 1)
    VAR_37 |= VAR_8;

   VAR_34 = &VAR_23->tx_ring[VAR_24];
   VAR_34->opts2 = VAR_28;
   VAR_34->addr = FUNC_5(VAR_43);
   FUNC_24();

   VAR_34->opts1 = FUNC_4(VAR_37);
   FUNC_24();

   VAR_23->tx_opts[VAR_24] = VAR_37;
   VAR_23->tx_skb[VAR_24] = VAR_21;
  }

  VAR_34 = &VAR_23->tx_ring[VAR_40];
  VAR_34->opts2 = VAR_28;
  VAR_34->addr = FUNC_5(VAR_38);
  FUNC_24();

  VAR_37 = VAR_26 | VAR_36 | VAR_35 | VAR_3;
  VAR_34->opts1 = FUNC_4(VAR_37);
  FUNC_24();

  VAR_23->tx_opts[VAR_40] = VAR_37;
  FUNC_15(VAR_23, VAR_20, VAR_23->dev, "tx queued, slots %d-%d, skblen %d\n",
     VAR_40, VAR_24, VAR_21->len);
 }
 VAR_23->tx_head = FUNC_0(VAR_24);

 FUNC_14(VAR_22, VAR_21->len);
 if (FUNC_1(VAR_23) <= (VAR_9 + 1))
  FUNC_16(VAR_22);

out_unlock:
 FUNC_22(&VAR_23->lock, VAR_27);

 FUNC_6(VAR_18, VAR_14);

 return VAR_13;
out_dma_error:
 FUNC_7(VAR_21);
 VAR_23->dev->stats.tx_dropped++;
 goto out_unlock;
}

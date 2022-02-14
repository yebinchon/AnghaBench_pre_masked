
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ ip_summed; unsigned int len; int data; scalar_t__ data_len; } ;
struct ns83820 {int CFG_cache; int tx_free_idx; unsigned int tx_done_idx; int tx_intr_idx; int tx_phy_descs; int tx_lock; int nr_tx_skbs; struct sk_buff** tx_skbs; TYPE_5__* pci_dev; int * tx_descs; } ;
struct net_device {int dummy; } ;
struct TYPE_7__ {int page_offset; int page; } ;
typedef TYPE_1__ skb_frag_t ;
typedef int netdev_tx_t ;
typedef scalar_t__ dma_addr_t ;
typedef int __le32 ;
struct TYPE_10__ {scalar_t__ protocol; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {int nr_frags; TYPE_1__* frags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 unsigned int VAR_20 ;
 int VAR_21 ;
 struct ns83820* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int volatile FUNC_2 (int) ;
 int FUNC_3 (int volatile*,scalar_t__) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (short) ;
 TYPE_6__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct ns83820*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (TYPE_5__*,int ,unsigned int,int ) ;
 scalar_t__ FUNC_12 (int *,TYPE_1__*,int ,unsigned int,int ) ;
 unsigned int FUNC_13 (TYPE_1__*) ;
 TYPE_2__* FUNC_14 (struct sk_buff*) ;
 short FUNC_15 (struct sk_buff*) ;
 scalar_t__ FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (struct ns83820*) ;
 scalar_t__ FUNC_20 (int) ;

__attribute__((used)) static netdev_tx_t FUNC_21(struct sk_buff *VAR_22,
        struct net_device *VAR_23)
{
 struct ns83820 *VAR_24 = FUNC_0(VAR_23);
 u32 VAR_25, VAR_26, VAR_27;
 int VAR_28, VAR_29;
 unsigned VAR_30, VAR_31;
 dma_addr_t VAR_32;
 unsigned VAR_33;
 skb_frag_t *VAR_34;
 int VAR_35 = 0;
 int VAR_36 = 0;
 volatile __le32 *VAR_37;

 FUNC_4("ns83820_hard_start_xmit\n");

 VAR_29 = FUNC_14(VAR_22)->nr_frags;
again:
 if (FUNC_20(VAR_24->CFG_cache & VAR_0)) {
  FUNC_9(VAR_23);
  if (FUNC_20(VAR_24->CFG_cache & VAR_0))
   return VAR_18;
  FUNC_8(VAR_23);
 }

 VAR_31 = VAR_25 = VAR_24->tx_free_idx;
 VAR_30 = VAR_24->tx_done_idx;
 VAR_28 = (VAR_30 + VAR_20-2 - VAR_25) % VAR_20;
 VAR_28 -= 1;
 if (VAR_28 <= VAR_29) {
  FUNC_4("stop_queue - not enough(%p)\n", VAR_23);
  FUNC_9(VAR_23);


  if (VAR_24->tx_done_idx != VAR_30) {
   FUNC_4("restart queue(%p)\n", VAR_23);
   FUNC_8(VAR_23);
   goto again;
  }
  return VAR_18;
 }

 if (VAR_25 == VAR_24->tx_intr_idx) {
  VAR_36 = 1;
  VAR_24->tx_intr_idx = (VAR_24->tx_intr_idx + VAR_20/4) % VAR_20;
 }

 VAR_28 -= VAR_29;
 if (VAR_28 < VAR_17) {
  FUNC_4("stop_queue - last entry(%p)\n", VAR_23);
  FUNC_9(VAR_23);
  VAR_35 = 1;
 }

 VAR_34 = FUNC_14(VAR_22)->frags;
 if (!VAR_29)
  VAR_34 = ((void*)0);
 VAR_27 = 0;
 if (VAR_22->ip_summed == VAR_1) {
  VAR_27 |= VAR_11;
  if (VAR_15 == FUNC_6(VAR_22)->protocol)
   VAR_27 |= VAR_12;
  else if (VAR_16 == FUNC_6(VAR_22)->protocol)
   VAR_27 |= VAR_13;
 }
 VAR_33 = VAR_22->len;
 if (VAR_29)
  VAR_33 -= VAR_22->data_len;
 VAR_32 = FUNC_11(VAR_24->pci_dev, VAR_22->data, VAR_33, VAR_21);

 VAR_37 = VAR_24->tx_descs + (VAR_25 * VAR_9);

 for (;;) {
  volatile __le32 *VAR_38 = VAR_24->tx_descs + (VAR_25 * VAR_9);

  FUNC_4("frag[%3u]: %4u @ 0x%08Lx\n", VAR_25, VAR_33,
   (unsigned long long)VAR_32);
  VAR_31 = VAR_25;
  VAR_25 = (VAR_25 + 1) % VAR_20;
  VAR_38[VAR_8] = FUNC_2(VAR_24->tx_phy_descs + (VAR_25 * VAR_9 * 4));
  FUNC_3(VAR_38 + VAR_5, VAR_32);
  VAR_38[VAR_7] = FUNC_2(VAR_27);

  VAR_26 = ((VAR_29) ? VAR_3 : VAR_36 ? VAR_2 : 0);
  VAR_26 |= (VAR_38 == VAR_37) ? 0 : VAR_4;
  VAR_26 |= VAR_33;
  VAR_38[VAR_6] = FUNC_2(VAR_26);

  if (!VAR_29)
   break;

  VAR_32 = FUNC_12(&VAR_24->pci_dev->dev, VAR_34, 0,
           FUNC_13(VAR_34), VAR_10);
  FUNC_4("frag: buf=%08Lx  page=%08lx offset=%08lx\n",
   (long long)VAR_32, (long) FUNC_10(VAR_34->page),
   VAR_34->page_offset);
  VAR_33 = FUNC_13(VAR_34);
  VAR_34++;
  VAR_29--;
 }
 FUNC_4("done pkt\n");

 FUNC_17(&VAR_24->tx_lock);
 VAR_24->tx_skbs[VAR_31] = VAR_22;
 VAR_37[VAR_6] |= FUNC_2(VAR_4);
 VAR_24->tx_free_idx = VAR_25;
 FUNC_1(&VAR_24->nr_tx_skbs);
 FUNC_18(&VAR_24->tx_lock);

 FUNC_7(VAR_24);


 if (VAR_35 && (VAR_24->tx_done_idx != VAR_30) && FUNC_19(VAR_24))
  FUNC_8(VAR_23);

 return VAR_19;
}

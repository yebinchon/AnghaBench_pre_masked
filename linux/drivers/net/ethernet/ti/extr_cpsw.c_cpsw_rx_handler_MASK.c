
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xdp_buff {void* data_hard_start; void* data; void* data_end; int * rxq; } ;
struct sk_buff {int protocol; struct net_device* dev; } ;
struct page_pool {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_7__ {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct net_device {TYPE_3__ stats; } ;
struct cpsw_priv {scalar_t__ rx_ts_enabled; int * xdp_rxq; scalar_t__ xdp_prog; } ;
struct cpsw_meta_xdp {int ch; struct net_device* ndev; } ;
struct TYPE_6__ {scalar_t__ dual_emac; } ;
struct cpsw_common {int rx_packet_max; TYPE_4__* rxv; int cpts; scalar_t__ usage_count; TYPE_2__ data; struct page_pool** page_pool; TYPE_1__* slaves; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_8__ {int ch; } ;
struct TYPE_5__ {struct net_device* ndev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 struct sk_buff* FUNC_2 (void*,int ) ;
 int FUNC_3 (int ,struct page*,scalar_t__,int,int ) ;
 int FUNC_4 (struct cpsw_priv*,int,struct xdp_buff*,struct page*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,struct net_device*) ;
 struct cpsw_common* FUNC_9 (struct net_device*) ;
 struct cpsw_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct net_device*) ;
 void* FUNC_13 (struct page*) ;
 struct page* FUNC_14 (struct page_pool*) ;
 scalar_t__ FUNC_15 (struct page*) ;
 int FUNC_16 (struct page_pool*,struct page*) ;
 int FUNC_17 (struct page_pool*,struct page*) ;
 int FUNC_18 (struct sk_buff*,int) ;
 int FUNC_19 (struct sk_buff*,int) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (struct xdp_buff*) ;

__attribute__((used)) static void FUNC_22(void *VAR_6, int VAR_7, int VAR_8)
{
 struct page *VAR_9, *VAR_10 = VAR_6;
 void *VAR_11 = FUNC_13(VAR_10);
 struct cpsw_meta_xdp *VAR_12 = VAR_11 + VAR_4;
 struct cpsw_common *VAR_13 = FUNC_9(VAR_12->ndev);
 int VAR_14 = VAR_13->rx_packet_max;
 int VAR_15 = 0, VAR_16, VAR_17 = VAR_12->ch;
 int VAR_18 = VAR_1;
 struct net_device *VAR_19 = VAR_12->ndev;
 struct cpsw_priv *VAR_20;
 struct page_pool *VAR_21;
 struct sk_buff *VAR_22;
 struct xdp_buff VAR_23;
 dma_addr_t VAR_24;

 if (VAR_13->data.dual_emac && VAR_8 >= 0) {
  VAR_16 = FUNC_0(VAR_8);
  if (VAR_16)
   VAR_19 = VAR_13->slaves[--VAR_16].ndev;
 }

 VAR_20 = FUNC_10(VAR_19);
 VAR_21 = VAR_13->page_pool[VAR_17];
 if (FUNC_20(VAR_8 < 0) || FUNC_20(!FUNC_12(VAR_19))) {

  if (VAR_13->data.dual_emac && VAR_13->usage_count &&
      (VAR_8 >= 0)) {






   VAR_9 = VAR_10;
   goto requeue;
  }


  FUNC_16(VAR_21, VAR_10);
  return;
 }

 VAR_9 = FUNC_14(VAR_21);
 if (FUNC_20(!VAR_9)) {
  VAR_9 = VAR_10;
  VAR_19->stats.rx_dropped++;
  goto requeue;
 }

 if (VAR_20->xdp_prog) {
  if (VAR_8 & VAR_0) {
   VAR_23.data = VAR_11 + VAR_1 +
       VAR_2;
   VAR_23.data_end = VAR_23.data + VAR_7 -
           VAR_2;
  } else {
   VAR_23.data = VAR_11 + VAR_1;
   VAR_23.data_end = VAR_23.data + VAR_7;
  }

  FUNC_21(&VAR_23);

  VAR_23.data_hard_start = VAR_11;
  VAR_23.rxq = &VAR_20->xdp_rxq[VAR_17];

  VAR_15 = FUNC_4(VAR_20, VAR_17, &VAR_23, VAR_10);
  if (VAR_15 != VAR_3)
   goto requeue;


  VAR_7 = VAR_23.data_end - VAR_23.data;
  VAR_18 = VAR_23.data - VAR_23.data_hard_start;


  VAR_8 &= ~VAR_0;
 }


 VAR_22 = FUNC_2(VAR_11, FUNC_6(VAR_14));
 if (!VAR_22) {
  VAR_19->stats.rx_dropped++;
  FUNC_16(VAR_21, VAR_10);
  goto requeue;
 }

 FUNC_19(VAR_22, VAR_18);
 FUNC_18(VAR_22, VAR_7);
 VAR_22->dev = VAR_19;
 if (VAR_8 & VAR_0)
  FUNC_5(VAR_22);
 if (VAR_20->rx_ts_enabled)
  FUNC_7(VAR_13->cpts, VAR_22);
 VAR_22->protocol = FUNC_8(VAR_22, VAR_19);


 FUNC_17(VAR_21, VAR_10);
 FUNC_11(VAR_22);

 VAR_19->stats.rx_bytes += VAR_7;
 VAR_19->stats.rx_packets++;

requeue:
 VAR_12 = FUNC_13(VAR_9) + VAR_4;
 VAR_12->ndev = VAR_19;
 VAR_12->ch = VAR_17;

 VAR_24 = FUNC_15(VAR_9) + VAR_1;
 VAR_15 = FUNC_3(VAR_13->rxv[VAR_17].ch, VAR_9, VAR_24,
           VAR_14, 0);
 if (VAR_15 < 0) {
  FUNC_1(VAR_15 == -VAR_5);
  FUNC_16(VAR_21, VAR_9);
 }
}

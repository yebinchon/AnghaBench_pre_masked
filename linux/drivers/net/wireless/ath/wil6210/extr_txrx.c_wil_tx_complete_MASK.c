
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union wil_tx_desc {int dummy; } wil_tx_desc ;
typedef int u16 ;
struct wil_ring_tx_data {int last_idle; int enabled; } ;
struct wil_ring {size_t swtail; int size; TYPE_2__* va; struct wil_ctx* ctx; } ;
struct wil_net_stats {int tx_errors; int tx_bytes; int tx_packets; } ;
struct wil_ctx {int nr_frags; struct sk_buff* skb; } ;
struct wil6210_vif {int dummy; } ;
struct TYPE_9__ {int (* tx_desc_unmap ) (struct device*,union wil_tx_desc*,struct wil_ctx*) ;} ;
struct wil6210_priv {int** ring2cid_tid; int max_assoc_sta; int ring_idle_trsh; TYPE_6__* sta; TYPE_3__ txrx_ops; struct wil_ring_tx_data* ring_tx_data; struct wil_ring* ring_tx; } ;
struct TYPE_11__ {int status; scalar_t__ error; int length; } ;
struct vring_tx_desc {TYPE_5__ dma; } ;
struct sk_buff {scalar_t__ protocol; scalar_t__ len; } ;
struct TYPE_10__ {int tx_errors; int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_4__ stats; } ;
struct device {int dummy; } ;
struct TYPE_12__ {struct wil_net_stats stats; } ;
struct TYPE_7__ {struct vring_tx_desc legacy; } ;
struct TYPE_8__ {TYPE_1__ tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct wil_ctx*,int ,int) ;
 int FUNC_5 (struct device*,union wil_tx_desc*,struct wil_ctx*) ;
 int FUNC_6 (int,size_t,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;
 struct net_device* FUNC_8 (struct wil6210_vif*) ;
 struct wil6210_priv* FUNC_9 (struct wil6210_vif*) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct wil6210_priv*,char*,int,...) ;
 int FUNC_12 (struct wil6210_priv*,char*,int) ;
 int FUNC_13 (char*,int ,int,int,void const*,int,int) ;
 int FUNC_14 (struct wil6210_priv*,char*,int) ;
 int FUNC_15 (struct wil_ring*) ;
 size_t FUNC_16 (struct wil_ring*) ;
 int FUNC_17 (struct wil_ring*) ;
 struct device* FUNC_18 (struct wil6210_priv*) ;
 int FUNC_19 (struct wil6210_vif*,struct sk_buff*) ;
 int FUNC_20 (struct wil6210_priv*,struct sk_buff*,TYPE_6__*) ;
 int FUNC_21 (struct wil6210_priv*,struct wil6210_vif*,struct wil_ring*,int) ;
 scalar_t__ FUNC_22 (int ,int,int) ;
 int FUNC_23 () ;

int FUNC_24(struct wil6210_vif *VAR_3, int VAR_4)
{
 struct wil6210_priv *VAR_5 = FUNC_9(VAR_3);
 struct net_device *VAR_6 = FUNC_8(VAR_3);
 struct device *VAR_7 = FUNC_18(VAR_5);
 struct wil_ring *VAR_8 = &VAR_5->ring_tx[VAR_4];
 struct wil_ring_tx_data *VAR_9 = &VAR_5->ring_tx_data[VAR_4];
 int VAR_10 = 0;
 int VAR_11 = VAR_5->ring2cid_tid[VAR_4][0];
 struct wil_net_stats *VAR_12 = ((void*)0);
 volatile struct vring_tx_desc *VAR_13;
 int VAR_14;
 int VAR_15;

 if (FUNC_7(!VAR_8->va)) {
  FUNC_12(VAR_5, "Tx irq[%d]: vring not initialized\n", VAR_4);
  return 0;
 }

 if (FUNC_7(!VAR_9->enabled)) {
  FUNC_14(VAR_5, "Tx irq[%d]: vring disabled\n", VAR_4);
  return 0;
 }

 FUNC_11(VAR_5, "tx_complete: (%d)\n", VAR_4);

 VAR_14 = FUNC_17(VAR_8);

 if (VAR_11 < VAR_5->max_assoc_sta)
  VAR_12 = &VAR_5->sta[VAR_11].stats;

 while (!FUNC_15(VAR_8)) {
  int VAR_16;
  struct wil_ctx *VAR_17 = &VAR_8->ctx[VAR_8->swtail];





  int VAR_18 = (VAR_8->swtail + VAR_17->nr_frags) % VAR_8->size;


  VAR_13 = &VAR_8->va[VAR_18].tx.legacy;
  if (FUNC_7(!(VAR_13->dma.status & VAR_2)))
   break;

  VAR_16 = (VAR_18 + 1) % VAR_8->size;
  while (VAR_8->swtail != VAR_16) {
   struct vring_tx_desc VAR_19, *VAR_20 = &VAR_19;
   u16 VAR_21;
   struct sk_buff *VAR_22;

   VAR_17 = &VAR_8->ctx[VAR_8->swtail];
   VAR_22 = VAR_17->skb;
   VAR_13 = &VAR_8->va[VAR_8->swtail].tx.legacy;

   *VAR_20 = *VAR_13;

   VAR_21 = FUNC_2(VAR_20->dma.length);
   FUNC_6(VAR_4, VAR_8->swtail, VAR_21,
           VAR_20->dma.error);
   FUNC_11(VAR_5,
         "TxC[%2d][%3d] : %d bytes, status 0x%02x err 0x%02x\n",
         VAR_4, VAR_8->swtail, VAR_21,
         VAR_20->dma.status, VAR_20->dma.error);
   FUNC_13("TxCD ", VAR_0, 32, 4,
       (const void *)VAR_20, sizeof(*VAR_20), 0);

   VAR_5->txrx_ops.tx_desc_unmap(VAR_7,
          (union wil_tx_desc *)VAR_20,
          VAR_17);

   if (VAR_22) {
    if (FUNC_3(VAR_20->dma.error == 0)) {
     VAR_6->stats.tx_packets++;
     VAR_6->stats.tx_bytes += VAR_22->len;
     if (VAR_12) {
      VAR_12->tx_packets++;
      VAR_12->tx_bytes += VAR_22->len;

      FUNC_20(VAR_5, VAR_22,
       &VAR_5->sta[VAR_11]);
     }
    } else {
     VAR_6->stats.tx_errors++;
     if (VAR_12)
      VAR_12->tx_errors++;
    }

    if (VAR_22->protocol == FUNC_0(VAR_1))
     FUNC_19(VAR_3, VAR_22);

    FUNC_10(VAR_22, VAR_20->dma.error == 0);
   }
   FUNC_4(VAR_17, 0, sizeof(*VAR_17));





   FUNC_23();





   VAR_8->swtail = FUNC_16(VAR_8);
   VAR_10++;
  }
 }


 VAR_15 = FUNC_17(VAR_8);
 if (FUNC_22(VAR_5->ring_idle_trsh,
        VAR_15, VAR_14)) {
  FUNC_11(VAR_5, "Ring[%2d] idle %d -> %d\n",
        VAR_4, VAR_14, VAR_15);
  VAR_9->last_idle = FUNC_1();
 }


 if (VAR_10)
  FUNC_21(VAR_5, VAR_3, VAR_8, 0);

 return VAR_10;
}

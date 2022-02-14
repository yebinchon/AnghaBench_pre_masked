
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union wil_tx_desc {int dummy; } wil_tx_desc ;
typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_8__ {int length; } ;
struct wil_tx_enhanced_desc {TYPE_3__ dma; } ;
struct wil_status_ring {scalar_t__ desc_rdy_pol; int swhead; int size; int hwtail; } ;
struct wil_ring_tx_status {unsigned int num_descriptors; unsigned int ring_id; scalar_t__ status; } ;
struct wil_ring_tx_data {size_t mid; int last_idle; int enabled; } ;
struct wil_ring {size_t swtail; TYPE_2__* va; struct wil_ctx* ctx; } ;
struct wil_net_stats {int tx_errors; int tx_bytes; int tx_packets; } ;
struct wil_ctx {struct sk_buff* skb; } ;
struct wil6210_vif {int dummy; } ;
struct wil6210_priv {int** ring2cid_tid; int max_assoc_sta; int ring_idle_trsh; TYPE_5__* sta; struct wil6210_vif** vifs; struct wil_ring_tx_data* ring_tx_data; struct wil_ring* ring_tx; } ;
struct sk_buff {scalar_t__ protocol; scalar_t__ len; } ;
struct TYPE_9__ {int tx_errors; int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_4__ stats; } ;
struct device {int dummy; } ;
typedef int msg ;
struct TYPE_10__ {struct wil_net_stats stats; } ;
struct TYPE_6__ {int enhanced; } ;
struct TYPE_7__ {TYPE_1__ tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct wil_ctx*,int ,int) ;
 int FUNC_5 (struct wil_ring_tx_status*,size_t,int ) ;
 scalar_t__ FUNC_6 (int) ;
 struct net_device* FUNC_7 (struct wil6210_vif*) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct wil6210_priv*,char*,unsigned int,int,...) ;
 int FUNC_10 (struct wil6210_priv*,char*,...) ;
 int FUNC_11 (struct wil_status_ring*,scalar_t__*,struct wil_ring_tx_status*) ;
 int FUNC_12 (char*,int ,int,int,void const*,int,int) ;
 int FUNC_13 (struct wil6210_priv*,char*,unsigned int) ;
 size_t FUNC_14 (struct wil_ring*) ;
 int FUNC_15 (struct wil_ring*) ;
 int FUNC_16 (struct wil_status_ring*) ;
 struct device* FUNC_17 (struct wil6210_priv*) ;
 int FUNC_18 (struct wil6210_vif*,struct sk_buff*) ;
 int FUNC_19 (struct device*,union wil_tx_desc*,struct wil_ctx*) ;
 int FUNC_20 (struct wil6210_priv*,struct sk_buff*,TYPE_5__*) ;
 int FUNC_21 (struct wil6210_priv*,struct wil6210_vif*,int *,int) ;
 scalar_t__ FUNC_22 (int ,int,int) ;
 int FUNC_23 (struct wil6210_priv*,int ,int) ;
 int FUNC_24 () ;

int FUNC_25(struct wil6210_priv *VAR_4,
    struct wil_status_ring *VAR_5)
{
 struct net_device *VAR_6;
 struct device *VAR_7 = FUNC_17(VAR_4);
 struct wil_ring *VAR_8 = ((void*)0);
 struct wil_ring_tx_data *VAR_9;

 int VAR_10 = 0;
 int VAR_11;
 struct wil_net_stats *VAR_12;
 struct wil_tx_enhanced_desc *VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15, VAR_16 = 0;
 int VAR_17;
 u8 VAR_18;
 struct wil_ring_tx_status VAR_19;
 struct wil6210_vif *VAR_20;
 int VAR_21;
 int VAR_22;

 FUNC_11(VAR_5, &VAR_18, &VAR_19);


 while (VAR_18 == VAR_5->desc_rdy_pol) {
  VAR_15 = VAR_19.num_descriptors;
  if (!VAR_15) {
   FUNC_10(VAR_4, "invalid num_descs 0\n");
   goto again;
  }


  VAR_14 = VAR_19.ring_id;

  if (FUNC_6(VAR_14 >= VAR_2)) {
   FUNC_10(VAR_4, "invalid ring id %d\n", VAR_14);
   goto again;
  }
  VAR_8 = &VAR_4->ring_tx[VAR_14];
  if (FUNC_6(!VAR_8->va)) {
   FUNC_10(VAR_4, "Tx irq[%d]: ring not initialized\n",
    VAR_14);
   goto again;
  }
  VAR_9 = &VAR_4->ring_tx_data[VAR_14];
  if (FUNC_6(!VAR_9->enabled)) {
   FUNC_13(VAR_4, "Tx irq[%d]: ring disabled\n", VAR_14);
   goto again;
  }
  VAR_20 = VAR_4->vifs[VAR_9->mid];
  if (FUNC_6(!VAR_20)) {
   FUNC_9(VAR_4, "invalid MID %d for ring %d\n",
         VAR_9->mid, VAR_14);
   goto again;
  }

  VAR_6 = FUNC_7(VAR_20);

  VAR_11 = VAR_4->ring2cid_tid[VAR_14][0];
  VAR_12 = (VAR_11 < VAR_4->max_assoc_sta) ? &VAR_4->sta[VAR_11].stats :
           ((void*)0);

  FUNC_9(VAR_4,
        "tx_status: completed desc_ring (%d), num_descs (%d)\n",
        VAR_14, VAR_15);

  VAR_21 = FUNC_15(VAR_8);

  for (VAR_17 = 0 ; VAR_17 < VAR_15; ++VAR_17) {
   struct wil_ctx *VAR_23 = &VAR_8->ctx[VAR_8->swtail];
   struct wil_tx_enhanced_desc VAR_24, *VAR_25 = &VAR_24;
   u16 VAR_26;
   struct sk_buff *VAR_27 = VAR_23->skb;

   VAR_13 = (struct wil_tx_enhanced_desc *)
    &VAR_8->va[VAR_8->swtail].tx.enhanced;
   *VAR_25 = *VAR_13;

   VAR_26 = FUNC_2(VAR_25->dma.length);
   FUNC_5(&VAR_19, VAR_8->swtail, VAR_26);
   FUNC_9(VAR_4,
         "TxC[%2d][%3d] : %d bytes, status 0x%02x\n",
         VAR_14, VAR_8->swtail, VAR_26,
         VAR_19.status);
   FUNC_12("TxS ", VAR_0, 32, 4,
       (const void *)&VAR_19, sizeof(VAR_19),
       0);

   FUNC_19(VAR_7,
            (union wil_tx_desc *)VAR_25,
            VAR_23);

   if (VAR_27) {
    if (FUNC_3(VAR_19.status == 0)) {
     VAR_6->stats.tx_packets++;
     VAR_6->stats.tx_bytes += VAR_27->len;
     if (VAR_12) {
      VAR_12->tx_packets++;
      VAR_12->tx_bytes += VAR_27->len;

      FUNC_20(VAR_4, VAR_27,
       &VAR_4->sta[VAR_11]);
     }
    } else {
     VAR_6->stats.tx_errors++;
     if (VAR_12)
      VAR_12->tx_errors++;
    }

    if (VAR_27->protocol == FUNC_0(VAR_1))
     FUNC_18(VAR_20, VAR_27);

    FUNC_8(VAR_27, VAR_19.status == 0);
   }
   FUNC_4(VAR_23, 0, sizeof(*VAR_23));





   FUNC_24();

   VAR_8->swtail = FUNC_14(VAR_8);

   VAR_10++;
  }


  VAR_22 = FUNC_15(VAR_8);
  if (FUNC_22(VAR_4->ring_idle_trsh,
         VAR_22, VAR_21)) {
   FUNC_9(VAR_4, "Ring[%2d] idle %d -> %d\n",
         VAR_14, VAR_21, VAR_22);
   VAR_9->last_idle = FUNC_1();
  }

again:
  VAR_16++;
  if (VAR_16 % VAR_3 == 0)

   FUNC_23(VAR_4, VAR_5->hwtail, VAR_5->swhead);

  FUNC_16(VAR_5);

  FUNC_11(VAR_5, &VAR_18, &VAR_19);
 }


 if (VAR_10)
  FUNC_21(VAR_4, VAR_20, ((void*)0), 0);

 if (VAR_16 % VAR_3 != 0)

  FUNC_23(VAR_4, VAR_5->hwtail, (VAR_5->swhead - 1) % VAR_5->size);

 return VAR_10;
}

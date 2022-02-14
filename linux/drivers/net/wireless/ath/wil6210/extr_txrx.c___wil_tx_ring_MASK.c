
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
typedef size_t uint ;
typedef size_t u32 ;
struct wil_ring_tx_data {scalar_t__ last_idle; int idle; int enabled; } ;
struct wil_ring {size_t swhead; size_t size; TYPE_3__* va; struct wil_ctx* ctx; int hwtail; } ;
struct wil_ctx {int nr_frags; int skb; int mapped_as; } ;
struct wil6210_vif {int bcast_ring; } ;
struct TYPE_10__ {int (* tx_desc_unmap ) (struct device*,union wil_tx_desc*,struct wil_ctx*) ;int (* tx_desc_map ) (union wil_tx_desc*,int ,int,int) ;} ;
struct wil6210_priv {TYPE_4__ txrx_ops; scalar_t__ tx_latency; int ring_idle_trsh; struct wil_ring_tx_data* ring_tx_data; struct wil_ring* ring_tx; } ;
struct TYPE_11__ {int d0; int status; } ;
struct TYPE_7__ {int* d; } ;
typedef struct vring_tx_desc {TYPE_5__ dma; TYPE_1__ mac; } volatile vring_tx_desc ;
struct sk_buff {int len; void const* data; struct wil_ctx* cb; } ;
struct device {int dummy; } ;
typedef int skb_frag_t ;
typedef int ktime_t ;
typedef int dma_addr_t ;
struct TYPE_12__ {int nr_frags; int * frags; } ;
struct TYPE_8__ {struct vring_tx_desc volatile legacy; } ;
struct TYPE_9__ {TYPE_2__ tx; } ;


 int FUNC_0 (int ) ;
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
 int VAR_10 ;
 size_t VAR_11 ;
 int FUNC_1 (struct device*,void const*,int,int ) ;
 int FUNC_2 (struct device*,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct wil_ctx*,int ,int) ;
 int FUNC_6 (struct device*,int const*,int ,int,int ) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 TYPE_6__* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (union wil_tx_desc*,int ,size_t,int) ;
 int FUNC_12 (union wil_tx_desc*,int ,int,int) ;
 int FUNC_13 (struct device*,union wil_tx_desc*,struct wil_ctx*) ;
 int FUNC_14 (int,size_t,int,int) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (struct wil6210_priv*,char*,int,size_t,...) ;
 int FUNC_17 (struct wil6210_priv*,char*,int) ;
 int FUNC_18 (struct wil6210_priv*,char*,int,int) ;
 int FUNC_19 (char*,int ,int,int,void const*,int,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_20 (struct wil_ring*,int) ;
 int FUNC_21 (struct wil_ring*) ;
 int FUNC_22 (struct wil_ring*) ;
 struct device* FUNC_23 (struct wil6210_priv*) ;
 int FUNC_24 (struct vring_tx_desc volatile*,struct sk_buff*) ;
 int FUNC_25 (struct vring_tx_desc volatile*,int) ;
 scalar_t__ FUNC_26 (int ,int,int) ;
 int FUNC_27 (struct wil6210_priv*,int ,int) ;
 int FUNC_28 () ;

__attribute__((used)) static int FUNC_29(struct wil6210_priv *VAR_14, struct wil6210_vif *VAR_15,
    struct wil_ring *VAR_16, struct sk_buff *VAR_17)
{
 struct device *VAR_18 = FUNC_23(VAR_14);
 struct vring_tx_desc VAR_19, *VAR_20 = &VAR_19;
 volatile struct vring_tx_desc *VAR_21;
 u32 VAR_22 = VAR_16->swhead;
 int VAR_23 = FUNC_21(VAR_16);
 int VAR_24 = FUNC_10(VAR_17)->nr_frags;
 uint VAR_25 = 0;
 int VAR_26 = VAR_16 - VAR_14->ring_tx;
 struct wil_ring_tx_data *VAR_27 = &VAR_14->ring_tx_data[VAR_26];
 uint VAR_28 = VAR_22;
 dma_addr_t VAR_29;
 int VAR_30;
 bool VAR_31 = (VAR_26 == VAR_15->bcast_ring);
 uint VAR_32 = FUNC_9(VAR_17);

 FUNC_16(VAR_14, "tx_ring: %d bytes to ring %d, nr_frags %d\n",
       VAR_17->len, VAR_26, VAR_24);

 if (FUNC_15(!VAR_27->enabled))
  return -VAR_6;

 if (FUNC_15(VAR_23 < 1 + VAR_24)) {
  FUNC_18(VAR_14,
        "Tx ring[%2d] full. No space for %d fragments\n",
        VAR_26, 1 + VAR_24);
  return -VAR_7;
 }
 VAR_21 = &VAR_16->va[VAR_28].tx.legacy;

 VAR_29 = FUNC_1(VAR_18, VAR_17->data, FUNC_9(VAR_17), VAR_3);

 FUNC_16(VAR_14, "Tx[%2d] skb %d bytes 0x%p -> %pad\n", VAR_26,
       FUNC_9(VAR_17), VAR_17->data, &VAR_29);
 FUNC_19("Tx ", VAR_5, 16, 1,
     VAR_17->data, FUNC_9(VAR_17), 0);

 if (FUNC_15(FUNC_2(VAR_18, VAR_29)))
  return -VAR_6;
 VAR_16->ctx[VAR_28].mapped_as = VAR_13;

 VAR_14->txrx_ops.tx_desc_map((union wil_tx_desc *)VAR_20, VAR_29, VAR_32,
       VAR_26);
 if (FUNC_15(VAR_31)) {
  VAR_20->mac.d[0] |= FUNC_0(VAR_8);
  if (FUNC_15(VAR_32 > VAR_11))
   VAR_20->mac.d[0] |= (1 << VAR_9);
 }

 if (FUNC_15(FUNC_24(VAR_20, VAR_17))) {
  FUNC_17(VAR_14, "Tx[%2d] Failed to set cksum, drop packet\n",
   VAR_26);
  goto dma_error;
 }

 VAR_16->ctx[VAR_28].nr_frags = VAR_24;
 FUNC_25(VAR_20, VAR_24 + 1);


 for (; VAR_25 < VAR_24; VAR_25++) {
  const skb_frag_t *VAR_33 = &FUNC_10(VAR_17)->frags[VAR_25];
  int VAR_34 = FUNC_7(VAR_33);

  *VAR_21 = *VAR_20;
  FUNC_16(VAR_14, "Tx[%2d] desc[%4d]\n", VAR_26, VAR_28);
  FUNC_19("TxD ", VAR_4, 32, 4,
      (const void *)VAR_20, sizeof(*VAR_20), 0);
  VAR_28 = (VAR_22 + VAR_25 + 1) % VAR_16->size;
  VAR_21 = &VAR_16->va[VAR_28].tx.legacy;
  VAR_29 = FUNC_6(VAR_18, VAR_33, 0, FUNC_7(VAR_33),
          VAR_3);
  if (FUNC_15(FUNC_2(VAR_18, VAR_29))) {
   FUNC_17(VAR_14, "Tx[%2d] failed to map fragment\n",
    VAR_26);
   goto dma_error;
  }
  VAR_16->ctx[VAR_28].mapped_as = VAR_12;
  VAR_14->txrx_ops.tx_desc_map((union wil_tx_desc *)VAR_20,
        VAR_29, VAR_34, VAR_26);




  FUNC_24(VAR_20, VAR_17);
 }

 VAR_20->dma.d0 |= FUNC_0(VAR_1);
 VAR_20->dma.d0 |= FUNC_0(VAR_2);
 VAR_20->dma.d0 |= FUNC_0(VAR_0);
 *VAR_21 = *VAR_20;
 FUNC_16(VAR_14, "Tx[%2d] desc[%4d]\n", VAR_26, VAR_28);
 FUNC_19("TxD ", VAR_4, 32, 4,
     (const void *)VAR_20, sizeof(*VAR_20), 0);





 VAR_16->ctx[VAR_28].skb = FUNC_8(VAR_17);


 VAR_30 = FUNC_22(VAR_16);
 if (FUNC_26(VAR_14->ring_idle_trsh,
        VAR_30, VAR_30 + VAR_24 + 1)) {
  VAR_27->idle += FUNC_3() - VAR_27->last_idle;
  FUNC_16(VAR_14, "Ring[%2d] not idle %d -> %d\n",
        VAR_26, VAR_30, VAR_30 + VAR_24 + 1);
 }






 FUNC_28();


 FUNC_20(VAR_16, VAR_24 + 1);
 FUNC_16(VAR_14, "Tx[%2d] swhead %d -> %d\n", VAR_26, VAR_22,
       VAR_16->swhead);
 FUNC_14(VAR_26, VAR_22, VAR_17->len, VAR_24);




 FUNC_28();

 if (VAR_14->tx_latency)
  *(ktime_t *)&VAR_17->cb = FUNC_4();
 else
  FUNC_5(VAR_17->cb, 0, sizeof(ktime_t));

 FUNC_27(VAR_14, VAR_16->hwtail, VAR_16->swhead);

 return 0;
 dma_error:

 VAR_24 = VAR_25 + 1;
 for (VAR_25 = 0; VAR_25 < VAR_24; VAR_25++) {
  struct wil_ctx *VAR_35;

  VAR_28 = (VAR_22 + VAR_25) % VAR_16->size;
  VAR_35 = &VAR_16->ctx[VAR_28];
  VAR_21 = &VAR_16->va[VAR_28].tx.legacy;
  *VAR_20 = *VAR_21;
  VAR_21->dma.status = VAR_10;
  VAR_14->txrx_ops.tx_desc_unmap(VAR_18,
         (union wil_tx_desc *)VAR_20,
         VAR_35);

  FUNC_5(VAR_35, 0, sizeof(*VAR_35));
 }

 return -VAR_6;
}

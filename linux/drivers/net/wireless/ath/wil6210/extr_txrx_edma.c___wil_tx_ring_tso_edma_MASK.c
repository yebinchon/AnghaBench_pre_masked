
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union wil_tx_desc {int dummy; } wil_tx_desc ;
typedef int u32 ;
struct wil_tx_enhanced_desc {int dummy; } ;
struct wil_ring_tx_data {scalar_t__ last_idle; int idle; int enabled; } ;
struct wil_ring {int swhead; int size; struct wil_ctx* ctx; TYPE_2__* va; int hwtail; } ;
struct wil_ctx {int dummy; } ;
struct wil6210_vif {int dummy; } ;
struct wil6210_priv {scalar_t__ tx_latency; int ring_idle_trsh; struct wil_ring_tx_data* ring_tx_data; struct wil_ring* ring_tx; } ;
struct sk_buff {int len; scalar_t__ ip_summed; struct wil_ctx* cb; int * data; } ;
struct device {int dummy; } ;
typedef int skb_frag_t ;
typedef int ktime_t ;
struct TYPE_6__ {int nr_frags; int gso_size; int gso_type; int * frags; } ;
struct TYPE_4__ {int enhanced; } ;
struct TYPE_5__ {TYPE_1__ tx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct wil_ctx*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 TYPE_3__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct wil6210_priv*,char*,int,...) ;
 int FUNC_10 (struct wil6210_priv*,char*,int,int) ;
 int FUNC_11 (struct wil_ring*,int) ;
 int FUNC_12 (struct wil_ring*) ;
 int FUNC_13 (struct wil_ring*) ;
 struct device* FUNC_14 (struct wil6210_priv*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (struct device*,union wil_tx_desc*,struct wil_ctx*) ;
 int FUNC_16 (struct wil6210_priv*,int *,int,int,int ,int *,struct wil_ring*,struct sk_buff*,int,int,int,int,int*) ;
 scalar_t__ FUNC_17 (int ,int,int) ;
 int FUNC_18 (struct wil6210_priv*,int ,int) ;
 int FUNC_19 () ;

__attribute__((used)) static int FUNC_20(struct wil6210_priv *VAR_8,
      struct wil6210_vif *VAR_9,
      struct wil_ring *VAR_10,
      struct sk_buff *VAR_11)
{
 int VAR_12 = VAR_10 - VAR_8->ring_tx;
 struct wil_ring_tx_data *VAR_13 = &VAR_8->ring_tx_data[VAR_12];
 int VAR_14 = FUNC_6(VAR_11)->nr_frags;
 int VAR_15 = VAR_14 + 2;
 int VAR_16, VAR_17 = FUNC_12(VAR_10);
 int VAR_18, VAR_19, VAR_20;
 int VAR_21;
 bool VAR_22;
 u32 VAR_23 = VAR_10->swhead;
 int VAR_24 = 0;
 int VAR_25 = -VAR_1;
 int VAR_26;
 int VAR_27;
 int VAR_28 = FUNC_6(VAR_11)->gso_size;

 FUNC_9(VAR_8, "tx_ring_tso: %d bytes to ring %d\n", VAR_11->len,
       VAR_12);

 if (FUNC_8(!VAR_13->enabled))
  return -VAR_1;

 if (FUNC_8(VAR_17 < VAR_15)) {
  FUNC_10(VAR_8,
        "TSO: Tx ring[%2d] full. No space for %d fragments\n",
        VAR_12, VAR_15);
  return -VAR_2;
 }

 VAR_21 = FUNC_6(VAR_11)->gso_type & (128 | 129);
 switch (VAR_21) {
 case 129:
  VAR_22 = 1;
  break;
 case 128:
  VAR_22 = 0;
  break;
 default:
  return -VAR_1;
 }

 if (VAR_11->ip_summed != VAR_0)
  return -VAR_1;




 VAR_26 = FUNC_7(VAR_11);
 VAR_27 = FUNC_5(VAR_11);




 VAR_19 = VAR_3 + VAR_26 + VAR_27;
 FUNC_9(VAR_8, "TSO: process header descriptor, hdrlen %u\n",
       VAR_19);
 VAR_25 = FUNC_16(VAR_8, VAR_11->data, VAR_19, VAR_23,
     VAR_5, ((void*)0), VAR_10, VAR_11,
     VAR_22, VAR_26, VAR_27,
     VAR_28, &VAR_24);
 if (VAR_25)
  return -VAR_1;


 VAR_20 = FUNC_4(VAR_11) - VAR_19;
 FUNC_9(VAR_8, "TSO: process skb head, headlen %u\n", VAR_20);
 VAR_25 = FUNC_16(VAR_8, VAR_11->data + VAR_19, VAR_20,
     (VAR_23 + VAR_24) % VAR_10->size,
     (VAR_14 != 0) ? VAR_4 :
     VAR_6, ((void*)0), VAR_10, VAR_11,
     VAR_22, VAR_26, VAR_27,
     VAR_28, &VAR_24);
 if (VAR_25)
  goto mem_error;


 for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++) {
  skb_frag_t *VAR_29 = &FUNC_6(VAR_11)->frags[VAR_18];
  int VAR_30 = FUNC_3(VAR_29);

  FUNC_9(VAR_8, "TSO: frag[%d]: len %u, descs_used %d\n", VAR_18,
        VAR_30, VAR_24);

  VAR_25 = FUNC_16(VAR_8, ((void*)0), VAR_30,
      (VAR_23 + VAR_24) % VAR_10->size,
      (VAR_18 != VAR_14 - 1) ?
      VAR_7 : VAR_6,
      VAR_29, VAR_10, VAR_11, VAR_22,
      VAR_26, VAR_27,
      VAR_28, &VAR_24);
  if (VAR_25)
   goto mem_error;
 }


 VAR_16 = FUNC_13(VAR_10);
 if (FUNC_17(VAR_8->ring_idle_trsh,
        VAR_16, VAR_16 + VAR_24)) {
  VAR_13->idle += FUNC_0() - VAR_13->last_idle;
  FUNC_9(VAR_8, "Ring[%2d] not idle %d -> %d\n",
        VAR_12, VAR_16, VAR_16 + VAR_24);
 }


 FUNC_11(VAR_10, VAR_24);
 FUNC_9(VAR_8, "TSO: Tx swhead %d -> %d\n", VAR_23, VAR_10->swhead);




 FUNC_19();

 if (VAR_8->tx_latency)
  *(ktime_t *)&VAR_11->cb = FUNC_1();
 else
  FUNC_2(VAR_11->cb, 0, sizeof(ktime_t));

 FUNC_18(VAR_8, VAR_10->hwtail, VAR_10->swhead);

 return 0;

mem_error:
 while (VAR_24 > 0) {
  struct device *VAR_31 = FUNC_14(VAR_8);
  struct wil_ctx *VAR_32;
  int VAR_33 = (VAR_23 + VAR_24 - 1) % VAR_10->size;
  struct wil_tx_enhanced_desc VAR_34, *VAR_35 = &VAR_34;
  struct wil_tx_enhanced_desc *VAR_36 =
   (struct wil_tx_enhanced_desc *)
   &VAR_10->va[VAR_33].tx.enhanced;

  *VAR_35 = *VAR_36;
  VAR_32 = &VAR_10->ctx[VAR_33];
  FUNC_15(VAR_31, (union wil_tx_desc *)VAR_35, VAR_32);
  FUNC_2(VAR_32, 0, sizeof(*VAR_32));
  VAR_24--;
 }
 return VAR_25;
}

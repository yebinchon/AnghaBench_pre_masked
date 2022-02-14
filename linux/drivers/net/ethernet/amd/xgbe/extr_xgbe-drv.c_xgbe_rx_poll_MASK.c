
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {unsigned int error; unsigned int len; struct sk_buff* skb; } ;
struct TYPE_7__ {int * pages; int pages_offset; } ;
struct TYPE_8__ {TYPE_2__ pa; int dma_len; int dma_off; int dma_base; } ;
struct TYPE_9__ {TYPE_3__ buf; } ;
struct xgbe_ring_data {int state_saved; TYPE_1__ state; TYPE_4__ rx; } ;
struct xgbe_packet_data {int rss_hash_type; int rss_hash; int attributes; int rx_tstamp; int vlan_ctag; scalar_t__ errors; } ;
struct xgbe_ring {int cur; struct xgbe_packet_data packet_data; } ;
struct napi_struct {int dummy; } ;
struct xgbe_hw_if {scalar_t__ (* dev_read ) (struct xgbe_channel*) ;} ;
struct xgbe_prv_data {int tstamp_tc; int dev; struct napi_struct napi; scalar_t__ per_channel_irq; struct net_device* netdev; struct xgbe_hw_if hw_if; } ;
struct xgbe_channel {int queue_index; struct napi_struct napi; struct xgbe_ring* rx_ring; struct xgbe_prv_data* pdata; } ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {scalar_t__ protocol; unsigned int len; int encapsulation; int csum_level; struct net_device* dev; int ip_summed; } ;
struct net_device {unsigned int mtu; int features; } ;
struct TYPE_10__ {int nr_frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 struct xgbe_ring_data* FUNC_1 (struct xgbe_ring*,int) ;
 int VAR_16 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*,scalar_t__,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct xgbe_packet_data*,int ,int) ;
 int FUNC_9 (struct napi_struct*,struct sk_buff*) ;
 int FUNC_10 (struct xgbe_prv_data*,int ,struct net_device*,char*) ;
 scalar_t__ FUNC_11 (struct xgbe_prv_data*) ;
 int FUNC_12 (int ) ;
 int VAR_17 ;
 int FUNC_13 (struct sk_buff*,int ,int *,int ,unsigned int,int ) ;
 int FUNC_14 (struct sk_buff*) ;
 struct skb_shared_hwtstamps* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,int ) ;
 int FUNC_17 (struct sk_buff*,int ,int ) ;
 TYPE_5__* FUNC_18 (struct sk_buff*) ;
 scalar_t__ FUNC_19 (struct xgbe_channel*) ;
 int FUNC_20 (int *,int ) ;
 struct sk_buff* FUNC_21 (struct xgbe_prv_data*,struct napi_struct*,struct xgbe_ring_data*,unsigned int) ;
 int FUNC_22 (struct net_device*,struct sk_buff*,int) ;
 unsigned int FUNC_23 (struct xgbe_ring_data*,struct xgbe_packet_data*) ;
 unsigned int FUNC_24 (struct xgbe_ring_data*,struct xgbe_packet_data*,unsigned int) ;
 int FUNC_25 (struct xgbe_ring*) ;
 int FUNC_26 (struct xgbe_channel*) ;

__attribute__((used)) static int FUNC_27(struct xgbe_channel *VAR_18, int VAR_19)
{
 struct xgbe_prv_data *VAR_20 = VAR_18->pdata;
 struct xgbe_hw_if *VAR_21 = &VAR_20->hw_if;
 struct xgbe_ring *VAR_22 = VAR_18->rx_ring;
 struct xgbe_ring_data *VAR_23;
 struct xgbe_packet_data *VAR_24;
 struct net_device *VAR_25 = VAR_20->netdev;
 struct napi_struct *VAR_26;
 struct sk_buff *VAR_27;
 struct skb_shared_hwtstamps *VAR_28;
 unsigned int VAR_29, VAR_30, VAR_31, VAR_32;
 unsigned int VAR_33, VAR_34, VAR_35, VAR_36;
 unsigned int VAR_37 = 0;
 int VAR_38 = 0;

 FUNC_0("-->xgbe_rx_poll: budget=%d\n", VAR_19);


 if (!VAR_22)
  return 0;

 VAR_29 = 0;
 VAR_31 = 0;

 VAR_26 = (VAR_20->per_channel_irq) ? &VAR_18->napi : &VAR_20->napi;

 VAR_23 = FUNC_1(VAR_22, VAR_22->cur);
 VAR_24 = &VAR_22->packet_data;
 while (VAR_38 < VAR_19) {
  FUNC_0("  cur = %d\n", VAR_22->cur);


  if (!VAR_37 && VAR_23->state_saved) {
   VAR_27 = VAR_23->state.skb;
   VAR_30 = VAR_23->state.error;
   VAR_33 = VAR_23->state.len;
  } else {
   FUNC_8(VAR_24, 0, sizeof(*VAR_24));
   VAR_27 = ((void*)0);
   VAR_30 = 0;
   VAR_33 = 0;
  }

read_again:
  VAR_23 = FUNC_1(VAR_22, VAR_22->cur);

  if (FUNC_25(VAR_22) > (VAR_16 >> 3))
   FUNC_26(VAR_18);

  if (VAR_21->dev_read(VAR_18))
   break;

  VAR_37++;
  VAR_22->cur++;

  VAR_29 = FUNC_2(VAR_24->attributes, VAR_10,
          VAR_7);
  VAR_31 = FUNC_2(VAR_24->attributes,
           VAR_10,
           VAR_2);
  VAR_32 = FUNC_2(VAR_24->attributes,
      VAR_10,
      VAR_1);


  if ((!VAR_29 || VAR_31) && VAR_30)
   goto read_again;

  if (VAR_30 || VAR_24->errors) {
   if (VAR_24->errors)
    FUNC_10(VAR_20, VAR_17, VAR_25,
       "error in received packet\n");
   FUNC_4(VAR_27);
   goto next_packet;
  }

  if (!VAR_32) {

   VAR_34 = FUNC_23(VAR_23, VAR_24);
   VAR_33 += VAR_34;
   VAR_35 = FUNC_24(VAR_23, VAR_24, VAR_33);
   VAR_33 += VAR_35;

   if (!VAR_27) {
    VAR_27 = FUNC_21(VAR_20, VAR_26, VAR_23,
            VAR_34);
    if (!VAR_27) {
     VAR_30 = 1;
     goto skip_data;
    }
   }

   if (VAR_35) {
    FUNC_5(VAR_20->dev,
       VAR_23->rx.buf.dma_base,
       VAR_23->rx.buf.dma_off,
       VAR_23->rx.buf.dma_len,
       VAR_4);

    FUNC_13(VAR_27, FUNC_18(VAR_27)->nr_frags,
      VAR_23->rx.buf.pa.pages,
      VAR_23->rx.buf.pa.pages_offset,
      VAR_35,
      VAR_23->rx.buf.dma_len);
    VAR_23->rx.buf.pa.pages = ((void*)0);
   }
  }

skip_data:
  if (!VAR_29 || VAR_31)
   goto read_again;

  if (!VAR_27)
   goto next_packet;


  VAR_36 = VAR_25->mtu + VAR_5;
  if (!(VAR_25->features & VAR_8) &&
      (VAR_27->protocol == FUNC_7(VAR_6)))
   VAR_36 += VAR_15;

  if (VAR_27->len > VAR_36) {
   FUNC_10(VAR_20, VAR_17, VAR_25,
      "packet length exceeds configured MTU\n");
   FUNC_4(VAR_27);
   goto next_packet;
  }

  if (FUNC_11(VAR_20))
   FUNC_22(VAR_25, VAR_27, 0);

  FUNC_14(VAR_27);
  if (FUNC_2(VAR_24->attributes,
       VAR_10, VAR_3))
   VAR_27->ip_summed = VAR_0;

  if (FUNC_2(VAR_24->attributes,
       VAR_10, VAR_12)) {
   VAR_27->encapsulation = 1;

   if (FUNC_2(VAR_24->attributes,
        VAR_10, VAR_13))
    VAR_27->csum_level = 1;
  }

  if (FUNC_2(VAR_24->attributes,
       VAR_10, VAR_14))
   FUNC_3(VAR_27, FUNC_7(VAR_6),
            VAR_24->vlan_ctag);

  if (FUNC_2(VAR_24->attributes,
       VAR_10, VAR_11)) {
   u64 VAR_39;

   VAR_39 = FUNC_20(&VAR_20->tstamp_tc,
          VAR_24->rx_tstamp);
   VAR_28 = FUNC_15(VAR_27);
   VAR_28->hwtstamp = FUNC_12(VAR_39);
  }

  if (FUNC_2(VAR_24->attributes,
       VAR_10, VAR_9))
   FUNC_17(VAR_27, VAR_24->rss_hash,
         VAR_24->rss_hash_type);

  VAR_27->dev = VAR_25;
  VAR_27->protocol = FUNC_6(VAR_27, VAR_25);
  FUNC_16(VAR_27, VAR_18->queue_index);

  FUNC_9(VAR_26, VAR_27);

next_packet:
  VAR_38++;
 }


 if (VAR_37 && (!VAR_29 || VAR_31)) {
  VAR_23 = FUNC_1(VAR_22, VAR_22->cur);
  VAR_23->state_saved = 1;
  VAR_23->state.skb = VAR_27;
  VAR_23->state.len = VAR_33;
  VAR_23->state.error = VAR_30;
 }

 FUNC_0("<--xgbe_rx_poll: packet_count = %d\n", VAR_38);

 return VAR_38;
}

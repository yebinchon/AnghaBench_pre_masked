
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


struct xlgmac_pkt_info {int rss_hash_type; int rss_hash; int attributes; int vlan_ctag; scalar_t__ errors; } ;
struct xlgmac_ring {int cur; struct xlgmac_pkt_info pkt_info; } ;
struct TYPE_10__ {int rx_vlan_packets; } ;
struct napi_struct {int dummy; } ;
struct xlgmac_hw_ops {scalar_t__ (* dev_read ) (struct xlgmac_channel*) ;} ;
struct xlgmac_pdata {TYPE_4__ stats; int dev; struct napi_struct napi; scalar_t__ per_channel_irq; struct xlgmac_hw_ops hw_ops; struct net_device* netdev; } ;
struct TYPE_11__ {unsigned int error; unsigned int len; struct sk_buff* skb; } ;
struct TYPE_7__ {int * pages; int pages_offset; } ;
struct TYPE_8__ {TYPE_1__ pa; int dma_len; int dma_off; int dma_base; } ;
struct TYPE_9__ {unsigned int len; TYPE_2__ buf; } ;
struct xlgmac_desc_data {int state_saved; TYPE_5__ state; TYPE_3__ rx; } ;
struct xlgmac_channel {int queue_index; struct napi_struct napi; struct xlgmac_ring* rx_ring; struct xlgmac_pdata* pdata; } ;
struct sk_buff {scalar_t__ protocol; unsigned int len; struct net_device* dev; int ip_summed; } ;
struct net_device {unsigned int mtu; int features; } ;
struct TYPE_12__ {int nr_frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 struct xlgmac_desc_data* FUNC_0 (struct xlgmac_ring*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ VAR_18 ;
 int FUNC_3 (struct sk_buff*,scalar_t__,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct xlgmac_pkt_info*,int ,int) ;
 int FUNC_9 (struct napi_struct*,struct sk_buff*) ;
 int FUNC_10 (struct xlgmac_pdata*,int ,struct net_device*,char*) ;
 scalar_t__ FUNC_11 (struct xlgmac_pdata*) ;
 int VAR_19 ;
 int FUNC_12 (struct sk_buff*,int ,int *,int ,unsigned int,int ) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*,int ) ;
 int FUNC_15 (struct sk_buff*,int ,int ) ;
 TYPE_6__* FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (struct xlgmac_channel*) ;
 struct sk_buff* FUNC_18 (struct xlgmac_pdata*,struct napi_struct*,struct xlgmac_desc_data*,unsigned int) ;
 int FUNC_19 (struct net_device*,struct sk_buff*,int) ;
 scalar_t__ FUNC_20 (struct xlgmac_ring*) ;
 int FUNC_21 (struct xlgmac_channel*) ;

__attribute__((used)) static int FUNC_22(struct xlgmac_channel *VAR_20, int VAR_21)
{
 struct xlgmac_pdata *VAR_22 = VAR_20->pdata;
 struct xlgmac_ring *VAR_23 = VAR_20->rx_ring;
 struct net_device *VAR_24 = VAR_22->netdev;
 unsigned int VAR_25, VAR_26, VAR_27;
 unsigned int VAR_28, VAR_29;
 struct xlgmac_desc_data *VAR_30;
 struct xlgmac_pkt_info *VAR_31;
 unsigned int VAR_32, VAR_33;
 struct xlgmac_hw_ops *VAR_34;
 unsigned int VAR_35 = 0;
 struct napi_struct *VAR_36;
 struct sk_buff *VAR_37;
 int VAR_38 = 0;

 VAR_34 = &VAR_22->hw_ops;


 if (!VAR_23)
  return 0;

 VAR_32 = 0;
 VAR_28 = 0;

 VAR_36 = (VAR_22->per_channel_irq) ? &VAR_20->napi : &VAR_22->napi;

 VAR_30 = FUNC_0(VAR_23, VAR_23->cur);
 VAR_31 = &VAR_23->pkt_info;
 while (VAR_38 < VAR_21) {

  if (!VAR_35 && VAR_30->state_saved) {
   VAR_37 = VAR_30->state.skb;
   VAR_33 = VAR_30->state.error;
   VAR_25 = VAR_30->state.len;
  } else {
   FUNC_8(VAR_31, 0, sizeof(*VAR_31));
   VAR_37 = ((void*)0);
   VAR_33 = 0;
   VAR_25 = 0;
  }

read_again:
  VAR_30 = FUNC_0(VAR_23, VAR_23->cur);

  if (FUNC_20(VAR_23) > VAR_18)
   FUNC_21(VAR_20);

  if (VAR_34->dev_read(VAR_20))
   break;

  VAR_35++;
  VAR_23->cur++;

  VAR_32 = FUNC_1(
     VAR_31->attributes,
     VAR_12,
     VAR_11);
  VAR_28 = FUNC_1(
     VAR_31->attributes,
     VAR_7,
     VAR_6);
  VAR_29 = FUNC_1(
     VAR_31->attributes,
     VAR_8,
     VAR_5);


  if ((VAR_32 || VAR_28) && VAR_33)
   goto read_again;

  if (VAR_33 || VAR_31->errors) {
   if (VAR_31->errors)
    FUNC_10(VAR_22, VAR_19, VAR_24,
       "error in received packet\n");
   FUNC_4(VAR_37);
   goto next_packet;
  }

  if (!VAR_29) {

   VAR_26 = VAR_30->rx.len - VAR_25;
   VAR_25 += VAR_26;

   if (VAR_26 && !VAR_37) {
    VAR_37 = FUNC_18(VAR_22, VAR_36, VAR_30,
       VAR_26);
    if (!VAR_37)
     VAR_33 = 1;
   } else if (VAR_26) {
    FUNC_5(
      VAR_22->dev,
      VAR_30->rx.buf.dma_base,
      VAR_30->rx.buf.dma_off,
      VAR_30->rx.buf.dma_len,
      VAR_1);

    FUNC_12(
     VAR_37, FUNC_16(VAR_37)->nr_frags,
     VAR_30->rx.buf.pa.pages,
     VAR_30->rx.buf.pa.pages_offset,
     VAR_26,
     VAR_30->rx.buf.dma_len);
    VAR_30->rx.buf.pa.pages = ((void*)0);
   }
  }

  if (VAR_32 || VAR_28)
   goto read_again;

  if (!VAR_37)
   goto next_packet;


  VAR_27 = VAR_24->mtu + VAR_2;
  if (!(VAR_24->features & VAR_4) &&
      (VAR_37->protocol == FUNC_7(VAR_3)))
   VAR_27 += VAR_17;

  if (VAR_37->len > VAR_27) {
   FUNC_10(VAR_22, VAR_19, VAR_24,
      "packet length exceeds configured MTU\n");
   FUNC_4(VAR_37);
   goto next_packet;
  }

  if (FUNC_11(VAR_22))
   FUNC_19(VAR_24, VAR_37, 0);

  FUNC_13(VAR_37);
  if (FUNC_1(VAR_31->attributes,
     VAR_10,
        VAR_9))
   VAR_37->ip_summed = VAR_0;

  if (FUNC_1(VAR_31->attributes,
     VAR_16,
        VAR_15)) {
   FUNC_3(VAR_37, FUNC_7(VAR_3),
            VAR_31->vlan_ctag);
   VAR_22->stats.rx_vlan_packets++;
  }

  if (FUNC_1(VAR_31->attributes,
     VAR_14,
        VAR_13))
   FUNC_15(VAR_37, VAR_31->rss_hash,
         VAR_31->rss_hash_type);

  VAR_37->dev = VAR_24;
  VAR_37->protocol = FUNC_6(VAR_37, VAR_24);
  FUNC_14(VAR_37, VAR_20->queue_index);

  FUNC_9(VAR_36, VAR_37);

next_packet:
  VAR_38++;
 }


 if (VAR_35 && (VAR_32 || VAR_28)) {
  VAR_30 = FUNC_0(VAR_23, VAR_23->cur);
  VAR_30->state_saved = 1;
  VAR_30->state.skb = VAR_37;
  VAR_30->state.len = VAR_25;
  VAR_30->state.error = VAR_33;
 }

 FUNC_2("packet_count = %d\n", VAR_38);

 return VAR_38;
}

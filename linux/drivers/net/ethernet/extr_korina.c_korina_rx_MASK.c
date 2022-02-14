
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ data; int protocol; } ;
struct TYPE_3__ {scalar_t__ rx_bytes; int multicast; int rx_packets; int rx_frame_errors; int rx_fifo_errors; int rx_length_errors; int rx_crc_errors; int rx_dropped; int rx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct korina_private {size_t rx_next_done; struct sk_buff** rx_skb; int dma_halt_cnt; TYPE_2__* rx_dma_regs; struct dma_desc* rd_ring; int napi; } ;
struct dma_desc {scalar_t__ devcs; int control; void* ca; } ;
struct TYPE_4__ {int dmas; } ;


 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned long,scalar_t__) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;
 int FUNC_6 (struct korina_private*,struct dma_desc*) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_8 (struct net_device*,int) ;
 struct korina_private* FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (struct sk_buff*,scalar_t__) ;
 int FUNC_12 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_15, int VAR_16)
{
 struct korina_private *VAR_17 = FUNC_9(VAR_15);
 struct dma_desc *VAR_18 = &VAR_17->rd_ring[VAR_17->rx_next_done];
 struct sk_buff *VAR_19, *VAR_20;
 u8 *VAR_21;
 u32 VAR_22, VAR_23, VAR_24;
 int VAR_25;

 FUNC_3((u32)VAR_18, sizeof(*VAR_18));

 for (VAR_25 = 0; VAR_25 < VAR_16; VAR_25++) {
  VAR_19 = VAR_17->rx_skb[VAR_17->rx_next_done];
  VAR_20 = ((void*)0);

  VAR_22 = VAR_18->devcs;

  if ((VAR_13 - (u32)FUNC_1(VAR_18->control)) == 0)
   break;




  if (!(VAR_22 & VAR_8))
   goto next;

  if (!(VAR_22 & VAR_12)) {

   VAR_15->stats.rx_errors++;
   VAR_15->stats.rx_dropped++;
   if (VAR_22 & VAR_6)
    VAR_15->stats.rx_crc_errors++;
   if (VAR_22 & VAR_9)
    VAR_15->stats.rx_length_errors++;
   if (VAR_22 & VAR_11)
    VAR_15->stats.rx_fifo_errors++;
   if (VAR_22 & VAR_7)
    VAR_15->stats.rx_frame_errors++;
   if (VAR_22 & VAR_5)
    VAR_15->stats.rx_frame_errors++;

   goto next;
  }

  VAR_23 = FUNC_2(VAR_22);



  VAR_21 = (u8 *)VAR_17->rx_skb[VAR_17->rx_next_done]->data;


  FUNC_3((unsigned long)VAR_21, VAR_23 - 4);


  VAR_20 = FUNC_8(VAR_15, VAR_13);

  if (!VAR_20)
   break;

  FUNC_11(VAR_19, VAR_23 - 4);
  VAR_19->protocol = FUNC_5(VAR_19, VAR_15);


  FUNC_7(&VAR_17->napi, VAR_19);
  VAR_15->stats.rx_packets++;
  VAR_15->stats.rx_bytes += VAR_23;


  if (VAR_22 & VAR_10)
   VAR_15->stats.multicast++;

  VAR_17->rx_skb[VAR_17->rx_next_done] = VAR_20;

next:
  VAR_18->devcs = 0;


  if (VAR_20)
   VAR_18->ca = FUNC_0(VAR_20->data);
  else
   VAR_18->ca = FUNC_0(VAR_19->data);

  VAR_18->control = FUNC_1(VAR_13) |
   VAR_0 | VAR_1;
  VAR_17->rd_ring[(VAR_17->rx_next_done - 1) &
   VAR_14].control &=
   ~VAR_0;

  VAR_17->rx_next_done = (VAR_17->rx_next_done + 1) & VAR_14;
  FUNC_4((u32)VAR_18, sizeof(*VAR_18));
  VAR_18 = &VAR_17->rd_ring[VAR_17->rx_next_done];
  FUNC_12(~VAR_2, &VAR_17->rx_dma_regs->dmas);
 }

 VAR_24 = FUNC_10(&VAR_17->rx_dma_regs->dmas);

 if (VAR_24 & VAR_4) {
  FUNC_12(~(VAR_4 | VAR_3),
    &VAR_17->rx_dma_regs->dmas);

  VAR_17->dma_halt_cnt++;
  VAR_18->devcs = 0;
  VAR_19 = VAR_17->rx_skb[VAR_17->rx_next_done];
  VAR_18->ca = FUNC_0(VAR_19->data);
  FUNC_4((u32)VAR_18, sizeof(*VAR_18));
  FUNC_6(VAR_17, VAR_18);
 }

 return VAR_25;
}

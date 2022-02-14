
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct timespec64 {int tv_sec; int tv_nsec; } ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int data; int protocol; } ;
struct ravb_private {int* cur_rx; int* num_rx_ring; int* dirty_rx; int tstamp_rx_ctrl; struct sk_buff*** rx_skb; scalar_t__ rx_buf_sz; struct ravb_ex_rx_desc** rx_ring; int * napi; struct net_device_stats* stats; } ;
struct ravb_ex_rx_desc {scalar_t__ die_dt; int msc; int dptr; void* ds_cc; int ts_n; int ts_sl; void* ts_sh; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int rx_missed_errors; int rx_length_errors; int rx_frame_errors; int rx_crc_errors; int rx_errors; int multicast; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {int features; TYPE_1__ dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int,scalar_t__,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct sk_buff*,struct net_device*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct skb_shared_hwtstamps*,int ,int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_13 (struct net_device*,scalar_t__) ;
 struct ravb_private* FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 struct skb_shared_hwtstamps* FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*,int) ;
 int FUNC_20 (struct timespec64) ;

__attribute__((used)) static bool FUNC_21(struct net_device *VAR_14, int *VAR_15, int VAR_16)
{
 struct ravb_private *VAR_17 = FUNC_14(VAR_14);
 int VAR_18 = VAR_17->cur_rx[VAR_16] % VAR_17->num_rx_ring[VAR_16];
 int VAR_19 = (VAR_17->dirty_rx[VAR_16] + VAR_17->num_rx_ring[VAR_16]) -
   VAR_17->cur_rx[VAR_16];
 struct net_device_stats *VAR_20 = &VAR_17->stats[VAR_16];
 struct ravb_ex_rx_desc *VAR_21;
 struct sk_buff *VAR_22;
 dma_addr_t VAR_23;
 struct timespec64 VAR_24;
 u8 VAR_25;
 u16 VAR_26;
 int VAR_27;

 VAR_19 = FUNC_11(VAR_19, *VAR_15);
 VAR_27 = VAR_19;
 VAR_21 = &VAR_17->rx_ring[VAR_16][VAR_18];
 while (VAR_21->die_dt != VAR_1) {

  FUNC_4();
  VAR_25 = VAR_21->msc;
  VAR_26 = FUNC_8(VAR_21->ds_cc) & VAR_13;

  if (--VAR_19 < 0)
   break;


  if (!VAR_26)
   continue;

  if (VAR_25 & VAR_4)
   VAR_20->multicast++;

  if (VAR_25 & (VAR_3 | VAR_5 | VAR_7 | VAR_6 |
       VAR_2)) {
   VAR_20->rx_errors++;
   if (VAR_25 & VAR_3)
    VAR_20->rx_crc_errors++;
   if (VAR_25 & VAR_5)
    VAR_20->rx_frame_errors++;
   if (VAR_25 & (VAR_6 | VAR_7))
    VAR_20->rx_length_errors++;
   if (VAR_25 & VAR_2)
    VAR_20->rx_missed_errors++;
  } else {
   u32 VAR_28 = VAR_17->tstamp_rx_ctrl & VAR_11;

   VAR_22 = VAR_17->rx_skb[VAR_16][VAR_18];
   VAR_17->rx_skb[VAR_16][VAR_18] = ((void*)0);
   FUNC_5(VAR_14->dev.parent, FUNC_9(VAR_21->dptr),
      VAR_17->rx_buf_sz,
      VAR_0);
   VAR_28 &= (VAR_16 == VAR_10) ?
     VAR_12 :
     ~VAR_12;
   if (VAR_28) {
    struct skb_shared_hwtstamps *VAR_29;

    VAR_29 = FUNC_18(VAR_22);
    FUNC_10(VAR_29, 0, sizeof(*VAR_29));
    VAR_24.tv_sec = ((u64) FUNC_8(VAR_21->ts_sh) <<
          32) | FUNC_9(VAR_21->ts_sl);
    VAR_24.tv_nsec = FUNC_9(VAR_21->ts_n);
    VAR_29->hwtstamp = FUNC_20(VAR_24);
   }

   FUNC_19(VAR_22, VAR_26);
   VAR_22->protocol = FUNC_7(VAR_22, VAR_14);
   if (VAR_14->features & VAR_8)
    FUNC_15(VAR_22);
   FUNC_12(&VAR_17->napi[VAR_16], VAR_22);
   VAR_20->rx_packets++;
   VAR_20->rx_bytes += VAR_26;
  }

  VAR_18 = (++VAR_17->cur_rx[VAR_16]) % VAR_17->num_rx_ring[VAR_16];
  VAR_21 = &VAR_17->rx_ring[VAR_16][VAR_18];
 }


 for (; VAR_17->cur_rx[VAR_16] - VAR_17->dirty_rx[VAR_16] > 0; VAR_17->dirty_rx[VAR_16]++) {
  VAR_18 = VAR_17->dirty_rx[VAR_16] % VAR_17->num_rx_ring[VAR_16];
  VAR_21 = &VAR_17->rx_ring[VAR_16][VAR_18];
  VAR_21->ds_cc = FUNC_0(VAR_17->rx_buf_sz);

  if (!VAR_17->rx_skb[VAR_16][VAR_18]) {
   VAR_22 = FUNC_13(VAR_14,
            VAR_17->rx_buf_sz +
            VAR_9 - 1);
   if (!VAR_22)
    break;
   FUNC_16(VAR_22);
   VAR_23 = FUNC_2(VAR_14->dev.parent, VAR_22->data,
        FUNC_8(VAR_21->ds_cc),
        VAR_0);
   FUNC_17(VAR_22);



   if (FUNC_3(VAR_14->dev.parent, VAR_23))
    VAR_21->ds_cc = FUNC_0(0);
   VAR_21->dptr = FUNC_1(VAR_23);
   VAR_17->rx_skb[VAR_16][VAR_18] = VAR_22;
  }

  FUNC_6();
  VAR_21->die_dt = VAR_1;
 }

 *VAR_15 -= VAR_27 - (++VAR_19);

 return VAR_19 <= 0;
}

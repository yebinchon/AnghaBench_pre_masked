
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int protocol; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; int rx_dropped; int rx_errors; int rx_frame_errors; int rx_over_errors; int rx_crc_errors; int rx_fifo_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct lance_rx_desc {int rmd1_bits; int mblength; } ;
struct lance_private {int rx_new; struct lance_init_block* init_block_mem; } ;
struct lance_init_block {int ** rx_buf; struct lance_rx_desc* brx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 struct sk_buff* FUNC_2 (struct net_device*,int) ;
 struct lance_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,unsigned char*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_8)
{
 struct lance_private *VAR_9 = FUNC_3(VAR_8);
 struct lance_init_block *VAR_10 = VAR_9->init_block_mem;
 struct lance_rx_desc *VAR_11;
 u8 VAR_12;
 int VAR_13, VAR_14 = VAR_9->rx_new;
 struct sk_buff *VAR_15;

 for (VAR_11 = &VAR_10->brx_ring [VAR_14];
      !((VAR_12 = VAR_11->rmd1_bits) & VAR_6);
      VAR_11 = &VAR_10->brx_ring [VAR_14]) {


  if ((VAR_12 & VAR_7) != VAR_7) {
   VAR_8->stats.rx_over_errors++;
   VAR_8->stats.rx_errors++;
  } else if (VAR_12 & VAR_3) {



   if (VAR_12 & VAR_0) VAR_8->stats.rx_fifo_errors++;
   if (VAR_12 & VAR_1) VAR_8->stats.rx_crc_errors++;
   if (VAR_12 & VAR_5) VAR_8->stats.rx_over_errors++;
   if (VAR_12 & VAR_4) VAR_8->stats.rx_frame_errors++;
   if (VAR_12 & VAR_2) VAR_8->stats.rx_errors++;
  } else {
   VAR_13 = (VAR_11->mblength & 0xfff) - 4;
   VAR_15 = FUNC_2(VAR_8, VAR_13 + 2);

   if (VAR_15 == ((void*)0)) {
    VAR_8->stats.rx_dropped++;
    VAR_11->mblength = 0;
    VAR_11->rmd1_bits = VAR_6;
    VAR_9->rx_new = FUNC_0(VAR_14);
    return;
   }

   VAR_8->stats.rx_bytes += VAR_13;

   FUNC_7(VAR_15, 2);
   FUNC_6(VAR_15, VAR_13);
   FUNC_5(VAR_15,
      (unsigned char *)&(VAR_10->rx_buf [VAR_14][0]),
      VAR_13);
   VAR_15->protocol = FUNC_1(VAR_15, VAR_8);
   FUNC_4(VAR_15);
   VAR_8->stats.rx_packets++;
  }


  VAR_11->mblength = 0;
  VAR_11->rmd1_bits = VAR_6;
  VAR_14 = FUNC_0(VAR_14);
 }

 VAR_9->rx_new = VAR_14;
}

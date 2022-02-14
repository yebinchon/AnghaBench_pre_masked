
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tulip_private {int cur_rx; int dirty_rx; TYPE_2__* rx_buffers; int pdev; TYPE_1__* rx_ring; } ;
struct sk_buff {int protocol; int head; int data; } ;
struct TYPE_6__ {short rx_bytes; int rx_packets; int rx_fifo_errors; int rx_crc_errors; int rx_frame_errors; int rx_length_errors; int rx_errors; } ;
struct net_device {TYPE_3__ stats; int dev; } ;
typedef int s32 ;
struct TYPE_5__ {scalar_t__ mapping; struct sk_buff* skb; } ;
struct TYPE_4__ {int status; int buffer1; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,scalar_t__,long long,int ,char*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_3 (int) ;
 struct sk_buff* FUNC_4 (struct net_device*,short) ;
 int FUNC_5 (struct net_device*,char*,int,...) ;
 struct tulip_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,char*,int) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int ,scalar_t__,short,int ) ;
 int FUNC_10 (int ,scalar_t__,short,int ) ;
 int FUNC_11 (int ,scalar_t__,int ,int ) ;
 int FUNC_12 (struct sk_buff*,int ,short) ;
 char* FUNC_13 (struct sk_buff*,short) ;
 int FUNC_14 (struct sk_buff*,int ,short) ;
 int FUNC_15 (struct sk_buff*,int) ;
 int VAR_10 ;
 short VAR_11 ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_12)
{
 struct tulip_private *VAR_13 = FUNC_6(VAR_12);
 int VAR_14 = VAR_13->cur_rx % VAR_3;
 int VAR_15 = VAR_13->dirty_rx + VAR_3 - VAR_13->cur_rx;
 int VAR_16 = 0;

 if (VAR_10 > 4)
  FUNC_5(VAR_12, "In tulip_rx(), entry %d %08x\n",
      VAR_14, VAR_13->rx_ring[VAR_14].status);

 while ( ! (VAR_13->rx_ring[VAR_14].status & FUNC_0(VAR_0))) {
  s32 VAR_17 = FUNC_3(VAR_13->rx_ring[VAR_14].status);
  short VAR_18;

  if (VAR_10 > 5)
   FUNC_5(VAR_12, "In tulip_rx(), entry %d %08x\n",
       VAR_14, VAR_17);
  if (--VAR_15 < 0)
   break;






  VAR_18 = ((VAR_17 >> 16) & 0x7ff) - 4;






  if ((VAR_17 & (VAR_8 |
          VAR_4 |
          VAR_5 |
          VAR_7 |
          VAR_6 |
          VAR_9)) != VAR_9 ||
      VAR_18 > 1518) {
   if ((VAR_17 & (VAR_8 |
        VAR_9)) != VAR_9) {

    if ((VAR_17 & 0xffff) != 0x7fff) {
     if (VAR_10 > 1)
      FUNC_7(VAR_12,
           "Oversized Ethernet frame spanned multiple buffers, status %08x!\n",
           VAR_17);
     VAR_12->stats.rx_length_errors++;
    }
   } else {

    if (VAR_10 > 2)
     FUNC_5(VAR_12, "Receive error, Rx status %08x\n",
         VAR_17);
    VAR_12->stats.rx_errors++;
    if (VAR_18 > 1518 ||
        (VAR_17 & VAR_7))
     VAR_12->stats.rx_length_errors++;
    if (VAR_17 & 0x0004)
     VAR_12->stats.rx_frame_errors++;
    if (VAR_17 & 0x0002)
     VAR_12->stats.rx_crc_errors++;
    if (VAR_17 & 0x0001)
     VAR_12->stats.rx_fifo_errors++;
   }
  } else {
   struct sk_buff *VAR_19;



   if (VAR_18 < VAR_11 &&
       (VAR_19 = FUNC_4(VAR_12, VAR_18 + 2)) != ((void*)0)) {
    FUNC_15(VAR_19, 2);
    FUNC_9(VAR_13->pdev,
           VAR_13->rx_buffers[VAR_14].mapping,
           VAR_18, VAR_1);

    FUNC_12(VAR_19, VAR_13->rx_buffers[VAR_14].skb->data,
       VAR_18);
    FUNC_13(VAR_19, VAR_18);





    FUNC_10(VAR_13->pdev,
              VAR_13->rx_buffers[VAR_14].mapping,
              VAR_18, VAR_1);
   } else {
    char *VAR_20 = FUNC_13(VAR_19 = VAR_13->rx_buffers[VAR_14].skb,
           VAR_18);


    if (VAR_13->rx_buffers[VAR_14].mapping !=
        FUNC_3(VAR_13->rx_ring[VAR_14].buffer1)) {
     FUNC_1(&VAR_12->dev,
      "Internal fault: The skbuff addresses do not match in tulip_rx: %08x vs. %Lx %p / %p\n",
      FUNC_3(VAR_13->rx_ring[VAR_14].buffer1),
      (long long)VAR_13->rx_buffers[VAR_14].mapping,
      VAR_19->head, VAR_20);
    }


    FUNC_11(VAR_13->pdev, VAR_13->rx_buffers[VAR_14].mapping,
       VAR_2, VAR_1);

    VAR_13->rx_buffers[VAR_14].skb = ((void*)0);
    VAR_13->rx_buffers[VAR_14].mapping = 0;
   }
   VAR_19->protocol = FUNC_2(VAR_19, VAR_12);

   FUNC_8(VAR_19);

   VAR_12->stats.rx_packets++;
   VAR_12->stats.rx_bytes += VAR_18;
  }
  VAR_16++;
  VAR_14 = (++VAR_13->cur_rx) % VAR_3;
 }
 return VAR_16;
}

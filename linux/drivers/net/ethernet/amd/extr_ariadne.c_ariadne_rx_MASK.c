
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_short ;
struct sk_buff {int len; scalar_t__ data; int protocol; } ;
struct TYPE_3__ {short rx_bytes; int rx_packets; int rx_dropped; int rx_fifo_errors; int rx_crc_errors; int rx_over_errors; int rx_frame_errors; int rx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct ariadne_private {int cur_rx; TYPE_2__** rx_ring; scalar_t__* rx_buff; } ;
struct TYPE_4__ {int RMD1; int RMD3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 int FUNC_1 (int) ;
 struct sk_buff* FUNC_2 (struct net_device*,short) ;
 int FUNC_3 (struct net_device*,char*,int ,scalar_t__,scalar_t__,scalar_t__,int ) ;
 struct ariadne_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,void const*,short) ;
 int FUNC_7 (struct sk_buff*,short) ;
 int FUNC_8 (struct sk_buff*,int) ;
 short FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_8)
{
 struct ariadne_private *VAR_9 = FUNC_4(VAR_8);
 int VAR_10 = VAR_9->cur_rx % VAR_7;
 int VAR_11;


 while (!(FUNC_1(VAR_9->rx_ring[VAR_10]->RMD1) & VAR_5)) {
  int VAR_12 = FUNC_1(VAR_9->rx_ring[VAR_10]->RMD1);

  if (VAR_12 != (VAR_6 | VAR_2)) {







   if (VAR_12 & VAR_2)
    VAR_8->stats.rx_errors++;
   if (VAR_12 & VAR_3)
    VAR_8->stats.rx_frame_errors++;
   if (VAR_12 & VAR_4)
    VAR_8->stats.rx_over_errors++;
   if (VAR_12 & VAR_1)
    VAR_8->stats.rx_crc_errors++;
   if (VAR_12 & VAR_0)
    VAR_8->stats.rx_fifo_errors++;
   VAR_9->rx_ring[VAR_10]->RMD1 &= 0xff00 | VAR_6 | VAR_2;
  } else {

   short VAR_13 = FUNC_9(VAR_9->rx_ring[VAR_10]->RMD3);
   struct sk_buff *VAR_14;

   VAR_14 = FUNC_2(VAR_8, VAR_13 + 2);
   if (VAR_14 == ((void*)0)) {
    for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
     if (FUNC_1(VAR_9->rx_ring[(VAR_10 + VAR_11) % VAR_7]->RMD1) & VAR_5)
      break;

    if (VAR_11 > VAR_7 - 2) {
     VAR_8->stats.rx_dropped++;
     VAR_9->rx_ring[VAR_10]->RMD1 |= VAR_5;
     VAR_9->cur_rx++;
    }
    break;
   }


   FUNC_8(VAR_14, 2);
   FUNC_7(VAR_14, VAR_13);
   FUNC_6(VAR_14,
      (const void *)VAR_9->rx_buff[VAR_10],
      VAR_13);
   VAR_14->protocol = FUNC_0(VAR_14, VAR_8);
   FUNC_3(VAR_8, "RX pkt type 0x%04x from %pM to %pM data %p len %u\n",
       ((u_short *)VAR_14->data)[6],
       VAR_14->data + 6, VAR_14->data,
       VAR_14->data, VAR_14->len);

   FUNC_5(VAR_14);
   VAR_8->stats.rx_packets++;
   VAR_8->stats.rx_bytes += VAR_13;
  }

  VAR_9->rx_ring[VAR_10]->RMD1 |= VAR_5;
  VAR_10 = (++VAR_9->cur_rx) % VAR_7;
 }

 VAR_9->cur_rx = VAR_9->cur_rx % VAR_7;





 return 0;
}

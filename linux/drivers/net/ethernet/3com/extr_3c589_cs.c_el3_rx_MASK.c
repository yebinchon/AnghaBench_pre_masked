
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct TYPE_2__ {short rx_bytes; int rx_dropped; int rx_packets; int rx_crc_errors; int rx_frame_errors; int rx_length_errors; int rx_over_errors; int rx_errors; } ;
struct net_device {unsigned int base_addr; TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 int FUNC_1 (scalar_t__,int ,short) ;
 short FUNC_2 (scalar_t__) ;
 struct sk_buff* FUNC_3 (struct net_device*,short) ;
 int FUNC_4 (struct net_device*,char*,short,...) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,short) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_4)
{
 unsigned int VAR_5 = VAR_4->base_addr;
 int VAR_6 = 32;
 short VAR_7;

 FUNC_4(VAR_4, "in rx_packet(), status %4.4x, rx_status %4.4x.\n",
        FUNC_2(VAR_5+VAR_0), FUNC_2(VAR_5+VAR_2));
 while (!((VAR_7 = FUNC_2(VAR_5 + VAR_2)) & 0x8000) &&
      VAR_6 > 0) {
  VAR_6--;
  if (VAR_7 & 0x4000) {
   short VAR_8 = VAR_7 & 0x3800;
   VAR_4->stats.rx_errors++;
   switch (VAR_8) {
   case 0x0000:
    VAR_4->stats.rx_over_errors++;
    break;
   case 0x0800:
    VAR_4->stats.rx_length_errors++;
    break;
   case 0x1000:
    VAR_4->stats.rx_frame_errors++;
    break;
   case 0x1800:
    VAR_4->stats.rx_length_errors++;
    break;
   case 0x2000:
    VAR_4->stats.rx_frame_errors++;
    break;
   case 0x2800:
    VAR_4->stats.rx_crc_errors++;
    break;
   }
  } else {
   short VAR_9 = VAR_7 & 0x7ff;
   struct sk_buff *VAR_10;

   VAR_10 = FUNC_3(VAR_4, VAR_9 + 5);

   FUNC_4(VAR_4, "    Receiving packet size %d status %4.4x.\n",
         VAR_9, VAR_7);
   if (VAR_10 != ((void*)0)) {
    FUNC_8(VAR_10, 2);
    FUNC_1(VAR_5+VAR_1, FUNC_7(VAR_10, VAR_9),
   (VAR_9+3)>>2);
    VAR_10->protocol = FUNC_0(VAR_10, VAR_4);
    FUNC_6(VAR_10);
    VAR_4->stats.rx_packets++;
    VAR_4->stats.rx_bytes += VAR_9;
   } else {
    FUNC_4(VAR_4, "couldn't allocate a sk_buff of size %d.\n",
      VAR_9);
    VAR_4->stats.rx_dropped++;
   }
  }

  FUNC_9(VAR_4, VAR_3);
 }
 if (VAR_6 == 0)
  FUNC_5(VAR_4, "too much work in el3_rx!\n");
 return 0;
}

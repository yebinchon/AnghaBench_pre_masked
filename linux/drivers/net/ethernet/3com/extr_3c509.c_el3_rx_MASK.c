
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct TYPE_2__ {short rx_bytes; int rx_dropped; int rx_packets; int rx_crc_errors; int rx_frame_errors; int rx_length_errors; int rx_over_errors; int rx_errors; } ;
struct net_device {int base_addr; int name; TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 int FUNC_1 (scalar_t__,int ,short) ;
 int FUNC_2 (scalar_t__) ;
 struct sk_buff* FUNC_3 (struct net_device*,short) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (char*,int,...) ;
 int FUNC_7 (struct sk_buff*,short) ;
 int FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static int
FUNC_9(struct net_device *VAR_6)
{
 int VAR_7 = VAR_6->base_addr;
 short VAR_8;

 if (VAR_5 > 5)
  FUNC_6("   In rx_packet(), status %4.4x, rx_status %4.4x.\n",
      FUNC_2(VAR_7+VAR_1), FUNC_2(VAR_7+VAR_3));
 while ((VAR_8 = FUNC_2(VAR_7 + VAR_3)) > 0) {
  if (VAR_8 & 0x4000) {
   short VAR_9 = VAR_8 & 0x3800;

   FUNC_5(VAR_4, VAR_7 + VAR_0);
   VAR_6->stats.rx_errors++;
   switch (VAR_9) {
   case 0x0000: VAR_6->stats.rx_over_errors++; break;
   case 0x0800: VAR_6->stats.rx_length_errors++; break;
   case 0x1000: VAR_6->stats.rx_frame_errors++; break;
   case 0x1800: VAR_6->stats.rx_length_errors++; break;
   case 0x2000: VAR_6->stats.rx_frame_errors++; break;
   case 0x2800: VAR_6->stats.rx_crc_errors++; break;
   }
  } else {
   short VAR_10 = VAR_8 & 0x7ff;
   struct sk_buff *VAR_11;

   VAR_11 = FUNC_3(VAR_6, VAR_10 + 5);
   if (VAR_5 > 4)
    FUNC_6("Receiving packet size %d status %4.4x.\n",
        VAR_10, VAR_8);
   if (VAR_11 != ((void*)0)) {
    FUNC_8(VAR_11, 2);


    FUNC_1(VAR_7 + VAR_2, FUNC_7(VAR_11,VAR_10),
      (VAR_10 + 3) >> 2);

    FUNC_5(VAR_4, VAR_7 + VAR_0);
    VAR_11->protocol = FUNC_0(VAR_11,VAR_6);
    FUNC_4(VAR_11);
    VAR_6->stats.rx_bytes += VAR_10;
    VAR_6->stats.rx_packets++;
    continue;
   }
   FUNC_5(VAR_4, VAR_7 + VAR_0);
   VAR_6->stats.rx_dropped++;
   if (VAR_5)
    FUNC_6("%s: Couldn't allocate a sk_buff of size %d.\n",
        VAR_6->name, VAR_10);
  }
  FUNC_2(VAR_7 + VAR_1);
  while (FUNC_2(VAR_7 + VAR_1) & 0x1000)
   FUNC_6("	Waiting for 3c509 to discard packet, status %x.\n",
       FUNC_2(VAR_7 + VAR_1) );
 }

 return 0;
}

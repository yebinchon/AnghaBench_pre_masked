
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct TYPE_2__ {short rx_bytes; int rx_dropped; int rx_packets; int rx_length_errors; int rx_crc_errors; int rx_frame_errors; int rx_over_errors; int rx_errors; } ;
struct net_device {int base_addr; short name; TYPE_1__ stats; } ;


 short VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 unsigned char FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,short) ;
 short FUNC_3 (scalar_t__) ;
 struct sk_buff* FUNC_4 (struct net_device*,short) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (char*,short,...) ;
 int FUNC_8 (struct sk_buff*,short) ;
 int FUNC_9 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_8)
{
 int VAR_9 = VAR_8->base_addr;
 int VAR_10;
 short VAR_11;

 if (VAR_7 > 5)
  FUNC_7("   In rx_packet(), status %4.4x, rx_status %4.4x.\n",
       FUNC_3(VAR_9 + VAR_2), FUNC_3(VAR_9 + VAR_6));
 while ((VAR_11 = FUNC_3(VAR_9 + VAR_6)) > 0) {
  if (VAR_11 & 0x4000) {
   unsigned char VAR_12 = FUNC_1(VAR_9 + VAR_5);
   if (VAR_7 > 2)
    FUNC_7(" Rx error: status %2.2x.\n",
           VAR_12);
   VAR_8->stats.rx_errors++;
   if (VAR_12 & 0x01)
    VAR_8->stats.rx_over_errors++;
   if (VAR_12 & 0x02)
    VAR_8->stats.rx_length_errors++;
   if (VAR_12 & 0x04)
    VAR_8->stats.rx_frame_errors++;
   if (VAR_12 & 0x08)
    VAR_8->stats.rx_crc_errors++;
   if (VAR_12 & 0x10)
    VAR_8->stats.rx_length_errors++;
  } else {

   short VAR_13 = VAR_11 & 0x1fff;
   struct sk_buff *VAR_14;

   VAR_14 = FUNC_4(VAR_8, VAR_13 + 5 + 2);
   if (VAR_7 > 4)
    FUNC_7("Receiving packet size %d status %4.4x.\n",
         VAR_13, VAR_11);
   if (VAR_14 != ((void*)0)) {
    FUNC_9(VAR_14, 2);

    FUNC_2(VAR_9 + VAR_3,
         FUNC_8(VAR_14, VAR_13),
         (VAR_13 + 3) >> 2);
    FUNC_6(VAR_4, VAR_9 + VAR_1);
    VAR_14->protocol = FUNC_0(VAR_14, VAR_8);
    FUNC_5(VAR_14);
    VAR_8->stats.rx_packets++;
    VAR_8->stats.rx_bytes += VAR_13;

    for (VAR_10 = 200; VAR_10 >= 0; VAR_10--)
     if (! (FUNC_3(VAR_9 + VAR_2) & VAR_0))
      break;
    continue;
   } else if (VAR_7)
    FUNC_7("%s: Couldn't allocate a sk_buff of size %d.\n", VAR_8->name, VAR_13);
  }
  FUNC_6(VAR_4, VAR_9 + VAR_1);
  VAR_8->stats.rx_dropped++;

  for (VAR_10 = 200; VAR_10 >= 0; VAR_10--)
   if (!(FUNC_3(VAR_9 + VAR_2) & VAR_0))
    break;
 }
 return 0;
}

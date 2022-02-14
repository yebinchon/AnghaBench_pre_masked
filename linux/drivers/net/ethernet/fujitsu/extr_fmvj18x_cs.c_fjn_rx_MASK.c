
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct sk_buff {int * data; int protocol; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; int rx_dropped; int rx_errors; int rx_over_errors; int rx_crc_errors; int rx_frame_errors; int rx_length_errors; } ;
struct net_device {unsigned int base_addr; TYPE_1__ stats; int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (scalar_t__) ;
 struct sk_buff* FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct net_device*,char*,int,int) ;
 int FUNC_6 (struct net_device*,char*,int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_10)
{
    unsigned int VAR_11 = VAR_10->base_addr;
    int VAR_12 = 10;

    FUNC_9("%s: in rx_packet(), rx_status %02x.\n",
   VAR_10->name, FUNC_1(VAR_11 + VAR_9));

    while ((FUNC_1(VAR_11 + VAR_7) & VAR_2) == 0) {
 u_short VAR_13 = FUNC_3(VAR_11 + VAR_0);

 FUNC_5(VAR_10, "Rxing packet mode %02x status %04x.\n",
     FUNC_1(VAR_11 + VAR_7), VAR_13);

 if (VAR_13 == 0) {
     FUNC_8(VAR_6, VAR_11 + VAR_8);
     break;
 }

 if ((VAR_13 & 0xF0) != 0x20) {
     VAR_10->stats.rx_errors++;
     if (VAR_13 & VAR_4) VAR_10->stats.rx_length_errors++;
     if (VAR_13 & VAR_1) VAR_10->stats.rx_frame_errors++;
     if (VAR_13 & VAR_3) VAR_10->stats.rx_crc_errors++;
     if (VAR_13 & VAR_5) VAR_10->stats.rx_over_errors++;
 } else {
     u_short VAR_14 = FUNC_3(VAR_11 + VAR_0);

     struct sk_buff *VAR_15;

     if (VAR_14 > 1550) {
  FUNC_6(VAR_10, "The FMV-18x claimed a very large packet, size %d\n",
         VAR_14);
  FUNC_8(VAR_6, VAR_11 + VAR_8);
  VAR_10->stats.rx_errors++;
  break;
     }
     VAR_15 = FUNC_4(VAR_10, VAR_14 + 2);
     if (VAR_15 == ((void*)0)) {
  FUNC_8(VAR_6, VAR_11 + VAR_8);
  VAR_10->stats.rx_dropped++;
  break;
     }

     FUNC_11(VAR_15, 2);
     FUNC_2(VAR_11 + VAR_0, FUNC_10(VAR_15, VAR_14),
   (VAR_14 + 1) >> 1);
     VAR_15->protocol = FUNC_0(VAR_15, VAR_10);

     {
  int VAR_16;
  FUNC_9("%s: Rxed packet of length %d: ",
   VAR_10->name, VAR_14);
  for (VAR_16 = 0; VAR_16 < 14; VAR_16++)
   FUNC_9(" %02x", VAR_15->data[VAR_16]);
  FUNC_9(".\n");
     }

     FUNC_7(VAR_15);
     VAR_10->stats.rx_packets++;
     VAR_10->stats.rx_bytes += VAR_14;
 }
 if (--VAR_12 <= 0)
     break;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct TYPE_2__ {int rx_bytes; int rx_fifo_errors; int rx_errors; int multicast; int rx_packets; int rx_dropped; int rx_length_errors; } ;
struct net_device {unsigned long base_addr; TYPE_1__ stats; } ;
struct ei_device {int stop_page; int rx_start_page; unsigned char current_page; } ;
struct e8390_pkt_hdr {int count; int status; unsigned char next; } ;
typedef int rx_frame ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct net_device*,int,struct sk_buff*,unsigned short) ;
 int FUNC_1 (struct net_device*,struct e8390_pkt_hdr*,unsigned char) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (unsigned char,scalar_t__) ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;
 struct sk_buff* FUNC_6 (struct net_device*,int) ;
 int FUNC_7 (struct net_device*,char*,unsigned char,unsigned char) ;
 int FUNC_8 (struct net_device*,char*,unsigned char) ;
 struct ei_device* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct ei_device*,int ,struct net_device*,char*,int,int,unsigned char) ;
 int FUNC_11 (struct ei_device*,int ,struct net_device*,char*,int,...) ;
 scalar_t__ FUNC_12 (struct ei_device*) ;
 int FUNC_13 (struct sk_buff*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_17(struct net_device *VAR_14)
{
 unsigned long VAR_15 = VAR_14->base_addr;
 struct ei_device *VAR_16 = FUNC_9(VAR_14);
 unsigned char VAR_17, VAR_18, VAR_19;
 unsigned short VAR_20;
 int VAR_21 = 0;
 struct e8390_pkt_hdr VAR_22;
 int VAR_23 = VAR_16->stop_page-VAR_16->rx_start_page;

 while (++VAR_21 < 10) {
  int VAR_24, VAR_25;


  FUNC_4(VAR_1+VAR_3, VAR_15 + VAR_0);
  VAR_17 = FUNC_2(VAR_15 + VAR_6);
  FUNC_4(VAR_1+VAR_2, VAR_15 + VAR_0);


  VAR_18 = FUNC_2(VAR_15 + VAR_4) + 1;
  if (VAR_18 >= VAR_16->stop_page)
   VAR_18 = VAR_16->rx_start_page;







  if ((FUNC_12(VAR_16)) &&
      VAR_18 != VAR_16->current_page &&
      (VAR_18 != 0x0 || VAR_17 != 0xFF))
   FUNC_7(VAR_14,
       "mismatched read page pointers %2x vs %2x\n",
       VAR_18, VAR_16->current_page);

  if (VAR_18 == VAR_17)
   break;

  VAR_20 = VAR_18 << 8;
  FUNC_1(VAR_14, &VAR_22, VAR_18);

  VAR_24 = VAR_22.count - sizeof(struct e8390_pkt_hdr);
  VAR_25 = VAR_22.status;

  VAR_19 = VAR_18 + 1 + ((VAR_24+4)>>8);




  if (VAR_22.next != VAR_19 &&
      VAR_22.next != VAR_19 + 1 &&
      VAR_22.next != VAR_19 - VAR_23 &&
      VAR_22.next != VAR_19 + 1 - VAR_23) {
   VAR_16->current_page = VAR_17;
   FUNC_3(VAR_16->current_page-1, VAR_15+VAR_4);
   VAR_14->stats.rx_errors++;
   continue;
  }

  if (VAR_24 < 60 || VAR_24 > 1518) {
   FUNC_10(VAR_16, VAR_13, VAR_14,
      "bogus packet size: %d, status=%#2x nxpg=%#2x\n",
      VAR_22.count, VAR_22.status,
      VAR_22.next);
   VAR_14->stats.rx_errors++;
   VAR_14->stats.rx_length_errors++;
  } else if ((VAR_25 & 0x0F) == VAR_11) {
   struct sk_buff *VAR_26;

   VAR_26 = FUNC_6(VAR_14, VAR_24 + 2);
   if (VAR_26 == ((void*)0)) {
    FUNC_11(VAR_16, VAR_12, VAR_14,
       "Couldn't allocate a sk_buff of size %d\n",
       VAR_24);
    VAR_14->stats.rx_dropped++;
    break;
   } else {
    FUNC_16(VAR_26, 2);
    FUNC_15(VAR_26, VAR_24);
    FUNC_0(VAR_14, VAR_24, VAR_26, VAR_20 + sizeof(VAR_22));
    VAR_26->protocol = FUNC_5(VAR_26, VAR_14);
    if (!FUNC_14(VAR_26))
     FUNC_13(VAR_26);
    VAR_14->stats.rx_packets++;
    VAR_14->stats.rx_bytes += VAR_24;
    if (VAR_25 & VAR_10)
     VAR_14->stats.multicast++;
   }
  } else {
   FUNC_11(VAR_16, VAR_12, VAR_14,
      "bogus packet: status=%#2x nxpg=%#2x size=%d\n",
      VAR_22.status, VAR_22.next,
      VAR_22.count);
   VAR_14->stats.rx_errors++;

   if (VAR_25 & VAR_9)
    VAR_14->stats.rx_fifo_errors++;
  }
  VAR_19 = VAR_22.next;


  if (VAR_19 >= VAR_16->stop_page) {
   FUNC_8(VAR_14, "next frame inconsistency, %#2x\n",
          VAR_19);
   VAR_19 = VAR_16->rx_start_page;
  }
  VAR_16->current_page = VAR_19;
  FUNC_4(VAR_19-1, VAR_15+VAR_4);
 }



 FUNC_4(VAR_7+VAR_8, VAR_15+VAR_5);
}

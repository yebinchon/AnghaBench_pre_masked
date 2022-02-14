
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct TYPE_2__ {int rx_bytes; int rx_fifo_errors; int rx_errors; int multicast; int rx_packets; int rx_dropped; int rx_length_errors; } ;
struct net_device {long base_addr; TYPE_1__ stats; } ;
struct ei_device {unsigned char stop_page; unsigned char rx_start_page; unsigned char current_page; } ;
struct e8390_pkt_hdr {int count; int status; int next; } ;
typedef int rx_frame ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int,struct sk_buff*,unsigned short) ;
 int FUNC_1 (struct net_device*,struct e8390_pkt_hdr*,unsigned char) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (scalar_t__) ;
 struct sk_buff* FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct net_device*,char*,unsigned char,unsigned char) ;
 int FUNC_6 (struct net_device*,char*,unsigned char) ;
 struct ei_device* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct ei_device*,int ,struct net_device*,char*,int,...) ;
 scalar_t__ FUNC_9 (struct ei_device*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (unsigned char,scalar_t__) ;
 int VAR_5 ;
 int FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_14(struct net_device *VAR_6)
{
 long VAR_7 = VAR_6->base_addr;
 struct ei_device *VAR_8 = FUNC_7(VAR_6);
 unsigned char VAR_9, VAR_10, VAR_11;
 unsigned short VAR_12;
 int VAR_13 = 0;
 struct e8390_pkt_hdr VAR_14;

 while (++VAR_13 < 10)
 {
  int VAR_15, VAR_16;


  VAR_9 = FUNC_3(VAR_7 + VAR_1 -1);


  VAR_10 = FUNC_3(VAR_7 + VAR_0) + 1;
  if (VAR_10 >= VAR_8->stop_page)
   VAR_10 = VAR_8->rx_start_page;







  if ((FUNC_9(VAR_8)) &&
      VAR_10 != VAR_8->current_page &&
      (VAR_10 != 0x0 || VAR_9 != 0xFF))
   FUNC_5(VAR_6, "mismatched read page pointers %2x vs %2x\n",
       VAR_10, VAR_8->current_page);

  if (VAR_10 == VAR_9)
   break;

  VAR_12 = VAR_10 << 8;
  FUNC_1(VAR_6, &VAR_14, VAR_10);

  VAR_15 = VAR_14.count - sizeof(struct e8390_pkt_hdr);
  VAR_16 = VAR_14.status;

  VAR_11 = VAR_10 + 1 + ((VAR_15+4)>>8);

  if (VAR_15 < 60 || VAR_15 > 1518)
  {
   FUNC_8(VAR_8, VAR_5, VAR_6,
      "bogus packet size: %d, status=%#2x nxpg=%#2x\n",
      VAR_14.count, VAR_14.status,
      VAR_14.next);
   VAR_6->stats.rx_errors++;
   VAR_6->stats.rx_length_errors++;
  }
   else if ((VAR_16 & 0x0F) == VAR_4)
  {
   struct sk_buff *VAR_17;

   VAR_17 = FUNC_4(VAR_6, VAR_15 + 2);
   if (VAR_17 == ((void*)0))
   {
    FUNC_8(VAR_8, VAR_5, VAR_6,
       "Couldn't allocate a sk_buff of size %d\n",
       VAR_15);
    VAR_6->stats.rx_dropped++;
    break;
   }
   else
   {
    FUNC_13(VAR_17,2);
    FUNC_12(VAR_17, VAR_15);
    FUNC_0(VAR_6, VAR_15, VAR_17, VAR_12 + sizeof(VAR_14));
    VAR_17->protocol=FUNC_2(VAR_17,VAR_6);
    FUNC_10(VAR_17);
    VAR_6->stats.rx_packets++;
    VAR_6->stats.rx_bytes += VAR_15;
    if (VAR_16 & VAR_3)
     VAR_6->stats.multicast++;
   }
  }
  else
  {
   FUNC_8(VAR_8, VAR_5, VAR_6,
      "bogus packet: status=%#2x nxpg=%#2x size=%d\n",
      VAR_14.status, VAR_14.next,
      VAR_14.count);
   VAR_6->stats.rx_errors++;

   if (VAR_16 & VAR_2)
    VAR_6->stats.rx_fifo_errors++;
  }
  VAR_11 = VAR_14.next;


  if (VAR_11 >= VAR_8->stop_page) {
   FUNC_6(VAR_6, "next frame inconsistency, %#2x\n",
        VAR_11);
   VAR_11 = VAR_8->rx_start_page;
  }
  VAR_8->current_page = VAR_11;
  FUNC_11(VAR_11-1, VAR_7+VAR_0);
 }
}

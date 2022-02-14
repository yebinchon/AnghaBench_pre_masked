
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct net_device_stats {unsigned int rx_packets; int rx_dropped; int rx_errors; int rx_length_errors; int rx_fifo_errors; int rx_crc_errors; int rx_over_errors; } ;
struct net_device {struct net_device_stats stats; int * dev_addr; int name; } ;
struct TYPE_3__ {unsigned int command; } ;
struct TYPE_4__ {unsigned int rx_head; TYPE_1__ regs; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (struct net_device*,unsigned char*,unsigned int) ;
 unsigned int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int ,unsigned int) ;
 struct sk_buff* FUNC_7 (struct net_device*,unsigned int) ;
 int FUNC_8 (struct sk_buff*) ;
 unsigned int FUNC_9 (unsigned int) ;
 int FUNC_10 (char*,...) ;
 TYPE_2__* FUNC_11 (struct net_device*) ;
 unsigned char* FUNC_12 (struct sk_buff*,unsigned int) ;
 int FUNC_13 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_16, unsigned int VAR_17)
{
 unsigned int VAR_18 = FUNC_11(VAR_16)->rx_head, VAR_19 = 0;

 FUNC_2(VAR_16);

 do {
  unsigned int VAR_20, VAR_21;
  unsigned char VAR_22[16];







  {
   unsigned int VAR_23;
   FUNC_6(VAR_16, VAR_15, VAR_18);
   VAR_23 = FUNC_5(VAR_16);
   VAR_21 = FUNC_5(VAR_16);
   if ((VAR_21 & (VAR_8 | VAR_5 | VAR_6)) !=
    (VAR_8 | VAR_5) || !VAR_23)
    break;

   VAR_20 = VAR_18 + 4;
   VAR_18 = FUNC_9(VAR_23);
  }
  FUNC_6(VAR_16, VAR_15, VAR_20);
  FUNC_4(VAR_16, VAR_22+2, 12);

if (VAR_18 < VAR_13 || VAR_18 >= VAR_12) {
 int VAR_24;
 FUNC_10("%s: bad next pointer @%04X: ", VAR_16->name, FUNC_11(VAR_16)->rx_head);
 FUNC_10("%02X %02X %02X %02X ", VAR_18 >> 8, VAR_18 & 255, VAR_21 & 255, VAR_21 >> 8);
 for (VAR_24 = 2; VAR_24 < 14; VAR_24++)
   FUNC_10("%02X ", VAR_22[VAR_24]);
 FUNC_10("\n");
 VAR_18 = FUNC_11(VAR_16)->rx_head;
 break;
}



  if (!(*(unsigned long *)&VAR_16->dev_addr[0] ^ *(unsigned long *)&VAR_22[2+6]) &&
      !(*(unsigned short *)&VAR_16->dev_addr[4] ^ *(unsigned short *)&VAR_22[2+10])) {
   VAR_17 ++;
   FUNC_3(VAR_18 >> 8, VAR_2);
  } else
  if (!(VAR_21 & (VAR_10|VAR_7|VAR_9|VAR_11))) {
   unsigned int VAR_25 = VAR_18 - VAR_20;
   struct sk_buff *VAR_26;

   if (VAR_18 <= VAR_20)
    VAR_25 += VAR_12 - VAR_13;

   VAR_26 = FUNC_7(VAR_16, VAR_25 + 2);
   if (VAR_26) {
    unsigned char *VAR_27;

    FUNC_13(VAR_26, 2);
    VAR_27 = FUNC_12(VAR_26, VAR_25);
    FUNC_4(VAR_16, VAR_27 + 12, VAR_25 - 12);
    FUNC_3(VAR_18 >> 8, VAR_2);
    *(unsigned short *)(VAR_27 + 0) = *(unsigned short *)(VAR_22 + 2);
    *(unsigned long *)(VAR_27 + 2) = *(unsigned long *)(VAR_22 + 4);
    *(unsigned long *)(VAR_27 + 6) = *(unsigned long *)(VAR_22 + 8);
    *(unsigned short *)(VAR_27 + 10) = *(unsigned short *)(VAR_22 + 12);
    VAR_26->protocol = FUNC_0(VAR_26, VAR_16);
    FUNC_8(VAR_26);
    VAR_19 ++;
   } else {
    FUNC_3(VAR_18 >> 8, VAR_2);
    VAR_16->stats.rx_dropped++;
    goto done;
   }
  } else {
   struct net_device_stats *VAR_28 = &VAR_16->stats;
   FUNC_3(VAR_18 >> 8, VAR_2);
   if (VAR_21 & VAR_10) VAR_28->rx_over_errors ++;
   if (VAR_21 & VAR_7) VAR_28->rx_crc_errors ++;
   if (VAR_21 & VAR_9) VAR_28->rx_fifo_errors ++;
   if (VAR_21 & VAR_11) VAR_28->rx_length_errors ++;
   VAR_28->rx_errors++;
  }
 }
 while (-- VAR_17);

done:
 VAR_16->stats.rx_packets += VAR_19;
 FUNC_11(VAR_16)->rx_head = VAR_18;




 if (!(FUNC_1(VAR_4) & VAR_14)) {
  VAR_16->stats.rx_dropped++;
      FUNC_3(VAR_18, VAR_3);
  FUNC_3(FUNC_11(VAR_16)->regs.command | VAR_0, VAR_1);
 }

 return VAR_17;
}

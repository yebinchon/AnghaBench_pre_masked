
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {void* protocol; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; int rx_length_errors; int rx_crc_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct emac_board_info {int emacrx_completed_flag; scalar_t__ membase; int dev; struct sk_buff* skb_last; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (scalar_t__,int *,int) ;
 void* FUNC_4 (struct sk_buff*,struct net_device*) ;
 struct sk_buff* FUNC_5 (struct net_device*,int) ;
 struct emac_board_info* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct emac_board_info*) ;
 scalar_t__ FUNC_8 (struct emac_board_info*) ;
 int FUNC_9 (struct sk_buff*) ;
 void* FUNC_10 (scalar_t__) ;
 int * FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*,int) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_15(struct net_device *VAR_11)
{
 struct emac_board_info *VAR_12 = FUNC_6(VAR_11);
 struct sk_buff *VAR_13;
 u8 *VAR_14;
 bool VAR_15;
 static int VAR_16;
 unsigned int VAR_17;
 u32 VAR_18, VAR_19, VAR_20, VAR_21;


 while (1) {




  VAR_20 = FUNC_10(VAR_12->membase + VAR_5);

  if (FUNC_8(VAR_12))
   FUNC_2(VAR_12->dev, "RXCount: %x\n", VAR_20);

  if ((VAR_12->skb_last != ((void*)0)) && (VAR_16 > 0)) {
   VAR_11->stats.rx_bytes += VAR_16;


   VAR_12->skb_last->protocol = FUNC_4(VAR_12->skb_last,
        VAR_11);
   FUNC_9(VAR_12->skb_last);
   VAR_11->stats.rx_packets++;
   VAR_12->skb_last = ((void*)0);
   VAR_16 = 0;

   VAR_17 = FUNC_10(VAR_12->membase + VAR_4);
   VAR_17 &= ~VAR_3;
   FUNC_14(VAR_17, VAR_12->membase + VAR_4);
  }

  if (!VAR_20) {
   VAR_12->emacrx_completed_flag = 1;
   VAR_17 = FUNC_10(VAR_12->membase + VAR_2);
   VAR_17 |= (0xf << 0) | (0x01 << 8);
   FUNC_14(VAR_17, VAR_12->membase + VAR_2);


   VAR_20 = FUNC_10(VAR_12->membase + VAR_5);
   if (!VAR_20)
    return;
  }

  VAR_17 = FUNC_10(VAR_12->membase + VAR_6);
  if (FUNC_8(VAR_12))
   FUNC_2(VAR_12->dev, "receive header: %x\n", VAR_17);
  if (VAR_17 != VAR_10) {

   VAR_17 = FUNC_10(VAR_12->membase + VAR_0);
   FUNC_14(VAR_17 & ~VAR_1,
          VAR_12->membase + VAR_0);


   VAR_17 = FUNC_10(VAR_12->membase + VAR_4);
   FUNC_14(VAR_17 | (1 << 3),
          VAR_12->membase + VAR_4);

   do {
    VAR_17 = FUNC_10(VAR_12->membase + VAR_4);
   } while (VAR_17 & (1 << 3));


   VAR_17 = FUNC_10(VAR_12->membase + VAR_0);
   FUNC_14(VAR_17 | VAR_1,
          VAR_12->membase + VAR_0);
   VAR_17 = FUNC_10(VAR_12->membase + VAR_2);
   VAR_17 |= (0xf << 0) | (0x01 << 8);
   FUNC_14(VAR_17, VAR_12->membase + VAR_2);

   VAR_12->emacrx_completed_flag = 1;

   return;
  }


  VAR_15 = 1;

  VAR_18 = FUNC_10(VAR_12->membase + VAR_6);

  if (FUNC_8(VAR_12))
   FUNC_2(VAR_12->dev, "rxhdr: %x\n", *((int *)(&VAR_18)));

  VAR_21 = FUNC_0(VAR_18);
  VAR_19 = FUNC_1(VAR_18);

  if (FUNC_8(VAR_12))
   FUNC_2(VAR_12->dev, "RX: status %02x, length %04x\n",
    VAR_19, VAR_21);


  if (VAR_21 < 0x40) {
   VAR_15 = 0;
   if (FUNC_7(VAR_12))
    FUNC_2(VAR_12->dev, "RX: Bad Packet (runt)\n");
  }

  if (FUNC_13(!(VAR_19 & VAR_9))) {
   VAR_15 = 0;

   if (VAR_19 & VAR_7) {
    if (FUNC_7(VAR_12))
     FUNC_2(VAR_12->dev, "crc error\n");
    VAR_11->stats.rx_crc_errors++;
   }

   if (VAR_19 & VAR_8) {
    if (FUNC_7(VAR_12))
     FUNC_2(VAR_12->dev, "length error\n");
    VAR_11->stats.rx_length_errors++;
   }
  }


  if (VAR_15) {
   VAR_13 = FUNC_5(VAR_11, VAR_21 + 4);
   if (!VAR_13)
    continue;
   FUNC_12(VAR_13, 2);
   VAR_14 = FUNC_11(VAR_13, VAR_21 - 4);


   if (FUNC_8(VAR_12))
    FUNC_2(VAR_12->dev, "RxLen %x\n", VAR_21);

   FUNC_3(VAR_12->membase + VAR_6,
     VAR_14, VAR_21);
   VAR_11->stats.rx_bytes += VAR_21;


   VAR_13->protocol = FUNC_4(VAR_13, VAR_11);
   FUNC_9(VAR_13);
   VAR_11->stats.rx_packets++;
  }
 }
}

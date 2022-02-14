
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int protocol; int ip_summed; int data; } ;
struct TYPE_4__ {int rx_bytes; int rx_dropped; int rx_packets; int rx_crc_errors; int rx_frame_errors; int rx_length_errors; } ;
struct net_device {int features; TYPE_2__ stats; } ;
struct greth_private {int rx_cur; int devlock; int dev; struct sk_buff** rx_skbuff; TYPE_1__* regs; struct greth_bd* rx_bd_base; } ;
struct greth_bd {int stat; int addr; } ;
struct TYPE_3__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int,scalar_t__,int ) ;
 int FUNC_7 (struct sk_buff*,struct net_device*) ;
 int FUNC_8 (struct greth_private*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 struct sk_buff* FUNC_15 (struct net_device*,scalar_t__) ;
 struct greth_private* FUNC_16 (struct net_device*) ;
 scalar_t__ FUNC_17 (struct greth_private*) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (int) ;
 int FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*,int) ;
 int FUNC_22 (struct sk_buff*,scalar_t__) ;
 int FUNC_23 (int *,unsigned long) ;
 int FUNC_24 (int *,unsigned long) ;
 scalar_t__ FUNC_25 (int) ;
 int FUNC_26 () ;

__attribute__((used)) static int FUNC_27(struct net_device *VAR_18, int VAR_19)
{
 struct greth_private *VAR_20;
 struct greth_bd *VAR_21;
 struct sk_buff *VAR_22, *VAR_23;
 int VAR_24;
 int VAR_25, VAR_26 = 0;
 u32 VAR_27, VAR_28;
 unsigned long VAR_29;

 VAR_20 = FUNC_16(VAR_18);

 for (VAR_26 = 0; VAR_26 < VAR_19; ++VAR_26) {

  VAR_21 = VAR_20->rx_bd_base + VAR_20->rx_cur;
  VAR_22 = VAR_20->rx_skbuff[VAR_20->rx_cur];
  FUNC_0(VAR_20->regs->status, VAR_6 | VAR_7);
  FUNC_13();
  VAR_27 = FUNC_10(&VAR_21->stat);
  VAR_25 = 0;

  if (VAR_27 & VAR_2)
   break;


  if (FUNC_25(VAR_27 & VAR_14)) {

   if (VAR_27 & VAR_10) {
    VAR_18->stats.rx_length_errors++;
    VAR_25 = 1;
   } else if (VAR_27 &
       (VAR_8 | VAR_12 | VAR_11)) {
    VAR_18->stats.rx_frame_errors++;
    VAR_25 = 1;
   } else if (VAR_27 & VAR_9) {
    VAR_18->stats.rx_crc_errors++;
    VAR_25 = 1;
   }
  }



  if (!VAR_25 && (VAR_23=FUNC_15(VAR_18, VAR_15 + VAR_17))) {
   FUNC_22(VAR_23, VAR_17);

   VAR_28 = FUNC_4(VAR_20->dev,
            VAR_23->data,
            VAR_15 + VAR_17,
            VAR_1);

   if (!FUNC_5(VAR_20->dev, VAR_28)) {

    VAR_24 = VAR_27 & VAR_4;

    FUNC_6(VAR_20->dev,
       FUNC_10(&VAR_21->addr),
       VAR_15 + VAR_17,
       VAR_1);

    if (FUNC_17(VAR_20))
     FUNC_9(FUNC_19(FUNC_10(&VAR_21->addr)), VAR_24);

    FUNC_21(VAR_22, VAR_24);

    if (VAR_18->features & VAR_16 && FUNC_12(VAR_27))
     VAR_22->ip_summed = VAR_0;
    else
     FUNC_20(VAR_22);

    VAR_22->protocol = FUNC_7(VAR_22, VAR_18);
    VAR_18->stats.rx_packets++;
    VAR_18->stats.rx_bytes += VAR_24;
    FUNC_18(VAR_22);

    VAR_20->rx_skbuff[VAR_20->rx_cur] = VAR_23;
    FUNC_11(&VAR_21->addr, VAR_28);
   } else {
    if (FUNC_14())
     FUNC_3(VAR_20->dev, "Could not create DMA mapping, dropping packet\n");
    FUNC_2(VAR_23);

    VAR_18->stats.rx_dropped++;
   }
  } else if (VAR_25) {

   VAR_18->stats.rx_dropped++;
  } else {






   if (FUNC_14())
    FUNC_3(VAR_20->dev, "Could not allocate SKB, dropping packet\n");

   VAR_18->stats.rx_dropped++;
  }

  VAR_27 = VAR_2 | VAR_3;
  if (VAR_20->rx_cur == VAR_13) {
   VAR_27 |= VAR_5;
  }

  FUNC_26();
  FUNC_11(&VAR_21->stat, VAR_27);
  FUNC_23(&VAR_20->devlock, VAR_29);
  FUNC_8(VAR_20);
  FUNC_24(&VAR_20->devlock, VAR_29);
  VAR_20->rx_cur = FUNC_1(VAR_20->rx_cur);
 }

 return VAR_26;

}

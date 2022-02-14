
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int protocol; } ;
struct TYPE_4__ {int rx_bytes; int rx_packets; int rx_dropped; int rx_errors; int rx_crc_errors; int rx_frame_errors; int rx_length_errors; } ;
struct net_device {TYPE_2__ stats; int dev; } ;
struct greth_private {int rx_cur; int devlock; int dev; TYPE_1__* regs; struct greth_bd* rx_bd_base; } ;
struct greth_bd {int stat; int addr; } ;
struct TYPE_3__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int,int,int ) ;
 int FUNC_4 (int ,int,int ,int ) ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;
 int FUNC_6 (struct greth_private*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 struct sk_buff* FUNC_12 (struct net_device*,scalar_t__) ;
 struct greth_private* FUNC_13 (struct net_device*) ;
 scalar_t__ FUNC_14 (struct greth_private*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (struct sk_buff*,int ,int) ;
 int FUNC_18 (struct sk_buff*,scalar_t__) ;
 int FUNC_19 (int *,unsigned long) ;
 int FUNC_20 (int *,unsigned long) ;
 scalar_t__ FUNC_21 (int) ;
 int FUNC_22 () ;

__attribute__((used)) static int FUNC_23(struct net_device *VAR_15, int VAR_16)
{
 struct greth_private *VAR_17;
 struct greth_bd *VAR_18;
 struct sk_buff *VAR_19;
 int VAR_20;
 int VAR_21, VAR_22;
 u32 VAR_23, VAR_24;
 unsigned long VAR_25;

 VAR_17 = FUNC_13(VAR_15);

 for (VAR_22 = 0; VAR_22 < VAR_16; ++VAR_22) {

  VAR_18 = VAR_17->rx_bd_base + VAR_17->rx_cur;
  FUNC_0(VAR_17->regs->status, VAR_5 | VAR_6);
  FUNC_10();
  VAR_23 = FUNC_8(&VAR_18->stat);

  if (FUNC_21(VAR_23 & VAR_1)) {
   break;
  }

  VAR_24 = FUNC_8(&VAR_18->addr);
  VAR_21 = 0;


  if (FUNC_21(VAR_23 & VAR_12)) {
   if (VAR_23 & VAR_9) {
    VAR_15->stats.rx_length_errors++;
    VAR_21 = 1;
   }
   if (VAR_23 & (VAR_7 | VAR_10)) {
    VAR_15->stats.rx_frame_errors++;
    VAR_21 = 1;
   }
   if (VAR_23 & VAR_8) {
    VAR_15->stats.rx_crc_errors++;
    VAR_21 = 1;
   }
  }
  if (FUNC_21(VAR_21)) {
   VAR_15->stats.rx_errors++;

  } else {

   VAR_20 = VAR_23 & VAR_3;

   VAR_19 = FUNC_12(VAR_15, VAR_20 + VAR_14);

   if (FUNC_21(VAR_19 == ((void*)0))) {

    if (FUNC_11())
     FUNC_2(&VAR_15->dev, "low on memory - " "packet dropped\n");

    VAR_15->stats.rx_dropped++;

   } else {
    FUNC_18(VAR_19, VAR_14);

    FUNC_3(VAR_17->dev,
       VAR_24,
       VAR_20,
       VAR_0);

    if (FUNC_14(VAR_17))
     FUNC_7(FUNC_16(VAR_24), VAR_20);

    FUNC_17(VAR_19, FUNC_16(VAR_24),
          VAR_20);

    VAR_19->protocol = FUNC_5(VAR_19, VAR_15);
    VAR_15->stats.rx_bytes += VAR_20;
    VAR_15->stats.rx_packets++;
    FUNC_15(VAR_19);
   }
  }

  VAR_23 = VAR_1 | VAR_2;
  if (VAR_17->rx_cur == VAR_11) {
   VAR_23 |= VAR_4;
  }

  FUNC_22();
  FUNC_9(&VAR_18->stat, VAR_23);

  FUNC_4(VAR_17->dev, VAR_24, VAR_13, VAR_0);

  FUNC_19(&VAR_17->devlock, VAR_25);
  FUNC_6(VAR_17);
  FUNC_20(&VAR_17->devlock, VAR_25);

  VAR_17->rx_cur = FUNC_1(VAR_17->rx_cur);
 }

 return VAR_22;
}

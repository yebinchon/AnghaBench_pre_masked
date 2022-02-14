
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ data; int protocol; } ;
struct TYPE_3__ {int rx_bytes; int rx_frame_errors; int rx_crc_errors; int rx_errors; int rx_packets; int rx_dropped; } ;
struct net_device {int features; TYPE_1__ stats; } ;
struct ioc3_private {unsigned long* rxr; int rx_ci; int rx_pi; TYPE_2__* regs; struct sk_buff** rx_skbs; int dma_dev; } ;
struct ioc3_erxbuf {scalar_t__ w0; scalar_t__ err; } ;
typedef unsigned long dma_addr_t ;
struct TYPE_4__ {int erpir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (scalar_t__) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long,int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_4 (struct ioc3_private*,struct sk_buff**,struct ioc3_erxbuf**,unsigned long*) ;
 int FUNC_5 (unsigned long,int ) ;
 int FUNC_6 (struct sk_buff*,int,int) ;
 scalar_t__ FUNC_7 (int) ;
 struct ioc3_private* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (int,int *) ;

__attribute__((used)) static inline void FUNC_12(struct net_device *VAR_13)
{
 struct ioc3_private *VAR_14 = FUNC_8(VAR_13);
 struct sk_buff *VAR_15, *VAR_16;
 int VAR_17, VAR_18, VAR_19;
 struct ioc3_erxbuf *VAR_20;
 unsigned long *VAR_21;
 dma_addr_t VAR_22;
 u32 VAR_23, VAR_24;

 VAR_21 = VAR_14->rxr;
 VAR_17 = VAR_14->rx_ci;
 VAR_18 = VAR_14->rx_pi;

 VAR_15 = VAR_14->rx_skbs[VAR_17];
 VAR_20 = (struct ioc3_erxbuf *)(VAR_15->data - VAR_11);
 VAR_23 = FUNC_0(VAR_20->w0);

 while (VAR_23 & VAR_7) {
  VAR_24 = FUNC_0(VAR_20->err);
  if (VAR_24 & VAR_5) {
   VAR_19 = ((VAR_23 >> VAR_2) & 0x7ff) - 4;
   FUNC_10(VAR_15, VAR_19);
   VAR_15->protocol = FUNC_3(VAR_15, VAR_13);

   if (FUNC_4(VAR_14, &VAR_16, &VAR_20, &VAR_22)) {



    VAR_13->stats.rx_dropped++;
    VAR_16 = VAR_15;
    VAR_22 = VAR_21[VAR_17];
    goto next;
   }

   if (FUNC_7(VAR_13->features & VAR_8))
    FUNC_6(VAR_15,
           VAR_23 & VAR_6,
           VAR_19);

   FUNC_2(VAR_14->dma_dev, VAR_21[VAR_17],
      VAR_10, VAR_0);

   FUNC_9(VAR_15);

   VAR_14->rx_skbs[VAR_17] = ((void*)0);

   VAR_13->stats.rx_packets++;
   VAR_13->stats.rx_bytes += VAR_19;
  } else {




   VAR_16 = VAR_15;
   VAR_22 = VAR_21[VAR_17];
   VAR_13->stats.rx_errors++;
  }
  if (VAR_24 & VAR_3)
   VAR_13->stats.rx_crc_errors++;
  if (VAR_24 & VAR_4)
   VAR_13->stats.rx_frame_errors++;

next:
  VAR_14->rx_skbs[VAR_18] = VAR_16;
  VAR_21[VAR_18] = FUNC_1(FUNC_5(VAR_22, VAR_9));
  VAR_20->w0 = 0;
  VAR_18 = (VAR_18 + 1) & VAR_12;


  VAR_17 = (VAR_17 + 1) & VAR_12;
  VAR_15 = VAR_14->rx_skbs[VAR_17];
  VAR_20 = (struct ioc3_erxbuf *)(VAR_15->data - VAR_11);
  VAR_23 = FUNC_0(VAR_20->w0);
 }
 FUNC_11((VAR_18 << 3) | VAR_1, &VAR_14->regs->erpir);
 VAR_14->rx_pi = VAR_18;
 VAR_14->rx_ci = VAR_17;
}

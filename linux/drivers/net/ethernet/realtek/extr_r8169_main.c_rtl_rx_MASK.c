
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {unsigned int tail; unsigned int len; scalar_t__ pkt_type; int protocol; } ;
struct TYPE_4__ {unsigned int bytes; int syncp; int packets; } ;
struct rtl8169_private {unsigned int cur_rx; TYPE_2__ rx_stats; int napi; struct RxDesc* RxDescArray; int * Rx_databuff; } ;
struct TYPE_3__ {int multicast; int rx_dropped; int rx_length_errors; int rx_crc_errors; int rx_errors; } ;
struct net_device {int features; TYPE_1__ stats; } ;
struct RxDesc {scalar_t__ opts2; int addr; int opts1; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,unsigned int,int ) ;
 int FUNC_3 (int ,int ,unsigned int,int ) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;
 unsigned int FUNC_8 (int,unsigned int) ;
 struct sk_buff* FUNC_9 (int *,unsigned int) ;
 int FUNC_10 (int *,struct sk_buff*) ;
 int FUNC_11 (struct rtl8169_private*,int ,struct net_device*,char*,int) ;
 void* FUNC_12 (int ) ;
 int FUNC_13 (void const*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (struct RxDesc*) ;
 int FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (struct RxDesc*,struct sk_buff*) ;
 int VAR_11 ;
 int FUNC_18 (struct sk_buff*,void const*,unsigned int) ;
 int FUNC_19 (struct rtl8169_private*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int) ;

__attribute__((used)) static int FUNC_23(struct net_device *VAR_12, struct rtl8169_private *VAR_13, u32 VAR_14)
{
 unsigned int VAR_15, VAR_16;
 unsigned int VAR_17;

 VAR_15 = VAR_13->cur_rx;

 for (VAR_16 = FUNC_8(VAR_14, VAR_5); VAR_16 > 0; VAR_16--, VAR_15++) {
  unsigned int VAR_18 = VAR_15 % VAR_5;
  const void *VAR_19 = FUNC_12(VAR_13->Rx_databuff[VAR_18]);
  struct RxDesc *VAR_20 = VAR_13->RxDescArray + VAR_18;
  u32 VAR_21;

  VAR_21 = FUNC_5(VAR_20->opts1);
  if (VAR_21 & VAR_1)
   break;





  FUNC_1();

  if (FUNC_22(VAR_21 & VAR_8)) {
   FUNC_11(VAR_13, VAR_11, VAR_12, "Rx ERROR. status = %08x\n",
       VAR_21);
   VAR_12->stats.rx_errors++;
   if (VAR_21 & (VAR_10 | VAR_9))
    VAR_12->stats.rx_length_errors++;
   if (VAR_21 & VAR_7)
    VAR_12->stats.rx_crc_errors++;
   if (VAR_21 & (VAR_9 | VAR_7) && !(VAR_21 & VAR_10) &&
       VAR_12->features & VAR_3) {
    goto process_pkt;
   }
  } else {
   unsigned int VAR_22;
   struct sk_buff *VAR_23;

process_pkt:
   VAR_22 = VAR_21 & FUNC_0(13, 0);
   if (FUNC_7(!(VAR_12->features & VAR_4)))
    VAR_22 -= VAR_2;





   if (FUNC_22(FUNC_14(VAR_21))) {
    VAR_12->stats.rx_dropped++;
    VAR_12->stats.rx_length_errors++;
    goto release_descriptor;
   }

   VAR_23 = FUNC_9(&VAR_13->napi, VAR_22);
   if (FUNC_22(!VAR_23)) {
    VAR_12->stats.rx_dropped++;
    goto release_descriptor;
   }

   FUNC_2(FUNC_19(VAR_13),
      FUNC_6(VAR_20->addr),
      VAR_22, VAR_0);
   FUNC_13(VAR_19);
   FUNC_18(VAR_23, VAR_19, VAR_22);
   VAR_23->tail += VAR_22;
   VAR_23->len = VAR_22;

   FUNC_3(FUNC_19(VAR_13),
         FUNC_6(VAR_20->addr),
         VAR_22, VAR_0);

   FUNC_16(VAR_23, VAR_21);
   VAR_23->protocol = FUNC_4(VAR_23, VAR_12);

   FUNC_17(VAR_20, VAR_23);

   if (VAR_23->pkt_type == VAR_6)
    VAR_12->stats.multicast++;

   FUNC_10(&VAR_13->napi, VAR_23);

   FUNC_20(&VAR_13->rx_stats.syncp);
   VAR_13->rx_stats.packets++;
   VAR_13->rx_stats.bytes += VAR_22;
   FUNC_21(&VAR_13->rx_stats.syncp);
  }
release_descriptor:
  VAR_20->opts2 = 0;
  FUNC_15(VAR_20);
 }

 VAR_17 = VAR_15 - VAR_13->cur_rx;
 VAR_13->cur_rx = VAR_15;

 return VAR_17;
}

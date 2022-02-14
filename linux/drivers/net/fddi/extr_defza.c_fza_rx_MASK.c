
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int protocol; scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct TYPE_7__ {int rx_bytes; int rx_dropped; int multicast; int rx_packets; } ;
struct fza_private {int ring_hst_rx_index; int* rx_dma; int ring_hst_rx_size; TYPE_4__* ring_hst_rx; int name; TYPE_3__ stats; struct sk_buff** rx_skbuff; TYPE_1__* regs; int bdev; } ;
struct TYPE_6__ {int fc; int* daddr; } ;
struct fza_fddihdr {TYPE_2__ hdr; } ;
struct fza_buffer_tx {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_8__ {int buf0_own; int buffer1; int rmc; } ;
struct TYPE_5__ {int control_a; } ;


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
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int,int,int ) ;
 int FUNC_5 (int ,int,scalar_t__,int ) ;
 int FUNC_6 (struct sk_buff*,struct net_device*) ;
 struct sk_buff* FUNC_7 (struct net_device*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct fza_buffer_tx*,int,int,struct net_device*) ;
 scalar_t__ FUNC_9 (struct fza_private*,int,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 struct fza_private* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (struct sk_buff*,int) ;
 int FUNC_18 (int,int *) ;

__attribute__((used)) static void FUNC_19(struct net_device *VAR_13)
{
 struct fza_private *VAR_14 = FUNC_11(VAR_13);
 struct sk_buff *VAR_15, *VAR_16;
 struct fza_fddihdr *VAR_17;
 dma_addr_t VAR_18, VAR_19;
 u32 VAR_20, VAR_21, VAR_22;
 int VAR_23, VAR_24;
 u8 VAR_25;

 while (1) {
  VAR_23 = VAR_14->ring_hst_rx_index;
  VAR_20 = FUNC_14(&VAR_14->ring_hst_rx[VAR_23].buf0_own);
  if ((VAR_20 & VAR_7) == VAR_6)
   break;

  VAR_21 = FUNC_15(&VAR_14->ring_hst_rx[VAR_23].rmc);
  VAR_15 = VAR_14->rx_skbuff[VAR_23];
  VAR_18 = VAR_14->rx_dma[VAR_23];




  FUNC_3();
  VAR_24 = (VAR_21 & VAR_8) + 3;
  VAR_17 = (struct fza_fddihdr *)VAR_15->data;


  FUNC_4(VAR_14->bdev,
     VAR_18 +
     ((u8 *)&VAR_17->hdr.fc - (u8 *)VAR_17),
     sizeof(VAR_17->hdr.fc),
     VAR_0);
  VAR_25 = VAR_17->hdr.fc;

  if (FUNC_9(VAR_14, VAR_21, VAR_25))
   goto err_rx;


  VAR_16 = FUNC_7(VAR_13, VAR_11 + 511);
  if (VAR_16) {
   FUNC_10(VAR_16, 512);
   VAR_19 = FUNC_1(VAR_14->bdev, VAR_16->data,
      VAR_11,
      VAR_0);
   if (FUNC_2(VAR_14->bdev, VAR_19)) {
    FUNC_0(VAR_16);
    VAR_16 = ((void*)0);
   }
  }
  if (VAR_16) {
   int VAR_26 = VAR_24 - 7;
   int VAR_27;
   int VAR_28;

   FUNC_5(VAR_14->bdev, VAR_18, VAR_11,
      VAR_0);


   if ((VAR_25 & (VAR_2 |
       VAR_4)) ==
        (VAR_1 |
         VAR_3) &&
       (VAR_21 & VAR_9) !=
        VAR_10) {
    if (FUNC_8((struct fza_buffer_tx *)
          VAR_15->data, VAR_24, VAR_21,
          VAR_13)) {
     FUNC_18(VAR_5,
       &VAR_14->regs->control_a);
    }
   }

   VAR_27 = ((VAR_17->hdr.daddr[0] & 0x01) != 0);

   FUNC_17(VAR_15, 3);
   FUNC_16(VAR_15, VAR_26);
   VAR_15->protocol = FUNC_6(VAR_15, VAR_13);

   VAR_28 = FUNC_12(VAR_15);
   if (VAR_28 != VAR_12) {
    VAR_14->stats.rx_packets++;
    VAR_14->stats.rx_bytes += VAR_26;
    if (VAR_27)
     VAR_14->stats.multicast++;
   } else {
    VAR_14->stats.rx_dropped++;
   }

   VAR_15 = VAR_16;
   VAR_18 = VAR_19;
   VAR_14->rx_skbuff[VAR_23] = VAR_15;
   VAR_14->rx_dma[VAR_23] = VAR_18;
  } else {
   VAR_14->stats.rx_dropped++;
   FUNC_13("%s: memory squeeze, dropping packet\n",
      VAR_14->name);
  }

err_rx:
  FUNC_18(0, &VAR_14->ring_hst_rx[VAR_23].rmc);
  VAR_22 = (VAR_18 + 0x1000) >> 9;
  FUNC_18(VAR_22, &VAR_14->ring_hst_rx[VAR_23].buffer1);
  VAR_22 = VAR_18 >> 9 | VAR_6;
  FUNC_18(VAR_22, &VAR_14->ring_hst_rx[VAR_23].buf0_own);
  VAR_14->ring_hst_rx_index =
   (VAR_14->ring_hst_rx_index + 1) % VAR_14->ring_hst_rx_size;
 }
}

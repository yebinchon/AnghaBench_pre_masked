
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_8__ {int syncp; int packets; int bytes; } ;
struct rhine_private {unsigned int dirty_tx; unsigned int cur_tx; int quirks; struct sk_buff** tx_skbuff; scalar_t__* tx_skbuff_dma; TYPE_4__ tx_stats; TYPE_2__* tx_ring; } ;
struct TYPE_7__ {int collisions; int tx_fifo_errors; int tx_heartbeat_errors; int tx_aborted_errors; int tx_window_errors; int tx_carrier_errors; int tx_errors; } ;
struct TYPE_5__ {struct device* parent; } ;
struct net_device {TYPE_3__ stats; TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int tx_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct device*,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*,unsigned int,unsigned int) ;
 struct rhine_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct rhine_private*,int ,struct net_device*,char*,int,...) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct rhine_private*) ;
 int VAR_3 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_4 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct net_device *VAR_5)
{
 struct rhine_private *VAR_6 = FUNC_5(VAR_5);
 struct device *VAR_7 = VAR_5->dev.parent;
 unsigned int VAR_8 = 0, VAR_9 = 0;
 unsigned int VAR_10 = VAR_6->dirty_tx;
 unsigned int VAR_11;
 struct sk_buff *VAR_12;







 FUNC_11();
 VAR_11 = VAR_6->cur_tx;

 while (VAR_10 != VAR_11) {
  unsigned int VAR_13 = VAR_10 % VAR_2;
  u32 VAR_14 = FUNC_3(VAR_6->tx_ring[VAR_13].tx_status);

  FUNC_6(VAR_6, VAR_4, VAR_5, "Tx scavenge %d status %08x\n",
     VAR_13, VAR_14);
  if (VAR_14 & VAR_1)
   break;
  VAR_12 = VAR_6->tx_skbuff[VAR_13];
  if (VAR_14 & 0x8000) {
   FUNC_6(VAR_6, VAR_4, VAR_5,
      "Transmit error, Tx status %08x\n", VAR_14);
   VAR_5->stats.tx_errors++;
   if (VAR_14 & 0x0400)
    VAR_5->stats.tx_carrier_errors++;
   if (VAR_14 & 0x0200)
    VAR_5->stats.tx_window_errors++;
   if (VAR_14 & 0x0100)
    VAR_5->stats.tx_aborted_errors++;
   if (VAR_14 & 0x0080)
    VAR_5->stats.tx_heartbeat_errors++;
   if (((VAR_6->quirks & VAR_3) && VAR_14 & 0x0002) ||
       (VAR_14 & 0x0800) || (VAR_14 & 0x1000)) {
    VAR_5->stats.tx_fifo_errors++;
    VAR_6->tx_ring[VAR_13].tx_status = FUNC_0(VAR_1);
    break;
   }

  } else {
   if (VAR_6->quirks & VAR_3)
    VAR_5->stats.collisions += (VAR_14 >> 3) & 0x0F;
   else
    VAR_5->stats.collisions += VAR_14 & 0x0F;
   FUNC_6(VAR_6, VAR_4, VAR_5, "collisions: %1.1x:%1.1x\n",
      (VAR_14 >> 3) & 0xF, VAR_14 & 0xF);

   FUNC_13(&VAR_6->tx_stats.syncp);
   VAR_6->tx_stats.bytes += VAR_12->len;
   VAR_6->tx_stats.packets++;
   FUNC_14(&VAR_6->tx_stats.syncp);
  }

  if (VAR_6->tx_skbuff_dma[VAR_13]) {
   FUNC_2(VAR_7,
      VAR_6->tx_skbuff_dma[VAR_13],
      VAR_12->len,
      VAR_0);
  }
  VAR_9 += VAR_12->len;
  VAR_8++;
  FUNC_1(VAR_12);
  VAR_6->tx_skbuff[VAR_13] = ((void*)0);
  VAR_10++;
 }

 VAR_6->dirty_tx = VAR_10;

 FUNC_12();

 FUNC_4(VAR_5, VAR_8, VAR_9);


 if (!FUNC_10(VAR_6) && FUNC_7(VAR_5)) {
  FUNC_9(VAR_5);
  FUNC_11();

  if (FUNC_10(VAR_6))
   FUNC_8(VAR_5);
 }
}

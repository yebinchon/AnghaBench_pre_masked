
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; } ;
struct cp_private {unsigned int tx_head; unsigned int tx_tail; int* tx_opts; TYPE_3__* dev; struct sk_buff** tx_skb; TYPE_1__* pdev; struct cp_desc* tx_ring; } ;
struct cp_desc {int addr; int opts1; } ;
struct TYPE_7__ {int collisions; int tx_bytes; int tx_packets; int tx_fifo_errors; int tx_carrier_errors; int tx_aborted_errors; int tx_window_errors; int tx_errors; } ;
struct TYPE_8__ {TYPE_2__ stats; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct cp_private*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,int ,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,unsigned int,unsigned int) ;
 int FUNC_8 (struct cp_private*,int ,TYPE_3__*,char*,unsigned int) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 () ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_11 (struct cp_private *VAR_13)
{
 unsigned VAR_14 = VAR_13->tx_head;
 unsigned VAR_15 = VAR_13->tx_tail;
 unsigned VAR_16 = 0, VAR_17 = 0;

 while (VAR_15 != VAR_14) {
  struct cp_desc *VAR_18 = VAR_13->tx_ring + VAR_15;
  struct sk_buff *VAR_19;
  u32 VAR_20;

  FUNC_10();
  VAR_20 = FUNC_5(VAR_18->opts1);
  if (VAR_20 & VAR_0)
   break;

  VAR_19 = VAR_13->tx_skb[VAR_15];
  FUNC_0(!VAR_19);

  FUNC_4(&VAR_13->pdev->dev, FUNC_6(VAR_18->addr),
     VAR_13->tx_opts[VAR_15] & 0xffff,
     VAR_3);

  if (VAR_20 & VAR_1) {
   if (VAR_20 & (VAR_6 | VAR_7)) {
    FUNC_8(VAR_13, VAR_12, VAR_13->dev,
       "tx err, status 0x%x\n", VAR_20);
    VAR_13->dev->stats.tx_errors++;
    if (VAR_20 & VAR_10)
     VAR_13->dev->stats.tx_window_errors++;
    if (VAR_20 & VAR_9)
     VAR_13->dev->stats.tx_aborted_errors++;
    if (VAR_20 & VAR_8)
     VAR_13->dev->stats.tx_carrier_errors++;
    if (VAR_20 & VAR_7)
     VAR_13->dev->stats.tx_fifo_errors++;
   } else {
    VAR_13->dev->stats.collisions +=
     ((VAR_20 >> VAR_5) & VAR_4);
    VAR_13->dev->stats.tx_packets++;
    VAR_13->dev->stats.tx_bytes += VAR_19->len;
    FUNC_8(VAR_13, VAR_11, VAR_13->dev,
       "tx done, slot %d\n", VAR_15);
   }
   VAR_16 += VAR_19->len;
   VAR_17++;
   FUNC_3(VAR_19);
  }

  VAR_13->tx_skb[VAR_15] = ((void*)0);

  VAR_15 = FUNC_1(VAR_15);
 }

 VAR_13->tx_tail = VAR_15;

 FUNC_7(VAR_13->dev, VAR_17, VAR_16);
 if (FUNC_2(VAR_13) > (VAR_2 + 1))
  FUNC_9(VAR_13->dev);
}

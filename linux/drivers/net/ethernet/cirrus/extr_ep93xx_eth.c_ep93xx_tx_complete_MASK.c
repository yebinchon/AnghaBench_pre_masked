
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int tx_bytes; int collisions; int tx_fifo_errors; int tx_window_errors; int tx_errors; int tx_packets; } ;
struct net_device {TYPE_3__ stats; } ;
struct ep93xx_tstat {int tstat0; } ;
struct ep93xx_priv {int tx_clean_pointer; int tx_pending; int tx_pending_lock; TYPE_2__* descs; } ;
struct TYPE_5__ {TYPE_1__* tdesc; struct ep93xx_tstat* tstat; } ;
struct TYPE_4__ {int tdesc1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ep93xx_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_7)
{
 struct ep93xx_priv *VAR_8 = FUNC_0(VAR_7);
 int VAR_9;

 VAR_9 = 0;

 FUNC_3(&VAR_8->tx_pending_lock);
 while (1) {
  int VAR_10;
  struct ep93xx_tstat *VAR_11;
  u32 VAR_12;

  VAR_10 = VAR_8->tx_clean_pointer;
  VAR_11 = VAR_8->descs->tstat + VAR_10;

  VAR_12 = VAR_11->tstat0;
  if (!(VAR_12 & VAR_3))
   break;

  VAR_11->tstat0 = 0;

  if (VAR_12 & VAR_1)
   FUNC_2("frame aborted %.8x\n", VAR_12);
  if ((VAR_12 & VAR_0) != VAR_10)
   FUNC_2("entry mismatch %.8x\n", VAR_12);

  if (VAR_12 & VAR_5) {
   int VAR_13 = VAR_8->descs->tdesc[VAR_10].tdesc1 & 0xfff;

   VAR_7->stats.tx_packets++;
   VAR_7->stats.tx_bytes += VAR_13;
  } else {
   VAR_7->stats.tx_errors++;
  }

  if (VAR_12 & VAR_2)
   VAR_7->stats.tx_window_errors++;
  if (VAR_12 & VAR_4)
   VAR_7->stats.tx_fifo_errors++;
  VAR_7->stats.collisions += (VAR_12 >> 16) & 0x1f;

  VAR_8->tx_clean_pointer = (VAR_10 + 1) & (VAR_6 - 1);
  if (VAR_8->tx_pending == VAR_6)
   VAR_9 = 1;
  VAR_8->tx_pending--;
 }
 FUNC_4(&VAR_8->tx_pending_lock);

 if (VAR_9)
  FUNC_1(VAR_7);
}

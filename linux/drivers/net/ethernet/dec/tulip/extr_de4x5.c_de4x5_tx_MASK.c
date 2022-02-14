
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct net_device {int base_addr; } ;
struct TYPE_6__ {int collisions; int tx_packets; int tx_aborted_errors; int tx_fifo_errors; int tx_window_errors; int tx_carrier_errors; int tx_errors; } ;
struct TYPE_5__ {int excessive_collisions; } ;
struct de4x5_private {int tx_old; int tx_new; int txRingSize; scalar_t__ interrupt; int ** tx_skb; TYPE_3__ stats; int linkOK; scalar_t__ tx_enable; TYPE_2__ pktStats; TYPE_1__* tx_ring; } ;
typedef int s32 ;
struct TYPE_4__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct de4x5_private*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 struct de4x5_private* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_11)
{
    struct de4x5_private *VAR_12 = FUNC_2(VAR_11);
    u_long VAR_13 = VAR_11->base_addr;
    int VAR_14;
    s32 VAR_15;

    for (VAR_14 = VAR_12->tx_old; VAR_14 != VAR_12->tx_new; VAR_14 = VAR_12->tx_old) {
 VAR_15 = (s32)FUNC_1(VAR_12->tx_ring[VAR_14].status);
 if (VAR_15 < 0) {
     break;
 } else if (VAR_15 != 0x7fffffff) {
     if (VAR_15 & VAR_5) {
  VAR_12->stats.tx_errors++;
  if (VAR_15 & VAR_7) VAR_12->stats.tx_carrier_errors++;
  if (VAR_15 & VAR_6) VAR_12->stats.tx_window_errors++;
  if (VAR_15 & VAR_8) VAR_12->stats.tx_fifo_errors++;
  if (VAR_15 & VAR_4) VAR_12->pktStats.excessive_collisions++;
  if (VAR_15 & VAR_3) VAR_12->stats.tx_aborted_errors++;

  if (VAR_10) {
      FUNC_6(VAR_1, VAR_0);
  }
     } else {
  VAR_12->stats.tx_packets++;
  if (VAR_12->tx_enable) VAR_12->linkOK++;
     }

     VAR_12->stats.collisions += ((VAR_15 & VAR_4) ? 16 :
                          ((VAR_15 & VAR_2) >> 3));


     if (VAR_12->tx_skb[VAR_14] != ((void*)0))
      FUNC_0(VAR_12, VAR_14);
 }


 VAR_12->tx_old = (VAR_12->tx_old + 1) % VAR_12->txRingSize;
    }


    if (VAR_9 && FUNC_3(VAR_11)) {
 if (VAR_12->interrupt)
     FUNC_5(VAR_11);
 else
     FUNC_4(VAR_11);
    }

    return 0;
}

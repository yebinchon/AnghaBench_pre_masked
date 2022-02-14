
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct velocity_td_info {TYPE_3__* skb; } ;
struct TYPE_10__ {int numq; int* tail; scalar_t__* used; struct velocity_td_info** infos; struct tx_desc** rings; } ;
struct TYPE_7__ {int numtx; } ;
struct velocity_info {int mii_status; TYPE_5__* netdev; TYPE_4__ tx; TYPE_1__ options; } ;
struct TYPE_8__ {int len; int TSR; } ;
struct tx_desc {TYPE_2__ tdesc0; } ;
struct net_device_stats {int tx_bytes; int tx_packets; int tx_window_errors; int tx_aborted_errors; int tx_carrier_errors; int tx_heartbeat_errors; int tx_dropped; int tx_errors; } ;
struct TYPE_11__ {struct net_device_stats stats; } ;
struct TYPE_9__ {scalar_t__ len; } ;


 int FUNC_0 (struct velocity_info*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (struct velocity_info*,struct velocity_td_info*,struct tx_desc*) ;

__attribute__((used)) static int FUNC_4(struct velocity_info *VAR_7)
{
 struct tx_desc *VAR_8;
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12 = 0;
 struct velocity_td_info *VAR_13;
 struct net_device_stats *VAR_14 = &VAR_7->netdev->stats;

 for (VAR_9 = 0; VAR_9 < VAR_7->tx.numq; VAR_9++) {
  for (VAR_11 = VAR_7->tx.tail[VAR_9]; VAR_7->tx.used[VAR_9] > 0;
   VAR_11 = (VAR_11 + 1) % VAR_7->options.numtx) {




   VAR_8 = &(VAR_7->tx.rings[VAR_9][VAR_11]);
   VAR_13 = &(VAR_7->tx.infos[VAR_9][VAR_11]);

   if (VAR_8->tdesc0.len & VAR_0)
    break;

   if ((VAR_12++ > 15))
    break;

   if (VAR_8->tdesc0.TSR & VAR_5) {
    VAR_14->tx_errors++;
    VAR_14->tx_dropped++;
    if (VAR_8->tdesc0.TSR & VAR_2)
     VAR_14->tx_heartbeat_errors++;
    if (VAR_8->tdesc0.TSR & VAR_3)
     VAR_14->tx_carrier_errors++;
    if (VAR_8->tdesc0.TSR & VAR_1)
     VAR_14->tx_aborted_errors++;
    if (VAR_8->tdesc0.TSR & VAR_4)
     VAR_14->tx_window_errors++;
   } else {
    VAR_14->tx_packets++;
    VAR_14->tx_bytes += VAR_13->skb->len;
   }
   FUNC_3(VAR_7, VAR_13, VAR_8);
   VAR_7->tx.used[VAR_9]--;
  }
  VAR_7->tx.tail[VAR_9] = VAR_11;

  if (FUNC_0(VAR_7, VAR_9) < 1)
   VAR_10 = 1;
 }




 if (FUNC_1(VAR_7->netdev) && (VAR_10 == 0) &&
     (!(VAR_7->mii_status & VAR_6))) {
  FUNC_2(VAR_7->netdev);
 }
 return VAR_12;
}

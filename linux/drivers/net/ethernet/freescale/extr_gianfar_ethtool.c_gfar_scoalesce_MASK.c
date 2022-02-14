
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int flags; int phydev; } ;
struct gfar_private {int device_flags; int num_rx_queues; int num_tx_queues; int state; TYPE_2__** tx_queue; TYPE_1__** rx_queue; } ;
struct ethtool_coalesce {scalar_t__ rx_coalesce_usecs; scalar_t__ rx_max_coalesced_frames; scalar_t__ tx_coalesce_usecs; scalar_t__ tx_max_coalesced_frames; } ;
struct TYPE_4__ {int txcoalescing; void* txic; } ;
struct TYPE_3__ {int rxcoalescing; void* rxic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct gfar_private*) ;
 int FUNC_3 (struct gfar_private*,scalar_t__) ;
 void* FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (struct net_device*,char*,scalar_t__) ;
 struct gfar_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_8,
     struct ethtool_coalesce *VAR_9)
{
 struct gfar_private *VAR_10 = FUNC_6(VAR_8);
 int VAR_11, VAR_12 = 0;

 if (!(VAR_10->device_flags & VAR_3))
  return -VAR_2;

 if (!VAR_8->phydev)
  return -VAR_1;


 if (VAR_9->rx_coalesce_usecs > VAR_5) {
  FUNC_5(VAR_8, "Coalescing is limited to %d microseconds\n",
       VAR_5);
  return -VAR_0;
 }

 if (VAR_9->rx_max_coalesced_frames > VAR_4) {
  FUNC_5(VAR_8, "Coalescing is limited to %d frames\n",
       VAR_4);
  return -VAR_0;
 }


 if (VAR_9->tx_coalesce_usecs > VAR_5) {
  FUNC_5(VAR_8, "Coalescing is limited to %d microseconds\n",
       VAR_5);
  return -VAR_0;
 }

 if (VAR_9->tx_max_coalesced_frames > VAR_4) {
  FUNC_5(VAR_8, "Coalescing is limited to %d frames\n",
       VAR_4);
  return -VAR_0;
 }

 while (FUNC_9(VAR_6, &VAR_10->state))
  FUNC_1();


 if ((VAR_9->rx_coalesce_usecs == 0) ||
     (VAR_9->rx_max_coalesced_frames == 0)) {
  for (VAR_11 = 0; VAR_11 < VAR_10->num_rx_queues; VAR_11++)
   VAR_10->rx_queue[VAR_11]->rxcoalescing = 0;
 } else {
  for (VAR_11 = 0; VAR_11 < VAR_10->num_rx_queues; VAR_11++)
   VAR_10->rx_queue[VAR_11]->rxcoalescing = 1;
 }

 for (VAR_11 = 0; VAR_11 < VAR_10->num_rx_queues; VAR_11++) {
  VAR_10->rx_queue[VAR_11]->rxic = FUNC_4(
   VAR_9->rx_max_coalesced_frames,
   FUNC_3(VAR_10, VAR_9->rx_coalesce_usecs));
 }


 if ((VAR_9->tx_coalesce_usecs == 0) ||
     (VAR_9->tx_max_coalesced_frames == 0)) {
  for (VAR_11 = 0; VAR_11 < VAR_10->num_tx_queues; VAR_11++)
   VAR_10->tx_queue[VAR_11]->txcoalescing = 0;
 } else {
  for (VAR_11 = 0; VAR_11 < VAR_10->num_tx_queues; VAR_11++)
   VAR_10->tx_queue[VAR_11]->txcoalescing = 1;
 }

 for (VAR_11 = 0; VAR_11 < VAR_10->num_tx_queues; VAR_11++) {
  VAR_10->tx_queue[VAR_11]->txic = FUNC_4(
   VAR_9->tx_max_coalesced_frames,
   FUNC_3(VAR_10, VAR_9->tx_coalesce_usecs));
 }

 if (VAR_8->flags & VAR_7) {
  FUNC_8(VAR_8);
  VAR_12 = FUNC_7(VAR_8);
 } else {
  FUNC_2(VAR_10);
 }

 FUNC_0(VAR_6, &VAR_10->state);

 return VAR_12;
}

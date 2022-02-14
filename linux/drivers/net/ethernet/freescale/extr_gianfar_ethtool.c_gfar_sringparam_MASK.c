
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int flags; } ;
struct gfar_private {int num_rx_queues; int num_tx_queues; int state; TYPE_2__** tx_queue; TYPE_1__** rx_queue; } ;
struct ethtool_ringparam {scalar_t__ rx_pending; scalar_t__ tx_pending; } ;
struct TYPE_4__ {scalar_t__ tx_ring_size; } ;
struct TYPE_3__ {scalar_t__ rx_ring_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct gfar_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_5,
      struct ethtool_ringparam *VAR_6)
{
 struct gfar_private *VAR_7 = FUNC_4(VAR_5);
 int VAR_8 = 0, VAR_9;

 if (VAR_6->rx_pending > VAR_2)
  return -VAR_0;

 if (!FUNC_2(VAR_6->rx_pending)) {
  FUNC_3(VAR_5, "Ring sizes must be a power of 2\n");
  return -VAR_0;
 }

 if (VAR_6->tx_pending > VAR_3)
  return -VAR_0;

 if (!FUNC_2(VAR_6->tx_pending)) {
  FUNC_3(VAR_5, "Ring sizes must be a power of 2\n");
  return -VAR_0;
 }

 while (FUNC_7(VAR_1, &VAR_7->state))
  FUNC_1();

 if (VAR_5->flags & VAR_4)
  FUNC_6(VAR_5);


 for (VAR_9 = 0; VAR_9 < VAR_7->num_rx_queues; VAR_9++)
  VAR_7->rx_queue[VAR_9]->rx_ring_size = VAR_6->rx_pending;

 for (VAR_9 = 0; VAR_9 < VAR_7->num_tx_queues; VAR_9++)
  VAR_7->tx_queue[VAR_9]->tx_ring_size = VAR_6->tx_pending;


 if (VAR_5->flags & VAR_4)
  VAR_8 = FUNC_5(VAR_5);

 FUNC_0(VAR_1, &VAR_7->state);

 return VAR_8;
}

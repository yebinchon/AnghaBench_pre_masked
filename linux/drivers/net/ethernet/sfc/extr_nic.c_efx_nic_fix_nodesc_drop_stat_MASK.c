
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct efx_nic {int rx_nodesc_drops_prev_state; scalar_t__ rx_nodesc_drops_while_down; TYPE_1__* net_dev; scalar_t__ rx_nodesc_drops_total; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;

void FUNC_0(struct efx_nic *VAR_1, u64 *VAR_2)
{

 if (!(VAR_1->net_dev->flags & VAR_0) || !VAR_1->rx_nodesc_drops_prev_state)
  VAR_1->rx_nodesc_drops_while_down +=
   *VAR_2 - VAR_1->rx_nodesc_drops_total;
 VAR_1->rx_nodesc_drops_total = *VAR_2;
 VAR_1->rx_nodesc_drops_prev_state = !!(VAR_1->net_dev->flags & VAR_0);
 *VAR_2 -= VAR_1->rx_nodesc_drops_while_down;
}

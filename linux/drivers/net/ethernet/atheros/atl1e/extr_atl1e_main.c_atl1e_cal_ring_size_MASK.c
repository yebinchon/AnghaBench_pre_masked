
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct atl1e_tpd_desc {int dummy; } ;
struct TYPE_4__ {int real_page_size; } ;
struct TYPE_3__ {int count; } ;
struct atl1e_adapter {int num_rx_queues; TYPE_2__ rx_ring; TYPE_1__ tx_ring; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct atl1e_adapter *VAR_1, u32 *VAR_2)
{
 *VAR_2 = ((u32)(VAR_1->tx_ring.count *
       sizeof(struct atl1e_tpd_desc) + 7

       + VAR_1->rx_ring.real_page_size * VAR_0 *
   VAR_1->num_rx_queues + 31

       + (1 + VAR_0 * VAR_1->num_rx_queues) *
   sizeof(u32) + 3));

}

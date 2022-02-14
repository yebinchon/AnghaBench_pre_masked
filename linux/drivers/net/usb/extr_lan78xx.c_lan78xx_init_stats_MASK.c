
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int rx_unicast_byte_count; int rx_broadcast_byte_count; int rx_multicast_byte_count; int eee_rx_lpi_transitions; int eee_rx_lpi_time; int tx_unicast_byte_count; int tx_broadcast_byte_count; int tx_multicast_byte_count; int eee_tx_lpi_transitions; int eee_tx_lpi_time; } ;
struct TYPE_4__ {TYPE_1__ rollover_max; } ;
struct lan78xx_net {int flags; TYPE_2__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct lan78xx_net *VAR_1)
{
 u32 *VAR_2;
 int VAR_3;




 VAR_2 = (u32 *)&VAR_1->stats.rollover_max;
 for (VAR_3 = 0; VAR_3 < (sizeof(VAR_1->stats.rollover_max) / (sizeof(u32))); VAR_3++)
  VAR_2[VAR_3] = 0xFFFFF;

 VAR_1->stats.rollover_max.rx_unicast_byte_count = 0xFFFFFFFF;
 VAR_1->stats.rollover_max.rx_broadcast_byte_count = 0xFFFFFFFF;
 VAR_1->stats.rollover_max.rx_multicast_byte_count = 0xFFFFFFFF;
 VAR_1->stats.rollover_max.eee_rx_lpi_transitions = 0xFFFFFFFF;
 VAR_1->stats.rollover_max.eee_rx_lpi_time = 0xFFFFFFFF;
 VAR_1->stats.rollover_max.tx_unicast_byte_count = 0xFFFFFFFF;
 VAR_1->stats.rollover_max.tx_broadcast_byte_count = 0xFFFFFFFF;
 VAR_1->stats.rollover_max.tx_multicast_byte_count = 0xFFFFFFFF;
 VAR_1->stats.rollover_max.eee_tx_lpi_transitions = 0xFFFFFFFF;
 VAR_1->stats.rollover_max.eee_tx_lpi_time = 0xFFFFFFFF;

 FUNC_0(VAR_0, &VAR_1->flags);
}

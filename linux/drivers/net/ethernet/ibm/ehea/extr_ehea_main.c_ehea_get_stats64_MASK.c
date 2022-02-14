
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
struct rtnl_link_stats64 {int rx_errors; int multicast; void* rx_packets; void* tx_bytes; void* rx_bytes; void* tx_packets; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int rx_errors; int multicast; } ;
struct ehea_port {int num_def_qps; TYPE_2__ stats; TYPE_1__* port_res; } ;
struct TYPE_3__ {scalar_t__ tx_bytes; scalar_t__ tx_packets; scalar_t__ rx_bytes; scalar_t__ rx_packets; } ;


 struct ehea_port* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
        struct rtnl_link_stats64 *VAR_1)
{
 struct ehea_port *VAR_2 = FUNC_0(VAR_0);
 u64 VAR_3 = 0, VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2->num_def_qps; VAR_7++) {
  VAR_3 += VAR_2->port_res[VAR_7].rx_packets;
  VAR_5 += VAR_2->port_res[VAR_7].rx_bytes;
 }

 for (VAR_7 = 0; VAR_7 < VAR_2->num_def_qps; VAR_7++) {
  VAR_4 += VAR_2->port_res[VAR_7].tx_packets;
  VAR_6 += VAR_2->port_res[VAR_7].tx_bytes;
 }

 VAR_1->tx_packets = VAR_4;
 VAR_1->rx_bytes = VAR_5;
 VAR_1->tx_bytes = VAR_6;
 VAR_1->rx_packets = VAR_3;

 VAR_1->multicast = VAR_2->stats.multicast;
 VAR_1->rx_errors = VAR_2->stats.rx_errors;
}

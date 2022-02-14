
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tx_status ;
struct octeon_ethernet {scalar_t__ port; } ;
struct net_device_stats {int rx_dropped; int rx_frame_errors; int rx_crc_errors; int multicast; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
typedef int rx_status ;
struct TYPE_6__ {scalar_t__ dropped_packets; scalar_t__ fcs_align_err_packets; scalar_t__ inb_errors; scalar_t__ multicast_packets; scalar_t__ octets; scalar_t__ inb_octets; scalar_t__ packets; scalar_t__ inb_packets; } ;
typedef TYPE_1__ cvmx_pko_port_status_t ;
typedef TYPE_1__ cvmx_pip_port_status_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int,TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 struct octeon_ethernet* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static struct net_device_stats *FUNC_5(struct net_device *VAR_1)
{
 cvmx_pip_port_status_t VAR_2;
 cvmx_pko_port_status_t VAR_3;
 struct octeon_ethernet *VAR_4 = FUNC_3(VAR_1);

 if (VAR_4->port < VAR_0) {
  if (FUNC_4()) {

   FUNC_2(&VAR_2, 0, sizeof(VAR_2));
   FUNC_2(&VAR_3, 0, sizeof(VAR_3));
  } else {
   FUNC_0(VAR_4->port, 1, &VAR_2);
   FUNC_1(VAR_4->port, 1, &VAR_3);
  }

  VAR_1->stats.rx_packets += VAR_2.inb_packets;
  VAR_1->stats.tx_packets += VAR_3.packets;
  VAR_1->stats.rx_bytes += VAR_2.inb_octets;
  VAR_1->stats.tx_bytes += VAR_3.octets;
  VAR_1->stats.multicast += VAR_2.multicast_packets;
  VAR_1->stats.rx_crc_errors += VAR_2.inb_errors;
  VAR_1->stats.rx_frame_errors += VAR_2.fcs_align_err_packets;
  VAR_1->stats.rx_dropped += VAR_2.dropped_packets;
 }

 return &VAR_1->stats;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct octeon_device {int num_iqs; int num_oqs; TYPE_4__** droq; TYPE_2__** instr_queue; } ;
struct oct_vf_stats {int rx_bytes; int rx_packets; int tx_bytes; int tx_packets; } ;
struct TYPE_7__ {scalar_t__ rx_bytes_received; scalar_t__ rx_pkts_received; } ;
struct TYPE_8__ {TYPE_3__ stats; } ;
struct TYPE_5__ {scalar_t__ tx_tot_bytes; scalar_t__ tx_done; } ;
struct TYPE_6__ {TYPE_1__ stats; } ;



__attribute__((used)) static void FUNC_0(struct octeon_device *VAR_0,
    struct oct_vf_stats *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_iqs; VAR_2++) {
  if (!VAR_0->instr_queue[VAR_2])
   continue;
  VAR_1->tx_packets += VAR_0->instr_queue[VAR_2]->stats.tx_done;
  VAR_1->tx_bytes += VAR_0->instr_queue[VAR_2]->stats.tx_tot_bytes;
 }

 for (VAR_2 = 0; VAR_2 < VAR_0->num_oqs; VAR_2++) {
  if (!VAR_0->droq[VAR_2])
   continue;
  VAR_1->rx_packets += VAR_0->droq[VAR_2]->stats.rx_pkts_received;
  VAR_1->rx_bytes += VAR_0->droq[VAR_2]->stats.rx_bytes_received;
 }
}

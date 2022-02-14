
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tx_stats ;
struct qlcnic_tx_queue_stats {int tx_bytes; int xmit_finished; int xmit_called; int xmit_off; int xmit_on; } ;
struct TYPE_3__ {scalar_t__ tx_bytes; scalar_t__ xmit_finished; scalar_t__ xmit_called; scalar_t__ xmit_off; scalar_t__ xmit_on; } ;
struct qlcnic_host_tx_ring {TYPE_1__ tx_stats; } ;
struct TYPE_4__ {int txbytes; int xmitfinished; int xmitcalled; int xmit_off; int xmit_on; } ;
struct qlcnic_adapter {int drv_tx_rings; TYPE_2__ stats; struct qlcnic_host_tx_ring* tx_ring; } ;


 int FUNC_0 (struct qlcnic_tx_queue_stats*,int ,int) ;

void FUNC_1(struct qlcnic_adapter *VAR_0)
{
 struct qlcnic_tx_queue_stats VAR_1;
 struct qlcnic_host_tx_ring *VAR_2;
 int VAR_3;

 FUNC_0(&VAR_1, 0, sizeof(VAR_1));
 for (VAR_3 = 0; VAR_3 < VAR_0->drv_tx_rings; VAR_3++) {
  VAR_2 = &VAR_0->tx_ring[VAR_3];
  VAR_1.xmit_on += VAR_2->tx_stats.xmit_on;
  VAR_1.xmit_off += VAR_2->tx_stats.xmit_off;
  VAR_1.xmit_called += VAR_2->tx_stats.xmit_called;
  VAR_1.xmit_finished += VAR_2->tx_stats.xmit_finished;
  VAR_1.tx_bytes += VAR_2->tx_stats.tx_bytes;
 }

 VAR_0->stats.xmit_on = VAR_1.xmit_on;
 VAR_0->stats.xmit_off = VAR_1.xmit_off;
 VAR_0->stats.xmitcalled = VAR_1.xmit_called;
 VAR_0->stats.xmitfinished = VAR_1.xmit_finished;
 VAR_0->stats.txbytes = VAR_1.tx_bytes;
}

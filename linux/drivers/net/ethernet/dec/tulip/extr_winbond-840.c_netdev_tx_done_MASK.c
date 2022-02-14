
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int collisions; int tx_packets; int tx_bytes; int tx_heartbeat_errors; int tx_fifo_errors; int tx_window_errors; int tx_carrier_errors; int tx_aborted_errors; int tx_errors; } ;
struct TYPE_6__ {scalar_t__ full_duplex; } ;
struct netdev_private {scalar_t__ cur_tx; scalar_t__ dirty_tx; scalar_t__ tx_q_bytes; scalar_t__ tx_full; TYPE_4__** tx_skbuff; int * tx_addr; int pci_dev; TYPE_3__ stats; TYPE_2__ mii_if; TYPE_1__* tx_ring; } ;
struct net_device {int dummy; } ;
struct TYPE_8__ {scalar_t__ len; } ;
struct TYPE_5__ {int status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct net_device*,char*,int,...) ;
 struct netdev_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_5)
{
 struct netdev_private *VAR_6 = FUNC_2(VAR_5);
 for (; VAR_6->cur_tx - VAR_6->dirty_tx > 0; VAR_6->dirty_tx++) {
  int VAR_7 = VAR_6->dirty_tx % VAR_3;
  int VAR_8 = VAR_6->tx_ring[VAR_7].status;

  if (VAR_8 < 0)
   break;
  if (VAR_8 & 0x8000) {

   if (VAR_4 > 1)
    FUNC_1(VAR_5, "Transmit error, Tx status %08x\n",
        VAR_8);

   VAR_6->stats.tx_errors++;
   if (VAR_8 & 0x0104) VAR_6->stats.tx_aborted_errors++;
   if (VAR_8 & 0x0C80) VAR_6->stats.tx_carrier_errors++;
   if (VAR_8 & 0x0200) VAR_6->stats.tx_window_errors++;
   if (VAR_8 & 0x0002) VAR_6->stats.tx_fifo_errors++;
   if ((VAR_8 & 0x0080) && VAR_6->mii_if.full_duplex == 0)
    VAR_6->stats.tx_heartbeat_errors++;
  } else {

   if (VAR_4 > 3)
    FUNC_1(VAR_5, "Transmit slot %d ok, Tx status %08x\n",
        VAR_7, VAR_8);

   VAR_6->stats.tx_bytes += VAR_6->tx_skbuff[VAR_7]->len;
   VAR_6->stats.collisions += (VAR_8 >> 3) & 15;
   VAR_6->stats.tx_packets++;
  }

  FUNC_4(VAR_6->pci_dev,VAR_6->tx_addr[VAR_7],
     VAR_6->tx_skbuff[VAR_7]->len,
     VAR_0);
  VAR_6->tx_q_bytes -= VAR_6->tx_skbuff[VAR_7]->len;
  FUNC_0(VAR_6->tx_skbuff[VAR_7]);
  VAR_6->tx_skbuff[VAR_7] = ((void*)0);
 }
 if (VAR_6->tx_full &&
  VAR_6->cur_tx - VAR_6->dirty_tx < VAR_2 &&
  VAR_6->tx_q_bytes < VAR_1) {

  VAR_6->tx_full = 0;
  FUNC_5();
  FUNC_3(VAR_5);
 }
}

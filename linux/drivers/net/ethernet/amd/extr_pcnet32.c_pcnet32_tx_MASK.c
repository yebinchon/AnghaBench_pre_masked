
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcnet32_private {unsigned int dirty_tx; unsigned int cur_tx; unsigned int tx_mod_mask; unsigned int tx_ring_size; scalar_t__ tx_full; scalar_t__* tx_dma_addr; TYPE_3__** tx_skbuff; int pci_dev; int dxsuflo; TYPE_1__* tx_ring; } ;
struct TYPE_5__ {int tx_packets; int collisions; int tx_fifo_errors; int tx_window_errors; int tx_carrier_errors; int tx_aborted_errors; int tx_errors; } ;
struct net_device {TYPE_2__ stats; } ;
struct TYPE_6__ {int len; } ;
struct TYPE_4__ {int misc; scalar_t__ base; int status; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct pcnet32_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pcnet32_private*,int ,struct net_device*,char*,...) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,scalar_t__,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_3)
{
 struct pcnet32_private *VAR_4 = FUNC_3(VAR_3);
 unsigned int VAR_5 = VAR_4->dirty_tx;
 int VAR_6;
 int VAR_7 = 0;

 while (VAR_5 != VAR_4->cur_tx) {
  int VAR_8 = VAR_5 & VAR_4->tx_mod_mask;
  int VAR_9 = (short)FUNC_1(VAR_4->tx_ring[VAR_8].status);

  if (VAR_9 < 0)
   break;

  VAR_4->tx_ring[VAR_8].base = 0;

  if (VAR_9 & 0x4000) {

   int VAR_10 = FUNC_2(VAR_4->tx_ring[VAR_8].misc);
   VAR_3->stats.tx_errors++;
   FUNC_4(VAR_4, VAR_2, VAR_3,
      "Tx error status=%04x err_status=%08x\n",
      VAR_9, VAR_10);
   if (VAR_10 & 0x04000000)
    VAR_3->stats.tx_aborted_errors++;
   if (VAR_10 & 0x08000000)
    VAR_3->stats.tx_carrier_errors++;
   if (VAR_10 & 0x10000000)
    VAR_3->stats.tx_window_errors++;

   if (VAR_10 & 0x40000000) {
    VAR_3->stats.tx_fifo_errors++;


    FUNC_4(VAR_4, VAR_2, VAR_3, "Tx FIFO error!\n");
    VAR_7 = 1;
   }
  } else {
   if (VAR_9 & 0x1800)
    VAR_3->stats.collisions++;
   VAR_3->stats.tx_packets++;
  }


  if (VAR_4->tx_skbuff[VAR_8]) {
   FUNC_7(VAR_4->pci_dev,
      VAR_4->tx_dma_addr[VAR_8],
      VAR_4->tx_skbuff[VAR_8]->
      len, VAR_0);
   FUNC_0(VAR_4->tx_skbuff[VAR_8]);
   VAR_4->tx_skbuff[VAR_8] = ((void*)0);
   VAR_4->tx_dma_addr[VAR_8] = 0;
  }
  VAR_5++;
 }

 VAR_6 = (VAR_4->cur_tx - VAR_5) & (VAR_4->tx_mod_mask + VAR_4->tx_ring_size);
 if (VAR_6 > VAR_4->tx_ring_size) {
  FUNC_4(VAR_4, VAR_1, VAR_3, "out-of-sync dirty pointer, %d vs. %d, full=%d\n",
     VAR_5, VAR_4->cur_tx, VAR_4->tx_full);
  VAR_5 += VAR_4->tx_ring_size;
  VAR_6 -= VAR_4->tx_ring_size;
 }

 if (VAR_4->tx_full &&
     FUNC_5(VAR_3) &&
     VAR_6 < VAR_4->tx_ring_size - 2) {

  VAR_4->tx_full = 0;
  FUNC_6(VAR_3);
 }
 VAR_4->dirty_tx = VAR_5;

 return VAR_7;
}

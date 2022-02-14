
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx_packets; } ;
struct net_device {TYPE_2__ stats; } ;
struct dbdma_cmd {int xfer_status; } ;
struct bmac_data {size_t tx_empty; size_t tx_fill; int lock; scalar_t__ tx_fullup; int ** tx_bufs; TYPE_1__* tx_dma; struct dbdma_cmd* tx_cmds; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int cmdptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct net_device*) ;
 struct dbdma_cmd volatile* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 struct bmac_data* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int VAR_3 ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = (struct net_device *) VAR_5;
 struct bmac_data *VAR_7 = FUNC_6(VAR_6);
 volatile struct dbdma_cmd *VAR_8;
 int VAR_9;
 unsigned long VAR_10;

 FUNC_8(&VAR_7->lock, VAR_10);

 if (VAR_3++ < 10) {
  FUNC_0(("bmac_txdma_intr\n"));
 }




 while (1) {
  VAR_8 = &VAR_7->tx_cmds[VAR_7->tx_empty];
  VAR_9 = FUNC_5(VAR_8->xfer_status);
  if (VAR_3 < 10) {
   FUNC_0(("bmac_txdma_xfer_stat=%#0x\n", VAR_9));
  }
  if (!(VAR_9 & VAR_0)) {



   if (VAR_8 == FUNC_2(FUNC_4(&VAR_7->tx_dma->cmdptr)))
    break;
  }

  if (VAR_7->tx_bufs[VAR_7->tx_empty]) {
   ++VAR_6->stats.tx_packets;
   FUNC_3(VAR_7->tx_bufs[VAR_7->tx_empty]);
  }
  VAR_7->tx_bufs[VAR_7->tx_empty] = ((void*)0);
  VAR_7->tx_fullup = 0;
  FUNC_7(VAR_6);
  if (++VAR_7->tx_empty >= VAR_2)
   VAR_7->tx_empty = 0;
  if (VAR_7->tx_empty == VAR_7->tx_fill)
   break;
 }

 FUNC_9(&VAR_7->lock, VAR_10);

 if (VAR_3 < 10) {
  FUNC_0(("bmac_txdma_intr done->bmac_start\n"));
 }

 FUNC_1(VAR_6);
 return VAR_1;
}

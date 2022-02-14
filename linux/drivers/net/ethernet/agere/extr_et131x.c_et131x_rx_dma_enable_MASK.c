
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct rx_ring {TYPE_1__** fbr; } ;
struct et131x_adapter {TYPE_4__* pdev; TYPE_3__* regs; struct rx_ring rx_ring; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_6__ {int csr; } ;
struct TYPE_7__ {TYPE_2__ rxdma; } ;
struct TYPE_5__ {int buffsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static void FUNC_4(struct et131x_adapter *VAR_7)
{

 u32 VAR_8 = VAR_3;
 struct rx_ring *VAR_9 = &VAR_7->rx_ring;

 if (VAR_9->fbr[1]->buffsize == 4096)
  VAR_8 |= VAR_5;
 else if (VAR_9->fbr[1]->buffsize == 8192)
  VAR_8 |= VAR_4;
 else if (VAR_9->fbr[1]->buffsize == 16384)
  VAR_8 |= VAR_5 | VAR_4;

 VAR_8 |= VAR_0;
 if (VAR_9->fbr[0]->buffsize == 256)
  VAR_8 |= VAR_2;
 else if (VAR_9->fbr[0]->buffsize == 512)
  VAR_8 |= VAR_1;
 else if (VAR_9->fbr[0]->buffsize == 1024)
  VAR_8 |= VAR_2 | VAR_1;
 FUNC_3(VAR_8, &VAR_7->regs->rxdma.csr);

 VAR_8 = FUNC_1(&VAR_7->regs->rxdma.csr);
 if (VAR_8 & VAR_6) {
  FUNC_2(5);
  VAR_8 = FUNC_1(&VAR_7->regs->rxdma.csr);
  if (VAR_8 & VAR_6) {
   FUNC_0(&VAR_7->pdev->dev,
    "RX Dma failed to exit halt state. CSR 0x%08x\n",
    VAR_8);
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct et131x_adapter {TYPE_1__* pdev; TYPE_3__* regs; } ;
struct TYPE_5__ {int csr; } ;
struct TYPE_6__ {TYPE_2__ rxdma; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static void FUNC_4(struct et131x_adapter *VAR_3)
{
 u32 VAR_4;

 FUNC_3(VAR_1 | VAR_0,
        &VAR_3->regs->rxdma.csr);
 VAR_4 = FUNC_1(&VAR_3->regs->rxdma.csr);
 if (!(VAR_4 & VAR_2)) {
  FUNC_2(5);
  VAR_4 = FUNC_1(&VAR_3->regs->rxdma.csr);
  if (!(VAR_4 & VAR_2))
   FUNC_0(&VAR_3->pdev->dev,
    "RX Dma failed to enter halt state. CSR 0x%08x\n",
    VAR_4);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpsw_common {int dma; TYPE_1__* wr_regs; } ;
struct TYPE_2__ {int rx_en; int tx_en; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct cpsw_common *VAR_0)
{
 FUNC_1(0, &VAR_0->wr_regs->tx_en);
 FUNC_1(0, &VAR_0->wr_regs->rx_en);

 FUNC_0(VAR_0->dma, 0);
 return;
}

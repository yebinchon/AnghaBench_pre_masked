
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpsw_common {int tx_irq_disabled; int napi_tx; int * irqs_table; scalar_t__ quirk_irq; int dma; TYPE_1__* wr_regs; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int tx_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct cpsw_common *VAR_4 = VAR_3;

 FUNC_3(0, &VAR_4->wr_regs->tx_en);
 FUNC_0(VAR_4->dma, VAR_0);

 if (VAR_4->quirk_irq) {
  FUNC_1(VAR_4->irqs_table[1]);
  VAR_4->tx_irq_disabled = 1;
 }

 FUNC_2(&VAR_4->napi_tx);
 return VAR_1;
}

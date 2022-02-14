
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dw_spi {int master; int irq; TYPE_1__* dma_ops; } ;
struct TYPE_2__ {int (* dma_exit ) (struct dw_spi*) ;} ;


 int FUNC_0 (struct dw_spi*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct dw_spi*) ;
 int FUNC_3 (struct dw_spi*) ;

void FUNC_4(struct dw_spi *VAR_0)
{
 FUNC_0(VAR_0);

 if (VAR_0->dma_ops && VAR_0->dma_ops->dma_exit)
  VAR_0->dma_ops->dma_exit(VAR_0);

 FUNC_2(VAR_0);

 FUNC_1(VAR_0->irq, VAR_0->master);
}

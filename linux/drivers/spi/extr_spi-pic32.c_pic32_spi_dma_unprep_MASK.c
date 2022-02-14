
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pic32_spi {TYPE_1__* master; int flags; } ;
struct TYPE_2__ {scalar_t__ dma_tx; scalar_t__ dma_rx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct pic32_spi *VAR_1)
{
 if (!FUNC_2(VAR_0, &VAR_1->flags))
  return;

 FUNC_0(VAR_0, &VAR_1->flags);
 if (VAR_1->master->dma_rx)
  FUNC_1(VAR_1->master->dma_rx);

 if (VAR_1->master->dma_tx)
  FUNC_1(VAR_1->master->dma_tx);
}

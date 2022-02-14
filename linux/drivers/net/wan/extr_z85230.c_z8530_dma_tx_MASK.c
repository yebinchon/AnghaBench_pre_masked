
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z8530_channel {int dma_tx; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct z8530_channel*) ;

__attribute__((used)) static void FUNC_3(struct z8530_channel *VAR_0)
{
 if(!VAR_0->dma_tx)
 {
  FUNC_1("Hey who turned the DMA off?\n");
  FUNC_2(VAR_0);
  return;
 }

 FUNC_0("DMA tx - bogus event!\n");
 FUNC_2(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_spi_dma_ctrl {int * chan_rx; int * chan_tx; } ;
struct pch_spi_data {struct pch_spi_dma_ctrl dma; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct pch_spi_data *VAR_0)
{
 struct pch_spi_dma_ctrl *VAR_1;

 VAR_1 = &VAR_0->dma;
 if (VAR_1->chan_tx) {
  FUNC_0(VAR_1->chan_tx);
  VAR_1->chan_tx = ((void*)0);
 }
 if (VAR_1->chan_rx) {
  FUNC_0(VAR_1->chan_rx);
  VAR_1->chan_rx = ((void*)0);
 }
}

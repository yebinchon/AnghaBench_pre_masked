
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mmcif_host {int dma_active; struct dma_chan* chan_rx; struct dma_chan* chan_tx; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (struct sh_mmcif_host*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct sh_mmcif_host *VAR_3)
{
 FUNC_1(VAR_3, VAR_2, VAR_0 | VAR_1);

 if (VAR_3->chan_tx) {
  struct dma_chan *VAR_4 = VAR_3->chan_tx;
  VAR_3->chan_tx = ((void*)0);
  FUNC_0(VAR_4);
 }
 if (VAR_3->chan_rx) {
  struct dma_chan *VAR_5 = VAR_3->chan_rx;
  VAR_3->chan_rx = ((void*)0);
  FUNC_0(VAR_5);
 }

 VAR_3->dma_active = 0;
}

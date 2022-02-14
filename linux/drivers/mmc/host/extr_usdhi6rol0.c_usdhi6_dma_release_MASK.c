
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usdhi6_host {int dma_active; struct dma_chan* chan_rx; struct dma_chan* chan_tx; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_1(struct usdhi6_host *VAR_0)
{
 VAR_0->dma_active = 0;
 if (VAR_0->chan_tx) {
  struct dma_chan *VAR_1 = VAR_0->chan_tx;
  VAR_0->chan_tx = ((void*)0);
  FUNC_0(VAR_1);
 }
 if (VAR_0->chan_rx) {
  struct dma_chan *VAR_2 = VAR_0->chan_rx;
  VAR_0->chan_rx = ((void*)0);
  FUNC_0(VAR_2);
 }
}

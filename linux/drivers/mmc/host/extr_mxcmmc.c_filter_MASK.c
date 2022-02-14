
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxcmci_host {int dma_data; } ;
struct dma_chan {int * private; } ;


 int FUNC_0 (struct dma_chan*) ;

__attribute__((used)) static bool FUNC_1(struct dma_chan *VAR_0, void *VAR_1)
{
 struct mxcmci_host *VAR_2 = VAR_1;

 if (!FUNC_0(VAR_0))
  return 0;

 VAR_0->private = &VAR_2->dma_data;

 return 1;
}

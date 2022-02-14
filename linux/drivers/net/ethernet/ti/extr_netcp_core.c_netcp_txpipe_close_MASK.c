
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netcp_tx_pipe {int * dma_channel; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct netcp_tx_pipe *VAR_0)
{
 if (VAR_0->dma_channel) {
  FUNC_0(VAR_0->dma_channel);
  VAR_0->dma_channel = ((void*)0);
 }
 return 0;
}

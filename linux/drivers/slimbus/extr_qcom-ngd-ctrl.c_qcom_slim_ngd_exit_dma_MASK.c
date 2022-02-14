
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_slim_ngd_ctrl {int * dma_rx_channel; int * dma_tx_channel; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct qcom_slim_ngd_ctrl *VAR_0)
{
 if (VAR_0->dma_rx_channel) {
  FUNC_1(VAR_0->dma_rx_channel);
  FUNC_0(VAR_0->dma_rx_channel);
 }

 if (VAR_0->dma_tx_channel) {
  FUNC_1(VAR_0->dma_tx_channel);
  FUNC_0(VAR_0->dma_tx_channel);
 }

 VAR_0->dma_tx_channel = VAR_0->dma_rx_channel = ((void*)0);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct tegra_uart_port {int * tx_dma_buf_virt; scalar_t__ tx_dma_buf_phys; int * tx_dma_chan; TYPE_1__ uport; int * rx_dma_buf_virt; scalar_t__ rx_dma_buf_phys; int * rx_dma_chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct tegra_uart_port *VAR_3,
  bool VAR_4)
{
 if (VAR_4) {
  FUNC_3(VAR_3->rx_dma_chan);
  FUNC_1(VAR_3->rx_dma_chan);
  FUNC_0(VAR_3->uport.dev, VAR_1,
    VAR_3->rx_dma_buf_virt, VAR_3->rx_dma_buf_phys);
  VAR_3->rx_dma_chan = ((void*)0);
  VAR_3->rx_dma_buf_phys = 0;
  VAR_3->rx_dma_buf_virt = ((void*)0);
 } else {
  FUNC_3(VAR_3->tx_dma_chan);
  FUNC_1(VAR_3->tx_dma_chan);
  FUNC_2(VAR_3->uport.dev, VAR_3->tx_dma_buf_phys,
   VAR_2, VAR_0);
  VAR_3->tx_dma_chan = ((void*)0);
  VAR_3->tx_dma_buf_phys = 0;
  VAR_3->tx_dma_buf_virt = ((void*)0);
 }
}

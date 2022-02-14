
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pch_spi_dma_ctrl {scalar_t__ rx_buf_dma; int rx_buf_virt; scalar_t__ tx_buf_dma; int tx_buf_virt; } ;
struct pch_spi_data {struct pch_spi_dma_ctrl dma; } ;
struct pch_spi_board_data {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct pch_spi_board_data *VAR_1,
        struct pch_spi_data *VAR_2)
{
 struct pch_spi_dma_ctrl *VAR_3;

 VAR_3 = &VAR_2->dma;
 if (VAR_3->tx_buf_dma)
  FUNC_0(&VAR_1->pdev->dev, VAR_0,
      VAR_3->tx_buf_virt, VAR_3->tx_buf_dma);
 if (VAR_3->rx_buf_dma)
  FUNC_0(&VAR_1->pdev->dev, VAR_0,
      VAR_3->rx_buf_virt, VAR_3->rx_buf_dma);
}

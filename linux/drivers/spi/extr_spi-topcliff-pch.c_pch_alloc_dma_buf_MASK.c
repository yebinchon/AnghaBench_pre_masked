
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pch_spi_dma_ctrl {void* rx_buf_virt; int rx_buf_dma; void* tx_buf_virt; int tx_buf_dma; } ;
struct pch_spi_data {struct pch_spi_dma_ctrl dma; } ;
struct pch_spi_board_data {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct pch_spi_board_data *VAR_3,
         struct pch_spi_data *VAR_4)
{
 struct pch_spi_dma_ctrl *VAR_5;
 int VAR_6;

 VAR_5 = &VAR_4->dma;
 VAR_6 = 0;

 VAR_5->tx_buf_virt = FUNC_0(&VAR_3->pdev->dev,
    VAR_2, &VAR_5->tx_buf_dma, VAR_1);
 if (!VAR_5->tx_buf_virt)
  VAR_6 = -VAR_0;


 VAR_5->rx_buf_virt = FUNC_0(&VAR_3->pdev->dev,
    VAR_2, &VAR_5->rx_buf_dma, VAR_1);
 if (!VAR_5->rx_buf_virt)
  VAR_6 = -VAR_0;

 return VAR_6;
}

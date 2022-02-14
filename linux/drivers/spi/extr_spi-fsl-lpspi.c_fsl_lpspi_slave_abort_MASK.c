
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int dummy; } ;
struct fsl_lpspi_data {int slave_aborted; int dma_rx_completion; int dma_tx_completion; int xfer_done; int usedma; } ;


 int FUNC_0 (int *) ;
 struct fsl_lpspi_data* FUNC_1 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_2(struct spi_controller *VAR_0)
{
 struct fsl_lpspi_data *VAR_1 =
    FUNC_1(VAR_0);

 VAR_1->slave_aborted = 1;
 if (!VAR_1->usedma)
  FUNC_0(&VAR_1->xfer_done);
 else {
  FUNC_0(&VAR_1->dma_tx_completion);
  FUNC_0(&VAR_1->dma_rx_completion);
 }

 return 0;
}

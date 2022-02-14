
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_dspi_dma {int curr_xfer_len; int cmd_rx_complete; int * rx_dma_buf; } ;
struct fsl_dspi {struct fsl_dspi_dma* dma; scalar_t__ rx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fsl_dspi*,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct fsl_dspi *VAR_1 = VAR_0;
 struct fsl_dspi_dma *VAR_2 = VAR_1->dma;
 int VAR_3;

 if (VAR_1->rx) {
  for (VAR_3 = 0; VAR_3 < VAR_2->curr_xfer_len; VAR_3++)
   FUNC_1(VAR_1, VAR_1->dma->rx_dma_buf[VAR_3]);
 }

 FUNC_0(&VAR_2->cmd_rx_complete);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_dspi_dma {int cmd_tx_complete; } ;
struct fsl_dspi {struct fsl_dspi_dma* dma; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct fsl_dspi *VAR_1 = VAR_0;
 struct fsl_dspi_dma *VAR_2 = VAR_1->dma;

 FUNC_0(&VAR_2->cmd_tx_complete);
}

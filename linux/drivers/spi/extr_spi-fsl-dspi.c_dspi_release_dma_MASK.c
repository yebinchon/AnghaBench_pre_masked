
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_dspi_dma {scalar_t__ chan_rx; int rx_dma_phys; scalar_t__ chan_tx; int tx_dma_phys; } ;
struct fsl_dspi {TYPE_1__* pdev; struct fsl_dspi_dma* dma; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct fsl_dspi *VAR_3)
{
 struct fsl_dspi_dma *VAR_4 = VAR_3->dma;
 struct device *VAR_5 = &VAR_3->pdev->dev;

 if (!VAR_4)
  return;

 if (VAR_4->chan_tx) {
  FUNC_1(VAR_5, VAR_4->tx_dma_phys,
     VAR_2, VAR_1);
  FUNC_0(VAR_4->chan_tx);
 }

 if (VAR_4->chan_rx) {
  FUNC_1(VAR_5, VAR_4->rx_dma_phys,
     VAR_2, VAR_0);
  FUNC_0(VAR_4->chan_rx);
 }
}

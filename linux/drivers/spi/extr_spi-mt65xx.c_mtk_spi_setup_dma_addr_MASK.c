
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_transfer {int tx_dma; int rx_dma; } ;
struct spi_master {int dummy; } ;
struct mtk_spi {scalar_t__ base; TYPE_1__* dev_comp; scalar_t__ rx_sgl; scalar_t__ tx_sgl; } ;
struct TYPE_2__ {scalar_t__ dma_ext; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct mtk_spi* FUNC_0 (struct spi_master*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct spi_master *VAR_5,
       struct spi_transfer *VAR_6)
{
 struct mtk_spi *VAR_7 = FUNC_0(VAR_5);

 if (VAR_7->tx_sgl) {
  FUNC_1((u32)(VAR_6->tx_dma & VAR_0),
         VAR_7->base + VAR_3);





 }

 if (VAR_7->rx_sgl) {
  FUNC_1((u32)(VAR_6->rx_dma & VAR_0),
         VAR_7->base + VAR_1);





 }
}

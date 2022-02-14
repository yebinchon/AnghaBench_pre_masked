
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_spi_data {int rx_dma_chan; TYPE_1__* rx_dma_desc; int rx_dma_complete; int dev; int rx_dma_phys; } ;
struct TYPE_3__ {int * callback_param; int callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ,int ,int,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct tegra_spi_data *VAR_5, int VAR_6)
{
 FUNC_4(&VAR_5->rx_dma_complete);
 VAR_5->rx_dma_desc = FUNC_2(VAR_5->rx_dma_chan,
    VAR_5->rx_dma_phys, VAR_6, VAR_1,
    VAR_2 | VAR_0);
 if (!VAR_5->rx_dma_desc) {
  FUNC_0(VAR_5->dev, "Not able to get desc for Rx\n");
  return -VAR_3;
 }

 VAR_5->rx_dma_desc->callback = VAR_4;
 VAR_5->rx_dma_desc->callback_param = &VAR_5->rx_dma_complete;

 FUNC_3(VAR_5->rx_dma_desc);
 FUNC_1(VAR_5->rx_dma_chan);
 return 0;
}

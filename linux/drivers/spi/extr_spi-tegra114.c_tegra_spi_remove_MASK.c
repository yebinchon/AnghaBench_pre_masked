
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_spi_data {scalar_t__ rx_dma_chan; scalar_t__ tx_dma_chan; int irq; } ;
struct spi_master {int dummy; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ,struct tegra_spi_data*) ;
 struct spi_master* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct tegra_spi_data* FUNC_4 (struct spi_master*) ;
 int FUNC_5 (struct tegra_spi_data*,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct spi_master *VAR_1 = FUNC_1(VAR_0);
 struct tegra_spi_data *VAR_2 = FUNC_4(VAR_1);

 FUNC_0(VAR_2->irq, VAR_2);

 if (VAR_2->tx_dma_chan)
  FUNC_5(VAR_2, 0);

 if (VAR_2->rx_dma_chan)
  FUNC_5(VAR_2, 1);

 FUNC_2(&VAR_0->dev);
 if (!FUNC_3(&VAR_0->dev))
  FUNC_6(&VAR_0->dev);

 return 0;
}

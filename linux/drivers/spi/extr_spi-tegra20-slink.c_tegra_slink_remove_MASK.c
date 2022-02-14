
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_slink_data {scalar_t__ rx_dma_chan; scalar_t__ tx_dma_chan; int clk; int irq; } ;
struct spi_master {int dummy; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct tegra_slink_data*) ;
 struct spi_master* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct tegra_slink_data* FUNC_5 (struct spi_master*) ;
 int FUNC_6 (struct tegra_slink_data*,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct spi_master *VAR_1 = FUNC_2(VAR_0);
 struct tegra_slink_data *VAR_2 = FUNC_5(VAR_1);

 FUNC_1(VAR_2->irq, VAR_2);

 FUNC_0(VAR_2->clk);

 if (VAR_2->tx_dma_chan)
  FUNC_6(VAR_2, 0);

 if (VAR_2->rx_dma_chan)
  FUNC_6(VAR_2, 1);

 FUNC_3(&VAR_0->dev);
 if (!FUNC_4(&VAR_0->dev))
  FUNC_7(&VAR_0->dev);

 return 0;
}

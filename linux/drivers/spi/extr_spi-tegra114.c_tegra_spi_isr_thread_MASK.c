
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_spi_data {int is_curr_dma_xfer; } ;
typedef int irqreturn_t ;


 int FUNC_0 (struct tegra_spi_data*) ;
 int FUNC_1 (struct tegra_spi_data*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_0, void *VAR_1)
{
 struct tegra_spi_data *VAR_2 = VAR_1;

 if (!VAR_2->is_curr_dma_xfer)
  return FUNC_0(VAR_2);
 return FUNC_1(VAR_2);
}

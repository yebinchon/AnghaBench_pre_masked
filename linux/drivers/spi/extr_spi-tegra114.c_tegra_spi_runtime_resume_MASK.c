
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_spi_data {int dev; int clk; } ;
struct spi_master {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 struct spi_master* FUNC_2 (struct device*) ;
 struct tegra_spi_data* FUNC_3 (struct spi_master*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct spi_master *VAR_1 = FUNC_2(VAR_0);
 struct tegra_spi_data *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->clk);
 if (VAR_3 < 0) {
  FUNC_1(VAR_2->dev, "clk_prepare failed: %d\n", VAR_3);
  return VAR_3;
 }
 return 0;
}

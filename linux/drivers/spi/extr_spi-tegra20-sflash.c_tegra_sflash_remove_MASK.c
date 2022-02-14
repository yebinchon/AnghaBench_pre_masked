
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_sflash_data {int irq; } ;
struct spi_master {int dummy; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ,struct tegra_sflash_data*) ;
 struct spi_master* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct tegra_sflash_data* FUNC_4 (struct spi_master*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct spi_master *VAR_1 = FUNC_1(VAR_0);
 struct tegra_sflash_data *VAR_2 = FUNC_4(VAR_1);

 FUNC_0(VAR_2->irq, VAR_2);

 FUNC_2(&VAR_0->dev);
 if (!FUNC_3(&VAR_0->dev))
  FUNC_5(&VAR_0->dev);

 return 0;
}

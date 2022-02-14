
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_slink_data {int clk; } ;
struct spi_master {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct spi_master* FUNC_1 (struct device*) ;
 struct tegra_slink_data* FUNC_2 (struct spi_master*) ;
 int FUNC_3 (struct tegra_slink_data*,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1)
{
 struct spi_master *VAR_2 = FUNC_1(VAR_1);
 struct tegra_slink_data *VAR_3 = FUNC_2(VAR_2);


 FUNC_3(VAR_3, VAR_0);

 FUNC_0(VAR_3->clk);
 return 0;
}

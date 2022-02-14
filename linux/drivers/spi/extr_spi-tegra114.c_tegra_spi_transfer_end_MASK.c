
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_spi_data {int def_command1_reg; int command1_reg; int use_hw_based_cs; } ;
struct spi_device {int mode; scalar_t__ cs_gpiod; int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 struct tegra_spi_data* FUNC_1 (int ) ;
 int FUNC_2 (struct tegra_spi_data*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_3)
{
 struct tegra_spi_data *VAR_4 = FUNC_1(VAR_3->master);
 int VAR_5 = (VAR_3->mode & VAR_1) ? 0 : 1;


 if (VAR_3->cs_gpiod)
  FUNC_0(VAR_3->cs_gpiod, 0);

 if (!VAR_4->use_hw_based_cs) {
  if (VAR_5)
   VAR_4->command1_reg |= VAR_2;
  else
   VAR_4->command1_reg &= ~VAR_2;
  FUNC_2(VAR_4, VAR_4->command1_reg, VAR_0);
 }

 FUNC_2(VAR_4, VAR_4->def_command1_reg, VAR_0);
}

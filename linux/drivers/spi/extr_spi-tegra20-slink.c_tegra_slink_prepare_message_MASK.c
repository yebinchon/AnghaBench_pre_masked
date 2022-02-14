
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_slink_data {int command_reg; int def_command_reg; int command2_reg; int def_command2_reg; } ;
struct spi_message {struct spi_device* spi; } ;
struct spi_master {int dummy; } ;
struct spi_device {int mode; int chip_select; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct tegra_slink_data* FUNC_1 (struct spi_master*) ;
 int FUNC_2 (struct tegra_slink_data*) ;

__attribute__((used)) static int FUNC_3(struct spi_master *VAR_8,
           struct spi_message *VAR_9)
{
 struct tegra_slink_data *VAR_10 = FUNC_1(VAR_8);
 struct spi_device *VAR_11 = VAR_9->spi;

 FUNC_2(VAR_10);

 VAR_10->command_reg = VAR_10->def_command_reg;
 VAR_10->command_reg |= VAR_1 | VAR_2;

 VAR_10->command2_reg = VAR_10->def_command2_reg;
 VAR_10->command2_reg |= FUNC_0(VAR_11->chip_select);

 VAR_10->command_reg &= ~VAR_5;
 if (VAR_11->mode & VAR_6)
  VAR_10->command_reg |= VAR_0;

 if (VAR_11->mode & VAR_7)
  VAR_10->command_reg |= VAR_3;
 else
  VAR_10->command_reg |= VAR_4;

 return 0;
}

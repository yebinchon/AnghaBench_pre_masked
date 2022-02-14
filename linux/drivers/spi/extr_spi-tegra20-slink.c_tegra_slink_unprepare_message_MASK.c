
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_slink_data {int def_command2_reg; int def_command_reg; } ;
struct spi_message {int dummy; } ;
struct spi_master {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tegra_slink_data* FUNC_0 (struct spi_master*) ;
 int FUNC_1 (struct tegra_slink_data*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct spi_master *VAR_2,
      struct spi_message *VAR_3)
{
 struct tegra_slink_data *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(VAR_4, VAR_4->def_command_reg, VAR_0);
 FUNC_1(VAR_4, VAR_4->def_command2_reg, VAR_1);

 return 0;
}

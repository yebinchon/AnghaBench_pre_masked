
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_spi_data {int command1_reg; int def_command1_reg; int dev; int cur_direction; scalar_t__ is_packed; } ;
struct spi_transfer {scalar_t__ rx_nbits; scalar_t__ tx_nbits; scalar_t__ tx_buf; scalar_t__ rx_buf; } ;
struct spi_device {int chip_select; int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*,int ,unsigned int) ;
 struct tegra_spi_data* FUNC_2 (int ) ;
 unsigned int FUNC_3 (struct spi_device*,struct tegra_spi_data*,struct spi_transfer*) ;
 int FUNC_4 (struct tegra_spi_data*) ;
 int FUNC_5 (struct tegra_spi_data*,struct spi_transfer*) ;
 int FUNC_6 (struct tegra_spi_data*,struct spi_transfer*) ;
 int FUNC_7 (struct tegra_spi_data*,int,int ) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_10,
  struct spi_transfer *VAR_11, u32 VAR_12)
{
 struct tegra_spi_data *VAR_13 = FUNC_2(VAR_10->master);
 unsigned VAR_14;
 int VAR_15;

 VAR_14 = FUNC_3(VAR_10, VAR_13, VAR_11);

 if (VAR_11->rx_nbits == VAR_6 || VAR_11->tx_nbits == VAR_6)
  VAR_12 |= VAR_2;
 else
  VAR_12 &= ~VAR_2;

 if (VAR_13->is_packed)
  VAR_12 |= VAR_7;
 else
  VAR_12 &= ~VAR_7;

 VAR_12 &= ~(VAR_4 | VAR_9 | VAR_8);
 VAR_13->cur_direction = 0;
 if (VAR_11->rx_buf) {
  VAR_12 |= VAR_8;
  VAR_13->cur_direction |= VAR_0;
 }
 if (VAR_11->tx_buf) {
  VAR_12 |= VAR_9;
  VAR_13->cur_direction |= VAR_1;
 }
 VAR_12 |= FUNC_0(VAR_10->chip_select);
 FUNC_7(VAR_13, VAR_12, VAR_3);
 VAR_13->command1_reg = VAR_12;

 FUNC_1(VAR_13->dev, "The def 0x%x and written 0x%x\n",
  VAR_13->def_command1_reg, (unsigned)VAR_12);

 VAR_15 = FUNC_4(VAR_13);
 if (VAR_15 < 0)
  return VAR_15;
 if (VAR_14 > VAR_5)
  VAR_15 = FUNC_6(VAR_13, VAR_11);
 else
  VAR_15 = FUNC_5(VAR_13, VAR_11);
 return VAR_15;
}

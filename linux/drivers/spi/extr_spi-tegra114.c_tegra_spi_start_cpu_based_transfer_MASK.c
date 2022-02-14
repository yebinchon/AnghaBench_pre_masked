
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_spi_data {int cur_direction; unsigned int curr_dma_words; int is_curr_dma_xfer; int command1_reg; int dma_control_reg; } ;
struct spi_transfer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_1 (struct tegra_spi_data*,struct spi_transfer*) ;
 int FUNC_2 (struct tegra_spi_data*,int ,int ) ;

__attribute__((used)) static int FUNC_3(
  struct tegra_spi_data *VAR_8, struct spi_transfer *VAR_9)
{
 u32 VAR_10;
 unsigned VAR_11;

 if (VAR_8->cur_direction & VAR_1)
  VAR_11 = FUNC_1(VAR_8, VAR_9);
 else
  VAR_11 = VAR_8->curr_dma_words;

 VAR_10 = FUNC_0(VAR_11 - 1);
 FUNC_2(VAR_8, VAR_10, VAR_3);

 VAR_10 = 0;
 if (VAR_8->cur_direction & VAR_1)
  VAR_10 |= VAR_6;

 if (VAR_8->cur_direction & VAR_0)
  VAR_10 |= VAR_5;

 FUNC_2(VAR_8, VAR_10, VAR_4);
 VAR_8->dma_control_reg = VAR_10;

 VAR_8->is_curr_dma_xfer = 0;

 VAR_10 = VAR_8->command1_reg;
 VAR_10 |= VAR_7;
 FUNC_2(VAR_8, VAR_10, VAR_2);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int speed_hz; } ;
struct spi_imx_data {unsigned int spi_bus_clk; int bits_per_word; scalar_t__ base; int spi_clk; } ;
struct spi_device {int mode; unsigned int chip_select; int cs_gpio; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct spi_imx_data*) ;
 unsigned int FUNC_2 (int ,int ,unsigned int,unsigned int*) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct spi_imx_data *VAR_11,
     struct spi_device *VAR_12,
     struct spi_transfer *VAR_13)
{
 unsigned int VAR_14 = VAR_2 | VAR_3;
 unsigned int VAR_15 = FUNC_1(VAR_11) ? 16 : 18;
 unsigned int VAR_16;

 VAR_14 |= FUNC_2(VAR_11->spi_clk, VAR_13->speed_hz, VAR_15, &VAR_16)
  << VAR_1;
 VAR_11->spi_bus_clk = VAR_16;

 VAR_14 |= VAR_11->bits_per_word - 1;

 if (VAR_12->mode & VAR_8)
  VAR_14 |= VAR_4;
 if (VAR_12->mode & VAR_9)
  VAR_14 |= VAR_5;
 if (VAR_12->mode & VAR_10)
  VAR_14 |= VAR_6;
 if (!FUNC_0(VAR_12->cs_gpio))
  VAR_14 |= VAR_12->chip_select << VAR_0;

 FUNC_3(VAR_14, VAR_11->base + VAR_7);

 return 0;
}

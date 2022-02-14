
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int speed_hz; } ;
struct spi_imx_data {unsigned int spi_bus_clk; int bits_per_word; scalar_t__ base; scalar_t__ usedma; int spi_clk; } ;
struct spi_device {int mode; unsigned int chip_select; int cs_gpio; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct spi_imx_data*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 unsigned int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct spi_imx_data *VAR_22,
     struct spi_device *VAR_23,
     struct spi_transfer *VAR_24)
{
 unsigned int VAR_25 = VAR_3 | VAR_4;
 unsigned int VAR_26;

 VAR_25 |= FUNC_3(VAR_22->spi_clk, VAR_24->speed_hz, &VAR_26) <<
  VAR_2;
 VAR_22->spi_bus_clk = VAR_26;

 if (FUNC_1(VAR_22)) {
  VAR_25 |= (VAR_22->bits_per_word - 1) << VAR_15;
  VAR_25 |= VAR_8;
 } else {
  VAR_25 |= (VAR_22->bits_per_word - 1) << VAR_0;
 }

 if (VAR_23->mode & VAR_18)
  VAR_25 |= VAR_5;
 if (VAR_23->mode & VAR_19)
  VAR_25 |= VAR_6;
 if (VAR_23->mode & VAR_20)
  VAR_25 |= VAR_9;
 if (!FUNC_0(VAR_23->cs_gpio))
  VAR_25 |= (VAR_23->chip_select) <<
   (FUNC_1(VAR_22) ? VAR_16 :
        VAR_1);

 if (VAR_22->usedma)
  VAR_25 |= VAR_7;

 FUNC_4(VAR_25, VAR_22->base + VAR_17);

 VAR_25 = FUNC_2(VAR_22->base + VAR_11);
 if (VAR_23->mode & VAR_21)
  VAR_25 |= VAR_14;
 else
  VAR_25 &= ~VAR_14;
 FUNC_4(VAR_25, VAR_22->base + VAR_11);

 if (VAR_22->usedma) {




  FUNC_4(VAR_12 | VAR_13,
   VAR_22->base + VAR_10);
 }

 return 0;
}

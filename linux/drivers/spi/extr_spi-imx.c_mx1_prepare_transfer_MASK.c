
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int speed_hz; } ;
struct spi_imx_data {unsigned int spi_bus_clk; int bits_per_word; scalar_t__ base; int spi_clk; } ;
struct spi_device {int mode; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct spi_imx_data *VAR_8,
    struct spi_device *VAR_9,
    struct spi_transfer *VAR_10)
{
 unsigned int VAR_11 = VAR_1 | VAR_2;
 unsigned int VAR_12;

 VAR_11 |= FUNC_0(VAR_8->spi_clk, VAR_10->speed_hz, &VAR_12) <<
  VAR_0;
 VAR_8->spi_bus_clk = VAR_12;

 VAR_11 |= VAR_8->bits_per_word - 1;

 if (VAR_9->mode & VAR_6)
  VAR_11 |= VAR_3;
 if (VAR_9->mode & VAR_7)
  VAR_11 |= VAR_4;

 FUNC_1(VAR_11, VAR_8->base + VAR_5);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_transfer {int speed_hz; } ;
struct spi_imx_data {int slave_burst; int bits_per_word; int spi_bus_clk; scalar_t__ base; scalar_t__ usedma; scalar_t__ slave_mode; } ;
struct spi_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct spi_imx_data*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct spi_imx_data*,int,int*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct spi_imx_data *VAR_6,
           struct spi_device *VAR_7,
           struct spi_transfer *VAR_8)
{
 u32 VAR_9 = FUNC_3(VAR_6->base + VAR_0);
 u32 VAR_10 = VAR_8->speed_hz, VAR_11;


 VAR_9 &= ~VAR_1;
 if (VAR_6->slave_mode && FUNC_0(VAR_6))
  VAR_9 |= (VAR_6->slave_burst * 8 - 1)
   << VAR_2;
 else
  VAR_9 |= (VAR_6->bits_per_word - 1)
   << VAR_2;


 VAR_9 &= ~(0xf << VAR_3 |
    0xf << VAR_4);
 VAR_9 |= FUNC_2(VAR_6, VAR_8->speed_hz, &VAR_10);
 VAR_6->spi_bus_clk = VAR_10;

 if (VAR_6->usedma)
  VAR_9 |= VAR_5;

 FUNC_6(VAR_9, VAR_6->base + VAR_0);
 VAR_11 = (2 * 1000000) / VAR_10;
 if (FUNC_1(VAR_11 < 10))
  FUNC_4(VAR_11);
 else
  FUNC_5(VAR_11, VAR_11 + 10);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dev; } ;
struct s3c64xx_spi_driver_data {scalar_t__ regs; struct spi_master* master; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (int *,char*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_11, void *VAR_12)
{
 struct s3c64xx_spi_driver_data *VAR_13 = VAR_12;
 struct spi_master *VAR_14 = VAR_13->master;
 unsigned int VAR_15, VAR_16 = 0;

 VAR_15 = FUNC_1(VAR_13->regs + VAR_6);

 if (VAR_15 & VAR_7) {
  VAR_16 = VAR_2;
  FUNC_0(&VAR_14->dev, "RX overrun\n");
 }
 if (VAR_15 & VAR_8) {
  VAR_16 |= VAR_3;
  FUNC_0(&VAR_14->dev, "RX underrun\n");
 }
 if (VAR_15 & VAR_9) {
  VAR_16 |= VAR_4;
  FUNC_0(&VAR_14->dev, "TX overrun\n");
 }
 if (VAR_15 & VAR_10) {
  VAR_16 |= VAR_5;
  FUNC_0(&VAR_14->dev, "TX underrun\n");
 }


 FUNC_2(VAR_16, VAR_13->regs + VAR_1);
 FUNC_2(0, VAR_13->regs + VAR_1);

 return VAR_0;
}

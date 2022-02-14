
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_transfer {int dummy; } ;
struct spi_device {int dummy; } ;
struct spi_controller {int dummy; } ;
struct bcm2835_spi {int count_transfer_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcm2835_spi*,int ,int) ;
 int FUNC_1 (struct bcm2835_spi*) ;
 int FUNC_2 (struct bcm2835_spi*,int ) ;
 struct bcm2835_spi* FUNC_3 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_4(struct spi_controller *VAR_5,
     struct spi_device *VAR_6,
     struct spi_transfer *VAR_7,
     u32 VAR_8, bool VAR_9)
{
 struct bcm2835_spi *VAR_10 = FUNC_3(VAR_5);


 VAR_10->count_transfer_irq++;





 FUNC_0(VAR_10, VAR_0, VAR_8 | VAR_3);


 if (VAR_9)
  FUNC_2(VAR_10, VAR_4);
 FUNC_1(VAR_10);


 VAR_8 |= VAR_2 | VAR_1 | VAR_3;
 FUNC_0(VAR_10, VAR_0, VAR_8);


 return 1;
}

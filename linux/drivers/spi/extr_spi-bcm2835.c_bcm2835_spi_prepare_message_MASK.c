
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {struct spi_device* spi; } ;
struct spi_device {size_t chip_select; } ;
struct spi_controller {scalar_t__ can_dma; } ;
struct bcm2835_spi {int * prepare_cs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm2835_spi*,int ,int ) ;
 struct bcm2835_spi* FUNC_1 (struct spi_controller*) ;
 int FUNC_2 (struct spi_controller*,struct spi_message*,int,int) ;

__attribute__((used)) static int FUNC_3(struct spi_controller *VAR_3,
           struct spi_message *VAR_4)
{
 struct spi_device *VAR_5 = VAR_4->spi;
 struct bcm2835_spi *VAR_6 = FUNC_1(VAR_3);
 int VAR_7;

 if (VAR_3->can_dma) {





  VAR_7 = FUNC_2(VAR_3, VAR_4, 65532,
        VAR_2 | VAR_1);
  if (VAR_7)
   return VAR_7;
 }





 FUNC_0(VAR_6, VAR_0, VAR_6->prepare_cs[VAR_5->chip_select]);

 return 0;
}

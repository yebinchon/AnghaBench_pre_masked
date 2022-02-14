
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int dummy; } ;
struct platform_device {int dummy; } ;
struct bcm2835_spi {int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm2835_spi*) ;
 int FUNC_1 (struct spi_controller*,struct bcm2835_spi*) ;
 int FUNC_2 (struct bcm2835_spi*,int ,int) ;
 int FUNC_3 (int ) ;
 struct spi_controller* FUNC_4 (struct platform_device*) ;
 struct bcm2835_spi* FUNC_5 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 struct spi_controller *VAR_4 = FUNC_4(VAR_3);
 struct bcm2835_spi *VAR_5 = FUNC_5(VAR_4);

 FUNC_0(VAR_5);


 FUNC_2(VAR_5, VAR_0,
     VAR_1 | VAR_2);

 FUNC_3(VAR_5->clk);

 FUNC_1(VAR_4, VAR_5);

 return 0;
}

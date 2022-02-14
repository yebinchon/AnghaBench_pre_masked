
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int dummy; } ;
struct platform_device {int dummy; } ;
struct at91_usart_spi {int clk; } ;


 int FUNC_0 (struct spi_controller*) ;
 int FUNC_1 (int ) ;
 struct spi_controller* FUNC_2 (struct platform_device*) ;
 struct at91_usart_spi* FUNC_3 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct spi_controller *VAR_1 = FUNC_2(VAR_0);
 struct at91_usart_spi *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(VAR_1);
 FUNC_1(VAR_2->clk);

 return 0;
}

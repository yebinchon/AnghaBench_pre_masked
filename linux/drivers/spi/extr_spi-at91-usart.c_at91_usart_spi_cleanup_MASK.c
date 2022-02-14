
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {struct at91_usart_spi_device* controller_state; } ;
struct at91_usart_spi_device {int dummy; } ;


 int FUNC_0 (struct at91_usart_spi_device*) ;

__attribute__((used)) static void FUNC_1(struct spi_device *VAR_0)
{
 struct at91_usart_spi_device *VAR_1 = VAR_0->controller_state;

 VAR_0->controller_state = ((void*)0);
 FUNC_0(VAR_1);
}

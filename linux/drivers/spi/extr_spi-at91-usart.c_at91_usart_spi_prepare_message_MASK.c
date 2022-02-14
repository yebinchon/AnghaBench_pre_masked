
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_message {struct spi_device* spi; } ;
struct spi_device {int * controller_state; } ;
struct spi_controller {int dummy; } ;
struct at91_usart_spi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct at91_usart_spi*,int ,int ) ;
 struct at91_usart_spi* FUNC_1 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_2(struct spi_controller *VAR_5,
       struct spi_message *VAR_6)
{
 struct at91_usart_spi *VAR_7 = FUNC_1(VAR_5);
 struct spi_device *VAR_8 = VAR_6->spi;
 u32 *VAR_9 = VAR_8->controller_state;

 FUNC_0(VAR_7, VAR_0, VAR_3);
 FUNC_0(VAR_7, VAR_1, VAR_4);
 FUNC_0(VAR_7, VAR_2, *VAR_9);

 return 0;
}

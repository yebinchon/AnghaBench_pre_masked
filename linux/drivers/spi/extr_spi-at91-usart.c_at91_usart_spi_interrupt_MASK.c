
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int dummy; } ;
struct at91_usart_spi {int xfer_failed; int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct at91_usart_spi*) ;
 int FUNC_1 (struct at91_usart_spi*) ;
 int FUNC_2 (struct at91_usart_spi*) ;
 scalar_t__ FUNC_3 (struct at91_usart_spi*) ;
 int FUNC_4 (struct at91_usart_spi*,int ,int) ;
 struct at91_usart_spi* FUNC_5 (struct spi_controller*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_5, void *VAR_6)
{
 struct spi_controller *VAR_7 = VAR_6;
 struct at91_usart_spi *VAR_8 = FUNC_5(VAR_7);

 FUNC_6(&VAR_8->lock);
 FUNC_1(VAR_8);

 if (FUNC_0(VAR_8)) {
  VAR_8->xfer_failed = 1;
  FUNC_4(VAR_8, VAR_0, VAR_3 | VAR_4);
  FUNC_7(&VAR_8->lock);
  return VAR_1;
 }

 if (FUNC_3(VAR_8)) {
  FUNC_2(VAR_8);
  FUNC_7(&VAR_8->lock);
  return VAR_1;
 }

 FUNC_7(&VAR_8->lock);

 return VAR_2;
}

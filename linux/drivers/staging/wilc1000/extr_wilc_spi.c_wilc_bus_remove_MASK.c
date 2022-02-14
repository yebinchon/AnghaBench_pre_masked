
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc {scalar_t__ gpio_irq; } ;
struct spi_device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct wilc* FUNC_1 (struct spi_device*) ;
 int FUNC_2 (struct wilc*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_0)
{
 struct wilc *VAR_1 = FUNC_1(VAR_0);


 if (VAR_1->gpio_irq)
  FUNC_0(VAR_1->gpio_irq);
 FUNC_2(VAR_1);
 return 0;
}

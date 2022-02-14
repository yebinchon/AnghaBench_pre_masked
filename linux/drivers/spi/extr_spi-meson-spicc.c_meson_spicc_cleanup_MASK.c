
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int * controller_state; int cs_gpio; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct spi_device *VAR_0)
{
 if (FUNC_1(VAR_0->cs_gpio))
  FUNC_0(VAR_0->cs_gpio);

 VAR_0->controller_state = ((void*)0);
}

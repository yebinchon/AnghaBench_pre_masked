
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int cs_gpio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct spi_device*) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_0)
{
 if (FUNC_2(VAR_0)) {
  FUNC_0(VAR_0->cs_gpio);
  FUNC_1(FUNC_2(VAR_0));
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_spi {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct stm32_spi *VAR_0)
{
 FUNC_1(VAR_0->dev, "8-bit or 16-bit data frame supported\n");
 return FUNC_0(8) | FUNC_0(16);
}

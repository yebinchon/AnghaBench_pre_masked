
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_spi {int dummy; } ;
struct spi_master {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct spi_master*) ;
 struct stm32_spi* FUNC_1 (struct spi_master*) ;
 int FUNC_2 (struct stm32_spi*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct spi_master *VAR_3 = VAR_2;
 struct stm32_spi *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_3);
 FUNC_2(VAR_4);

 return VAR_0;
}

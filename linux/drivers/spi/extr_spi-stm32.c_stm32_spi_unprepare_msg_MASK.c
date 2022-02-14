
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_spi {TYPE_1__* cfg; } ;
struct spi_message {int dummy; } ;
struct spi_master {int dummy; } ;
struct TYPE_2__ {int (* disable ) (struct stm32_spi*) ;} ;


 struct stm32_spi* FUNC_0 (struct spi_master*) ;
 int FUNC_1 (struct stm32_spi*) ;

__attribute__((used)) static int FUNC_2(struct spi_master *VAR_0,
       struct spi_message *VAR_1)
{
 struct stm32_spi *VAR_2 = FUNC_0(VAR_0);

 VAR_2->cfg->disable(VAR_2);

 return 0;
}

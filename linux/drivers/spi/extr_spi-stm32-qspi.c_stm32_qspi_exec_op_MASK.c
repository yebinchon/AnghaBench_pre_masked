
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_qspi {int lock; } ;
struct spi_mem_op {int dummy; } ;
struct spi_mem {TYPE_1__* spi; } ;
struct TYPE_2__ {int master; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct stm32_qspi* FUNC_2 (int ) ;
 int FUNC_3 (struct spi_mem*,struct spi_mem_op const*) ;

__attribute__((used)) static int FUNC_4(struct spi_mem *VAR_0, const struct spi_mem_op *VAR_1)
{
 struct stm32_qspi *VAR_2 = FUNC_2(VAR_0->spi->master);
 int VAR_3;

 FUNC_0(&VAR_2->lock);
 VAR_3 = FUNC_3(VAR_0, VAR_1);
 FUNC_1(&VAR_2->lock);

 return VAR_3;
}

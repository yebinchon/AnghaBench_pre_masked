
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_qspi {scalar_t__ fmode; scalar_t__ dma_chtx; scalar_t__ dma_chrx; } ;
struct TYPE_2__ {scalar_t__ dir; int nbytes; } ;
struct spi_mem_op {TYPE_1__ data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct stm32_qspi*,struct spi_mem_op const*) ;
 int FUNC_1 (struct stm32_qspi*,struct spi_mem_op const*) ;
 int FUNC_2 (struct stm32_qspi*,struct spi_mem_op const*) ;

__attribute__((used)) static int FUNC_3(struct stm32_qspi *VAR_3, const struct spi_mem_op *VAR_4)
{
 if (!VAR_4->data.nbytes)
  return 0;

 if (VAR_3->fmode == VAR_0)
  return FUNC_1(VAR_3, VAR_4);
 else if ((VAR_4->data.dir == VAR_1 && VAR_3->dma_chrx) ||
   (VAR_4->data.dir == VAR_2 && VAR_3->dma_chtx))
  if (!FUNC_0(VAR_3, VAR_4))
   return 0;

 return FUNC_2(VAR_3, VAR_4);
}

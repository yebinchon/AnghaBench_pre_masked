
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_mem_op {int dummy; } ;
struct spi_mem {int dummy; } ;


 scalar_t__ FUNC_0 (struct spi_mem_op const*) ;
 int FUNC_1 (struct spi_mem*,struct spi_mem_op const*) ;

bool FUNC_2(struct spi_mem *VAR_0, const struct spi_mem_op *VAR_1)
{
 if (FUNC_0(VAR_1))
  return 0;

 return FUNC_1(VAR_0, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nbytes; } ;
struct spi_mem_op {TYPE_1__ addr; } ;
struct spi_mem {int dummy; } ;


 int FUNC_0 (struct spi_mem*,struct spi_mem_op const*) ;

__attribute__((used)) static bool FUNC_1(struct spi_mem *VAR_0,
      const struct spi_mem_op *VAR_1)
{
 if (!FUNC_0(VAR_0, VAR_1))
  return 0;




 if (VAR_1->addr.nbytes > 3)
  return 0;

 return 1;
}

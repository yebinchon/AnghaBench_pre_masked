
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_mem_op {int dummy; } ;
struct spi_mem {TYPE_1__* spi; } ;
struct spi_controller {TYPE_2__* mem_ops; } ;
struct TYPE_4__ {int (* supports_op ) (struct spi_mem*,struct spi_mem_op const*) ;} ;
struct TYPE_3__ {struct spi_controller* controller; } ;


 int FUNC_0 (struct spi_mem*,struct spi_mem_op const*) ;
 int FUNC_1 (struct spi_mem*,struct spi_mem_op const*) ;

__attribute__((used)) static bool FUNC_2(struct spi_mem *VAR_0,
      const struct spi_mem_op *VAR_1)
{
 struct spi_controller *VAR_2 = VAR_0->spi->controller;

 if (VAR_2->mem_ops && VAR_2->mem_ops->supports_op)
  return VAR_2->mem_ops->supports_op(VAR_0, VAR_1);

 return FUNC_0(VAR_0, VAR_1);
}

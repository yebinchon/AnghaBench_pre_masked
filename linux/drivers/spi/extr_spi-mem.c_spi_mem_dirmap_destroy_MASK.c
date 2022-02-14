
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spi_mem_dirmap_desc {int nodirmap; TYPE_2__* mem; } ;
struct spi_controller {TYPE_3__* mem_ops; } ;
struct TYPE_6__ {int (* dirmap_destroy ) (struct spi_mem_dirmap_desc*) ;} ;
struct TYPE_5__ {TYPE_1__* spi; } ;
struct TYPE_4__ {struct spi_controller* controller; } ;


 int FUNC_0 (struct spi_mem_dirmap_desc*) ;
 int FUNC_1 (struct spi_mem_dirmap_desc*) ;

void FUNC_2(struct spi_mem_dirmap_desc *VAR_0)
{
 struct spi_controller *VAR_1 = VAR_0->mem->spi->controller;

 if (!VAR_0->nodirmap && VAR_1->mem_ops && VAR_1->mem_ops->dirmap_destroy)
  VAR_1->mem_ops->dirmap_destroy(VAR_0);

 FUNC_0(VAR_0);
}

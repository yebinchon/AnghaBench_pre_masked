
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ dir; } ;
struct TYPE_7__ {int nbytes; } ;
struct TYPE_10__ {TYPE_3__ data; TYPE_2__ addr; } ;
struct spi_mem_dirmap_info {TYPE_5__ op_tmpl; } ;
struct spi_mem_dirmap_desc {int nodirmap; struct spi_mem_dirmap_info info; struct spi_mem* mem; } ;
struct spi_mem {TYPE_1__* spi; } ;
struct spi_controller {TYPE_4__* mem_ops; } ;
struct TYPE_9__ {int (* dirmap_create ) (struct spi_mem_dirmap_desc*) ;} ;
struct TYPE_6__ {struct spi_controller* controller; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct spi_mem_dirmap_desc* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct spi_mem_dirmap_desc*) ;
 struct spi_mem_dirmap_desc* FUNC_2 (int,int ) ;
 int FUNC_3 (struct spi_mem*,TYPE_5__*) ;
 int FUNC_4 (struct spi_mem_dirmap_desc*) ;

struct spi_mem_dirmap_desc *
FUNC_5(struct spi_mem *VAR_5,
        const struct spi_mem_dirmap_info *VAR_6)
{
 struct spi_controller *VAR_7 = VAR_5->spi->controller;
 struct spi_mem_dirmap_desc *VAR_8;
 int VAR_9 = -VAR_2;


 if (!VAR_6->op_tmpl.addr.nbytes || VAR_6->op_tmpl.addr.nbytes > 8)
  return FUNC_0(-VAR_0);


 if (VAR_6->op_tmpl.data.dir == VAR_4)
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_8->mem = VAR_5;
 VAR_8->info = *VAR_6;
 if (VAR_7->mem_ops && VAR_7->mem_ops->dirmap_create)
  VAR_9 = VAR_7->mem_ops->dirmap_create(VAR_8);

 if (VAR_9) {
  VAR_8->nodirmap = 1;
  if (!FUNC_3(VAR_8->mem, &VAR_8->info.op_tmpl))
   VAR_9 = -VAR_2;
  else
   VAR_9 = 0;
 }

 if (VAR_9) {
  FUNC_1(VAR_8);
  return FUNC_0(VAR_9);
 }

 return VAR_8;
}

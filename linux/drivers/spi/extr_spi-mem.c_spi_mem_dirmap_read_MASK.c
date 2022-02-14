
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_8__ {scalar_t__ dir; } ;
struct TYPE_9__ {TYPE_1__ data; } ;
struct TYPE_10__ {TYPE_2__ op_tmpl; } ;
struct spi_mem_dirmap_desc {TYPE_6__* mem; scalar_t__ nodirmap; TYPE_3__ info; } ;
struct spi_controller {TYPE_4__* mem_ops; } ;
typedef int ssize_t ;
struct TYPE_13__ {TYPE_5__* spi; } ;
struct TYPE_12__ {struct spi_controller* controller; } ;
struct TYPE_11__ {int (* dirmap_read ) (struct spi_mem_dirmap_desc*,int ,size_t,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (struct spi_mem_dirmap_desc*,int ,size_t,void*) ;
 int FUNC_3 (struct spi_mem_dirmap_desc*,int ,size_t,void*) ;

ssize_t FUNC_4(struct spi_mem_dirmap_desc *VAR_3,
       u64 VAR_4, size_t VAR_5, void *VAR_6)
{
 struct spi_controller *VAR_7 = VAR_3->mem->spi->controller;
 ssize_t VAR_8;

 if (VAR_3->info.op_tmpl.data.dir != VAR_2)
  return -VAR_0;

 if (!VAR_5)
  return 0;

 if (VAR_3->nodirmap) {
  VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
 } else if (VAR_7->mem_ops && VAR_7->mem_ops->dirmap_read) {
  VAR_8 = FUNC_1(VAR_3->mem);
  if (VAR_8)
   return VAR_8;

  VAR_8 = VAR_7->mem_ops->dirmap_read(VAR_3, VAR_4, VAR_5, VAR_6);

  FUNC_0(VAR_3->mem);
 } else {
  VAR_8 = -VAR_1;
 }

 return VAR_8;
}

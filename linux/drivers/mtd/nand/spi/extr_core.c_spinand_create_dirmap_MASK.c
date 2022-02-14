
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * read_cache; int * update_cache; } ;
struct spinand_device {TYPE_4__* dirmaps; TYPE_5__* spimem; TYPE_2__ op_templates; } ;
struct spi_mem_dirmap_info {unsigned int offset; int op_tmpl; scalar_t__ length; } ;
struct spi_mem_dirmap_desc {int dummy; } ;
struct TYPE_6__ {int pagesize; } ;
struct nand_device {TYPE_1__ memorg; } ;
struct TYPE_10__ {TYPE_3__* spi; } ;
struct TYPE_9__ {struct spi_mem_dirmap_desc* rdesc; struct spi_mem_dirmap_desc* wdesc; } ;
struct TYPE_8__ {int dev; } ;


 scalar_t__ FUNC_0 (struct spi_mem_dirmap_desc*) ;
 int FUNC_1 (struct spi_mem_dirmap_desc*) ;
 struct spi_mem_dirmap_desc* FUNC_2 (int *,TYPE_5__*,struct spi_mem_dirmap_info*) ;
 unsigned int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct nand_device*) ;
 scalar_t__ FUNC_5 (struct nand_device*) ;
 struct nand_device* FUNC_6 (struct spinand_device*) ;

__attribute__((used)) static int FUNC_7(struct spinand_device *VAR_0,
     unsigned int VAR_1)
{
 struct nand_device *VAR_2 = FUNC_6(VAR_0);
 struct spi_mem_dirmap_info VAR_3 = {
  .length = FUNC_4(VAR_2) +
     FUNC_5(VAR_2),
 };
 struct spi_mem_dirmap_desc *VAR_4;


 VAR_3.offset = VAR_1 << FUNC_3(VAR_2->memorg.pagesize);

 VAR_3.op_tmpl = *VAR_0->op_templates.update_cache;
 VAR_4 = FUNC_2(&VAR_0->spimem->spi->dev,
       VAR_0->spimem, &VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_0->dirmaps[VAR_1].wdesc = VAR_4;

 VAR_3.op_tmpl = *VAR_0->op_templates.read_cache;
 VAR_4 = FUNC_2(&VAR_0->spimem->spi->dev,
       VAR_0->spimem, &VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_0->dirmaps[VAR_1].rdesc = VAR_4;

 return 0;
}

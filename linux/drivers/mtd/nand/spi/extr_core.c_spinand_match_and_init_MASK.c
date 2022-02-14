
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {int update_cache; int write_cache; int read_cache; } ;
struct spinand_info {scalar_t__ devid; TYPE_1__ op_variants; int select_target; int flags; int eccinfo; int eccreq; int memorg; } ;
struct TYPE_4__ {struct spi_mem_op const* update_cache; struct spi_mem_op const* write_cache; struct spi_mem_op const* read_cache; } ;
struct spinand_device {TYPE_2__ op_templates; int select_target; int flags; int eccinfo; } ;
struct spi_mem_op {int dummy; } ;
struct nand_device {int eccreq; int memorg; } ;


 int VAR_0 ;
 struct spi_mem_op* FUNC_0 (struct spinand_device*,int ) ;
 struct nand_device* FUNC_1 (struct spinand_device*) ;

int FUNC_2(struct spinand_device *VAR_1,
      const struct spinand_info *VAR_2,
      unsigned int VAR_3, u16 VAR_4)
{
 struct nand_device *VAR_5 = FUNC_1(VAR_1);
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  const struct spinand_info *VAR_7 = &VAR_2[VAR_6];
  const struct spi_mem_op *VAR_8;

  if (VAR_4 != VAR_7->devid)
   continue;

  VAR_5->memorg = VAR_2[VAR_6].memorg;
  VAR_5->eccreq = VAR_2[VAR_6].eccreq;
  VAR_1->eccinfo = VAR_2[VAR_6].eccinfo;
  VAR_1->flags = VAR_2[VAR_6].flags;
  VAR_1->select_target = VAR_2[VAR_6].select_target;

  VAR_8 = FUNC_0(VAR_1,
            VAR_7->op_variants.read_cache);
  if (!VAR_8)
   return -VAR_0;

  VAR_1->op_templates.read_cache = VAR_8;

  VAR_8 = FUNC_0(VAR_1,
            VAR_7->op_variants.write_cache);
  if (!VAR_8)
   return -VAR_0;

  VAR_1->op_templates.write_cache = VAR_8;

  VAR_8 = FUNC_0(VAR_1,
            VAR_7->op_variants.update_cache);
  VAR_1->op_templates.update_cache = VAR_8;

  return 0;
 }

 return -VAR_0;
}

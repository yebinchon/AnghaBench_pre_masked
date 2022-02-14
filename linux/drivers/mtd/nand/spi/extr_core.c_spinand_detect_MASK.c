
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int data; int len; } ;
struct spinand_device {TYPE_5__* spimem; TYPE_3__* manufacturer; int select_target; TYPE_1__ id; } ;
struct TYPE_7__ {int ntargets; } ;
struct nand_device {TYPE_2__ memorg; } ;
struct device {int dummy; } ;
struct TYPE_10__ {TYPE_4__* spi; } ;
struct TYPE_9__ {struct device dev; } ;
struct TYPE_8__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int,...) ;
 int FUNC_2 (struct nand_device*) ;
 int FUNC_3 (struct nand_device*) ;
 int FUNC_4 (struct nand_device*) ;
 int FUNC_5 (struct nand_device*) ;
 int FUNC_6 (struct spinand_device*) ;
 int FUNC_7 (struct spinand_device*,int ) ;
 int FUNC_8 (struct spinand_device*) ;
 struct nand_device* FUNC_9 (struct spinand_device*) ;

__attribute__((used)) static int FUNC_10(struct spinand_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->spimem->spi->dev;
 struct nand_device *VAR_4 = FUNC_9(VAR_2);
 int VAR_5;

 VAR_5 = FUNC_8(VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_7(VAR_2, VAR_2->id.data);
 if (VAR_5)
  return VAR_5;

 VAR_2->id.len = VAR_1;

 VAR_5 = FUNC_6(VAR_2);
 if (VAR_5) {
  FUNC_0(VAR_3, "unknown raw ID %*phN\n", VAR_1,
   VAR_2->id.data);
  return VAR_5;
 }

 if (VAR_4->memorg.ntargets > 1 && !VAR_2->select_target) {
  FUNC_0(VAR_3,
   "SPI NANDs with more than one die must implement ->select_target()\n");
  return -VAR_0;
 }

 FUNC_1(&VAR_2->spimem->spi->dev,
   "%s SPI NAND was found.\n", VAR_2->manufacturer->name);
 FUNC_1(&VAR_2->spimem->spi->dev,
   "%llu MiB, block size: %zu KiB, page size: %zu, OOB size: %u\n",
   FUNC_5(VAR_4) >> 20, FUNC_2(VAR_4) >> 10,
   FUNC_3(VAR_4), FUNC_4(VAR_4));

 return 0;
}

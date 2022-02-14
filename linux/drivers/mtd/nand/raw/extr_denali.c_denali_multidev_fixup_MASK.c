
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_memory_organization {int pagesize; int oobsize; } ;
struct TYPE_2__ {int size; int bytes; int strength; } ;
struct nand_chip {int page_shift; int phys_erase_shift; int bbt_erase_shift; int chip_shift; int pagemask; TYPE_1__ ecc; int base; } ;
struct mtd_info {int size; int erasesize; int writesize; int oobsize; } ;
struct denali_controller {int devs_per_cs; int oob_skip_bytes; int dev; scalar_t__ reg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;
 struct nand_memory_organization* FUNC_4 (int *) ;
 struct denali_controller* FUNC_5 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_6(struct nand_chip *VAR_2)
{
 struct denali_controller *VAR_3 = FUNC_5(VAR_2);
 struct mtd_info *VAR_4 = FUNC_3(VAR_2);
 struct nand_memory_organization *VAR_5;

 VAR_5 = FUNC_4(&VAR_2->base);
 VAR_3->devs_per_cs = FUNC_1(VAR_3->reg + VAR_0);





 if (VAR_3->devs_per_cs == 0) {
  VAR_3->devs_per_cs = 1;
  FUNC_2(1, VAR_3->reg + VAR_0);
 }

 if (VAR_3->devs_per_cs == 1)
  return 0;

 if (VAR_3->devs_per_cs != 2) {
  FUNC_0(VAR_3->dev, "unsupported number of devices %d\n",
   VAR_3->devs_per_cs);
  return -VAR_1;
 }


 VAR_5->pagesize <<= 1;
 VAR_5->oobsize <<= 1;
 VAR_4->size <<= 1;
 VAR_4->erasesize <<= 1;
 VAR_4->writesize <<= 1;
 VAR_4->oobsize <<= 1;
 VAR_2->page_shift += 1;
 VAR_2->phys_erase_shift += 1;
 VAR_2->bbt_erase_shift += 1;
 VAR_2->chip_shift += 1;
 VAR_2->pagemask <<= 1;
 VAR_2->ecc.size <<= 1;
 VAR_2->ecc.bytes <<= 1;
 VAR_2->ecc.strength <<= 1;
 VAR_3->oob_skip_bytes <<= 1;

 return 0;
}

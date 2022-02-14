
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int size; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct TYPE_4__ {int reg_size; } ;
struct mtk_nfc_nand_chip {TYPE_2__ fdm; } ;
struct mtd_oob_region {int offset; scalar_t__ length; } ;
struct mtd_info {int writesize; scalar_t__ oobsize; } ;


 int VAR_0 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 struct mtk_nfc_nand_chip* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_1, int VAR_2,
     struct mtd_oob_region *VAR_3)
{
 struct nand_chip *VAR_4 = FUNC_0(VAR_1);
 struct mtk_nfc_nand_chip *VAR_5 = FUNC_1(VAR_4);
 u32 VAR_6;

 if (VAR_2)
  return -VAR_0;

 VAR_6 = VAR_1->writesize / VAR_4->ecc.size;
 VAR_3->offset = VAR_5->fdm.reg_size * VAR_6;
 VAR_3->length = VAR_1->oobsize - VAR_3->offset;

 return 0;
}

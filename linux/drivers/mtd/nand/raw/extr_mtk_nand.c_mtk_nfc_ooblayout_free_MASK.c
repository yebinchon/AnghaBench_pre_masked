
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int size; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtk_nfc_fdm {int reg_size; scalar_t__ ecc_size; } ;
struct mtk_nfc_nand_chip {struct mtk_nfc_fdm fdm; } ;
struct mtd_oob_region {scalar_t__ offset; scalar_t__ length; } ;
struct mtd_info {int writesize; } ;


 int VAR_0 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 struct mtk_nfc_nand_chip* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_1, int VAR_2,
      struct mtd_oob_region *VAR_3)
{
 struct nand_chip *VAR_4 = FUNC_0(VAR_1);
 struct mtk_nfc_nand_chip *VAR_5 = FUNC_1(VAR_4);
 struct mtk_nfc_fdm *VAR_6 = &VAR_5->fdm;
 u32 VAR_7;

 VAR_7 = VAR_1->writesize / VAR_4->ecc.size;

 if (VAR_2 >= VAR_7)
  return -VAR_0;

 VAR_3->length = VAR_6->reg_size - VAR_6->ecc_size;
 VAR_3->offset = VAR_2 * VAR_6->reg_size + VAR_6->ecc_size;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_ecc_ctrl {scalar_t__ total; } ;
struct nand_chip {struct nand_ecc_ctrl ecc; } ;
struct mtd_oob_region {scalar_t__ offset; scalar_t__ length; } ;
struct mtd_info {scalar_t__ oobsize; } ;


 int VAR_0 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_1, int VAR_2,
      struct mtd_oob_region *VAR_3)
{
 struct nand_chip *VAR_4 = FUNC_0(VAR_1);
 struct nand_ecc_ctrl *VAR_5 = &VAR_4->ecc;

 if (VAR_2)
  return -VAR_0;

 VAR_3->length = VAR_1->oobsize - VAR_5->total - 3;
 VAR_3->offset = 3 + VAR_5->total;

 return 0;
}

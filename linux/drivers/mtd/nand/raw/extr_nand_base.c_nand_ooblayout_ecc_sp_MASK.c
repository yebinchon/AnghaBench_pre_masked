
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_ecc_ctrl {int total; } ;
struct nand_chip {struct nand_ecc_ctrl ecc; } ;
struct mtd_oob_region {int offset; int length; } ;
struct mtd_info {int oobsize; } ;


 int VAR_0 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_1, int VAR_2,
     struct mtd_oob_region *VAR_3)
{
 struct nand_chip *VAR_4 = FUNC_0(VAR_1);
 struct nand_ecc_ctrl *VAR_5 = &VAR_4->ecc;

 if (VAR_2 > 1)
  return -VAR_0;

 if (!VAR_2) {
  VAR_3->offset = 0;
  if (VAR_1->oobsize == 16)
   VAR_3->length = 4;
  else
   VAR_3->length = 3;
 } else {
  if (VAR_1->oobsize == 8)
   return -VAR_0;

  VAR_3->offset = 6;
  VAR_3->length = VAR_5->total - 4;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_ecc_ctrl {int total; } ;
struct nand_chip {struct nand_ecc_ctrl ecc; } ;
struct mtd_oob_region {int offset; int length; } ;
struct mtd_info {int oobsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_2, int VAR_3,
      struct mtd_oob_region *VAR_4)
{
 struct nand_chip *VAR_5 = FUNC_0(VAR_2);
 struct nand_ecc_ctrl *VAR_6 = &VAR_5->ecc;

 if (VAR_3)
  return -VAR_1;

 switch (VAR_2->oobsize) {
 case 64:
  VAR_4->offset = 40;
  break;
 case 128:
  VAR_4->offset = 80;
  break;
 default:
  return -VAR_0;
 }

 VAR_4->length = VAR_6->total;
 if (VAR_4->offset + VAR_4->length > VAR_2->oobsize)
  return -VAR_1;

 return 0;
}

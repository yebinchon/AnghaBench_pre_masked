
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {scalar_t__ oob_poi; } ;
struct mtd_oob_region {int length; scalar_t__ offset; } ;
struct mtd_info {scalar_t__ writesize; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int ,struct mtd_oob_region*) ;
 int FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct nand_chip*,int,scalar_t__,scalar_t__,int ) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_1, int VAR_2)
{
 struct mtd_info *VAR_3 = FUNC_3(VAR_1);
 struct mtd_oob_region VAR_4 = { };


 FUNC_0(VAR_3, 0, &VAR_4);
 if (!VAR_4.length)
  return -VAR_0;

 if (!FUNC_1(VAR_1))
  return -VAR_0;

 return FUNC_2(VAR_1, VAR_2, VAR_3->writesize + VAR_4.offset,
     VAR_1->oob_poi + VAR_4.offset, VAR_4.length);
}

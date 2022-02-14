
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int oob_poi; } ;
struct mtd_info {int oobsize; int writesize; } ;


 int FUNC_0 (struct nand_chip*,int,int ,int const*,int ) ;
 int FUNC_1 (struct nand_chip*) ;
 struct mtd_info* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*,int ,int ,int) ;

int FUNC_4(struct nand_chip *VAR_0, const uint8_t *VAR_1,
   int VAR_2, int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_2(VAR_0);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_3, 0, VAR_1, VAR_4->writesize);
 if (VAR_5)
  return VAR_5;

 if (VAR_2) {
  VAR_5 = FUNC_3(VAR_0, VAR_0->oob_poi, VAR_4->oobsize,
      0);
  if (VAR_5)
   return VAR_5;
 }

 return FUNC_1(VAR_0);
}

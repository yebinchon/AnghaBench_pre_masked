
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nand_chip {int const* oob_poi; } ;
struct mtd_info {int oobsize; int writesize; } ;
struct atmel_nand {int pmecc; } ;


 int VAR_0 ;
 int FUNC_0 (struct nand_chip*,int) ;
 int FUNC_1 (struct nand_chip*,int ,int) ;
 int FUNC_2 (struct nand_chip*,int) ;
 int FUNC_3 (struct nand_chip*,int const*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nand_chip*,int,int ,int *,int ) ;
 int FUNC_6 (struct nand_chip*) ;
 struct mtd_info* FUNC_7 (struct nand_chip*) ;
 struct atmel_nand* FUNC_8 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_9(struct nand_chip *VAR_1, const u8 *VAR_2,
         bool VAR_3, int VAR_4, bool VAR_5)
{
 struct mtd_info *VAR_6 = FUNC_7(VAR_1);
 struct atmel_nand *VAR_7 = FUNC_8(VAR_1);
 int VAR_8;

 FUNC_5(VAR_1, VAR_4, 0, ((void*)0), 0);

 VAR_8 = FUNC_1(VAR_1, VAR_0, VAR_5);
 if (VAR_8)
  return VAR_8;

 FUNC_3(VAR_1, VAR_2, VAR_6->writesize);

 VAR_8 = FUNC_2(VAR_1, VAR_5);
 if (VAR_8) {
  FUNC_4(VAR_7->pmecc);
  return VAR_8;
 }

 FUNC_0(VAR_1, VAR_5);

 FUNC_3(VAR_1, VAR_1->oob_poi, VAR_6->oobsize);

 return FUNC_6(VAR_1);
}

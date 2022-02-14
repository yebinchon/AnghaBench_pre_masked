
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nand_ecc_ctrl {int bytes; int steps; } ;
struct nand_chip {struct nand_ecc_ctrl ecc; } ;
struct mtd_info {int oobsize; int writesize; } ;


 int FUNC_0 (struct nand_chip*,int,int *,int ,int) ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct nand_chip*,int *,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_0,
          u8 *VAR_1, int *VAR_2,
          int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_1(VAR_0);
 struct nand_ecc_ctrl *VAR_5 = &VAR_0->ecc;
 int VAR_6 = ((VAR_5->bytes + 4) * VAR_5->steps);
 int VAR_7 = VAR_4->oobsize - VAR_6;

 if (VAR_7 <= 0)
  return;

 if (!VAR_2 || *VAR_2 != VAR_6)
  FUNC_0(VAR_0, VAR_6 + VAR_4->writesize,
         ((void*)0), 0, 0);

 FUNC_2(VAR_0, VAR_1 + VAR_6, VAR_7, 0, VAR_3);

 if (VAR_2)
  *VAR_2 = VAR_4->oobsize + VAR_4->writesize;
}

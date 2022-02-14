
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
 int FUNC_3 (struct nand_chip*,int *,int) ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_0,
         u8 *VAR_1, int *VAR_2,
         bool VAR_3, int VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_1(VAR_0);
 struct nand_ecc_ctrl *VAR_6 = &VAR_0->ecc;
 int VAR_7 = ((VAR_6->bytes + 4) * VAR_6->steps);
 int VAR_8 = VAR_5->oobsize - VAR_7;

 if (VAR_8 <= 0)
  return;

 if (!VAR_2 || *VAR_2 != VAR_7)
  FUNC_0(VAR_0, VAR_5->writesize, ((void*)0), 0,
        0);

 if (!VAR_3)
  FUNC_3(VAR_0, VAR_1 + VAR_7, VAR_8);
 else
  FUNC_2(VAR_0, VAR_1 + VAR_7, VAR_8,
           0, VAR_4);

 if (VAR_2)
  *VAR_2 = VAR_5->oobsize + VAR_5->writesize;
}

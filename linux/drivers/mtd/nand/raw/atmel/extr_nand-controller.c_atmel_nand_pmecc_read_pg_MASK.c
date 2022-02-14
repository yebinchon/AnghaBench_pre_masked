
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nand_chip {int * oob_poi; } ;
struct mtd_info {int oobsize; int writesize; } ;


 int VAR_0 ;
 int FUNC_0 (struct nand_chip*,int *,int) ;
 int FUNC_1 (struct nand_chip*,int) ;
 int FUNC_2 (struct nand_chip*,int ,int) ;
 int FUNC_3 (struct nand_chip*,int *,int ) ;
 int FUNC_4 (struct nand_chip*,int,int ,int *,int ) ;
 struct mtd_info* FUNC_5 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_6(struct nand_chip *VAR_1, u8 *VAR_2,
        bool VAR_3, int VAR_4, bool VAR_5)
{
 struct mtd_info *VAR_6 = FUNC_5(VAR_1);
 int VAR_7;

 FUNC_4(VAR_1, VAR_4, 0, ((void*)0), 0);

 VAR_7 = FUNC_2(VAR_1, VAR_0, VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_3(VAR_1, VAR_2, VAR_6->writesize);
 FUNC_3(VAR_1, VAR_1->oob_poi, VAR_6->oobsize);

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_5);

 FUNC_1(VAR_1, VAR_5);

 return VAR_7;
}

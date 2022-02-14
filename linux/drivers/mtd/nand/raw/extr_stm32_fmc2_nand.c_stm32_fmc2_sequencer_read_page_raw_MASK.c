
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nand_chip {int oob_poi; int cur_cs; } ;
struct mtd_info {int oobsize; int writesize; } ;


 int FUNC_0 (struct nand_chip*,int ,int ,int ,int) ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct nand_chip*,int,int,int) ;
 int FUNC_3 (struct nand_chip*,int ) ;
 int FUNC_4 (struct nand_chip*,int *,int,int) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_0, u8 *VAR_1,
           int VAR_2, int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_1(VAR_0);
 int VAR_5;


 VAR_5 = FUNC_3(VAR_0, VAR_0->cur_cs);
 if (VAR_5)
  return VAR_5;


 FUNC_2(VAR_0, VAR_3, 1, 0);


 VAR_5 = FUNC_4(VAR_0, VAR_1, 1, 0);
 if (VAR_5)
  return VAR_5;


 if (VAR_2)
  return FUNC_0(VAR_0, VAR_4->writesize,
        VAR_0->oob_poi, VAR_4->oobsize,
        0);

 return 0;
}

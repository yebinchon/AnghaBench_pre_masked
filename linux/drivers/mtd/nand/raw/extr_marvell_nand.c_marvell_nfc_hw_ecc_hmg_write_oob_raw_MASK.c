
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nand_chip {int oob_poi; int cur_cs; } ;
struct mtd_info {int writesize; } ;


 int FUNC_0 (struct nand_chip*,int *,int ,int,int) ;
 int FUNC_1 (struct nand_chip*,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int * FUNC_3 (struct nand_chip*) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_0,
      int VAR_1)
{
 struct mtd_info *VAR_2 = FUNC_4(VAR_0);
 u8 *VAR_3 = FUNC_3(VAR_0);

 FUNC_2(VAR_3, 0xFF, VAR_2->writesize);

 FUNC_1(VAR_0, VAR_0->cur_cs);
 return FUNC_0(VAR_0, VAR_3, VAR_0->oob_poi,
          1, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nand_chip {int * oob_poi; } ;
struct mtd_info {int oobsize; } ;


 struct mtd_info* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct mtd_info*,struct nand_chip*,void*,void*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_0, const u8 *VAR_1,
         int VAR_2, int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_0(VAR_0);
 void *VAR_5 = VAR_2 ? VAR_0->oob_poi : ((void*)0);

 return FUNC_1(VAR_4, VAR_0, (void *)VAR_1, VAR_5,
         VAR_4->oobsize, VAR_3, 0);
}

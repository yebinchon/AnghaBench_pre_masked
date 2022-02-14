
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int oob_poi; } ;
struct mtd_info {int oobsize; } ;


 struct mtd_info* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct mtd_info*,struct nand_chip*,int *,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_0, int VAR_1)
{
 struct mtd_info *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, VAR_0, ((void*)0), VAR_0->oob_poi,
        VAR_2->oobsize, VAR_1, 0);
}

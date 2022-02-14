
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nand_chip {int dummy; } ;
struct mtd_info {int writesize; } ;


 int FUNC_0 (struct nand_chip*,void*,int ,int,int) ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_0, const u8 *VAR_1,
        int VAR_2, int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_1(VAR_0);

 return FUNC_0(VAR_0, (void *)VAR_1, VAR_4->writesize, VAR_3, 1);
}

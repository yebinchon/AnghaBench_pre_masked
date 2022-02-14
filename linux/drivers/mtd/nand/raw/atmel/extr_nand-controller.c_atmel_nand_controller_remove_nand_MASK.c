
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;
struct atmel_nand {int node; struct nand_chip base; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (struct nand_chip*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_4(struct atmel_nand *VAR_0)
{
 struct nand_chip *VAR_1 = &VAR_0->base;
 struct mtd_info *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_1);
 FUNC_0(&VAR_0->node);

 return 0;
}

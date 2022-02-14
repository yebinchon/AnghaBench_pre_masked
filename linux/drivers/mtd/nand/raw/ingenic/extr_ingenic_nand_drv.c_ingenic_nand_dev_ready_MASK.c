
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct ingenic_nand {int busy_gpio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nand_chip*) ;
 struct ingenic_nand* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_0)
{
 struct ingenic_nand *VAR_1 = FUNC_2(FUNC_1(VAR_0));

 return !FUNC_0(VAR_1->busy_gpio);
}

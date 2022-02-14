
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_nand_info {int ready_gpiod; } ;
struct nand_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 struct omap_nand_info* FUNC_1 (int ) ;
 int FUNC_2 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_0)
{
 struct omap_nand_info *VAR_1 = FUNC_1(FUNC_2(VAR_0));

 return FUNC_0(VAR_1->ready_gpiod);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct ingenic_nand {int reading; } ;


 int VAR_0 ;
 int FUNC_0 (struct nand_chip*) ;
 struct ingenic_nand* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_1, int VAR_2)
{
 struct ingenic_nand *VAR_3 = FUNC_1(FUNC_0(VAR_1));

 VAR_3->reading = (VAR_2 == VAR_0);
}

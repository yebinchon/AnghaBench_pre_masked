
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct gpiomtd {int rdy; } ;


 struct gpiomtd* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_0)
{
 struct gpiomtd *VAR_1 = FUNC_0(FUNC_2(VAR_0));

 return FUNC_1(VAR_1->rdy);
}

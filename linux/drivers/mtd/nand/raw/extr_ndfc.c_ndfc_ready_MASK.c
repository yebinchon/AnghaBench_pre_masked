
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ndfc_controller {scalar_t__ ndfcbase; } ;
struct nand_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct ndfc_controller* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_2)
{
 struct ndfc_controller *VAR_3 = FUNC_1(VAR_2);

 return FUNC_0(VAR_3->ndfcbase + VAR_0) & VAR_1;
}

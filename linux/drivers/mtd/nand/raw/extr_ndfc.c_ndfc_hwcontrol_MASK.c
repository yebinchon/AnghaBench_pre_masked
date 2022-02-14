
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ndfc_controller {scalar_t__ ndfcbase; } ;
struct nand_chip {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ndfc_controller* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_4, int VAR_5, unsigned int VAR_6)
{
 struct ndfc_controller *VAR_7 = FUNC_0(VAR_4);

 if (VAR_5 == VAR_1)
  return;

 if (VAR_6 & VAR_0)
  FUNC_1(VAR_5 & 0xFF, VAR_7->ndfcbase + VAR_3);
 else
  FUNC_1(VAR_5 & 0xFF, VAR_7->ndfcbase + VAR_2);
}
